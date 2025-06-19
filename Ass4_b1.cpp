#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

// Node class for linked list
class Node {
public:
    char data;
    Node* next;
    Node(char data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Stack class using linked list
class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void push(char data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }

    char pop() {
        if (isEmpty())
            return '\0';
        char popped = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return popped;
    }

    char peek() {
        if (isEmpty())
            return '\0';
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};

// Function to check if a character is an operator
bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

// Function to convert infix expression to postfix expression
string infixToPostfix(string expression) {
    unordered_map<char, int> precedence = {{'+', 1}, {'-', 1}, {'*', 2}, {'/', 2}, {'^', 3}};
    string postfix = "";
    Stack stack;

    for (char c : expression) {
        if (isalnum(c)) {
            postfix += c;
        } else if (c == '(') {
            stack.push(c);
        } else if (c == ')') {
            while (stack.peek() != '(' && !stack.isEmpty()) {
                postfix += stack.pop();
            }
            stack.pop(); // Pop '('
        } else if (isOperator(c)) {
            while (!stack.isEmpty() && precedence[c] <= precedence[stack.peek()]) {
                postfix += stack.pop();
            }
            stack.push(c);
        }
    }

    while (!stack.isEmpty()) {
        postfix += stack.pop();
    }

    return postfix;
}

// Function to evaluate postfix expression
int evaluatePostfix(string expression, unordered_map<char, int>& variables) {
    Stack stack;

    for (char c : expression) {
        if (isalnum(c)) {
            stack.push(variables[c]);
        } else if (isOperator(c)) {
            int operand2 = stack.pop() - '0';
            int operand1 = stack.pop() - '0';
            switch (c) {
                case '+':
                    stack.push(operand1 + operand2 + '0');
                    break;
                case '-':
                    stack.push(operand1 - operand2 + '0');
                    break;
                case '*':
                    stack.push(operand1 * operand2 + '0');
                    break;
                case '/':
                    stack.push(operand1 / operand2 + '0');
                    break;
                case '^':
                    stack.push(pow(operand1, operand2) + '0');
                    break;
            }
        }
    }

    return stack.pop() - '0';
}

int main() {
    string expression = "a+b";
    unordered_map<char, int> variables = {{'a', 3}, {'b', 5}};

    string postfixExp = infixToPostfix(expression);
    int result = evaluatePostfix(postfixExp, variables);

    cout << "Infix to Postfix: " << postfixExp << endl;
    cout << "Result: " << result << endl;

    return 0;
}
