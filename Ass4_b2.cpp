#include <iostream>
#include <stack>

using namespace std;

// Function to convert an integer to binary using stack
string decimalToBinary(int n) {
    stack<int> binaryStack;

    // Convert decimal to binary
    while (n > 0) {
        binaryStack.push(n % 2);
        n /= 2;
    }

    // Build binary string from stack
    string binaryString = "";
    while (!binaryStack.empty()) {
        binaryString += to_string(binaryStack.top());
        binaryStack.pop();
    }

    return binaryString;
}

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    string binary = decimalToBinary(n);
    cout << "Binary representation: " << binary << endl;

    return 0;
}
