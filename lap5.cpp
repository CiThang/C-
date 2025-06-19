#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>

using namespace std;

struct Node {
string data;
Node* left;
Node* right;
};

bool isOperand(char c) {
return (c >= '0' && c <= '9');
}

Node* createNode(const string& data) {
Node* newNode = new Node;
newNode->data = data;
newNode->left = newNode->right = NULL;
return newNode;
}

Node* buildExpressionTree(const string& expression) {
stack<Node*> st;

for (int i = 0; i < expression.length(); ++i) {
if (expression[i] == ' ') {

continue;
} else if (isOperand(expression[i])) {
string operand = "";
while (i < expression.length() && isOperand(expression[i])) {
operand += expression[i];
i++;
}
i--;
Node* t = createNode(operand);
st.push(t);
} else {
Node* t = createNode(string(1, expression[i]));
t->right = st.top(); st.pop();
t->left = st.top(); st.pop();
st.push(t);
}
}
return st.top();
}

void preOrderTraversal(Node* root) {
if (root != NULL) {
cout << root->data << " ";
preOrderTraversal(root->left);
preOrderTraversal(root->right);
}
}

void inOrderTraversal(Node* root) {

if (root != NULL) {
inOrderTraversal(root->left);
cout << root->data << " ";
inOrderTraversal(root->right);
}
}

void postOrderTraversal(Node* root) {
if (root != NULL) {
postOrderTraversal(root->left);
postOrderTraversal(root->right);
cout << root->data << " ";
}
}

int evaluateExpressionTree(Node* root) {
if (root == NULL) {
return 0;
}

if (root->left == NULL && root->right == NULL) {
return atoi(root->data.c_str());
}

int leftValue = evaluateExpressionTree(root->left);
int rightValue = evaluateExpressionTree(root->right);

if (root->data == "+") {
return leftValue + rightValue;

} else if (root->data == "-") {
return leftValue - rightValue;
} else if (root->data == "*") {
return leftValue * rightValue;
} else if (root->data == "/") {
return leftValue / rightValue;
} else {
return 0;
}
}

int main() {
string expression = "8 5 * 4 2 * + 3 /";

Node* root = buildExpressionTree(expression);

if (root == NULL) {
cout << "Failed to build expression tree" << endl;
return 1;
}

cout << "Prefix Expression: ";
preOrderTraversal(root);
cout << endl;

cout << "Infix Expression: ";
inOrderTraversal(root);
cout << endl;

cout << "Postfix Expression: ";
postOrderTraversal(root);
cout << endl;

int result = evaluateExpressionTree(root);
cout << "Result: " << result << endl;

return 0;
}