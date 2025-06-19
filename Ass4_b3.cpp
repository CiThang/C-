#include <iostream>
#include <stack>

using namespace std;

// Function to reverse a string using a stack
string reverseStringWithStack(const string& str) {
    stack<char> charStack;

    // Push characters onto the stack
    for (char c : str) {
        charStack.push(c);
    }

    // Pop characters from the stack to form the reversed string
    string reversedString = "";
    while (!charStack.empty()) {
        reversedString += charStack.top();
        charStack.pop();
    }

    return reversedString;
}

// Function to reverse a string using recursion
string reverseStringWithRecursion(const string& str) {
    if (str.length() <= 1) {
        return str;
    }
    return reverseStringWithRecursion(str.substr(1)) + str[0];
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string reversedStack = reverseStringWithStack(input);
    string reversedRecursion = reverseStringWithRecursion(input);

    cout << "Reversed string using stack: " << reversedStack << endl;
    cout << "Reversed string using recursion: " << reversedRecursion << endl;

    return 0;
}
