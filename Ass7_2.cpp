#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isOperator(char c) {
return (c == '+' || c == '-' || c == '*' || c == '/');
}

string prefixToInfix(string prefixExpr) {
stack<string> stk;
int len = prefixExpr.length();
for (int i = len - 1; i >= 0; i--) {
if (isalpha(prefixExpr[i])) {
string operand(1, prefixExpr[i]);
stk.push(operand);
} else if (isOperator(prefixExpr[i])) {

string op1 = stk.top();
stk.pop();
string op2 = stk.top();
stk.pop();
string expression = "(" + op1 + prefixExpr[i] + op2 + ")";
stk.push(expression);
}
}
return stk.top();
}

int main() {
string prefixExpr = "-/ab*+bcd";

string infixExpr = prefixToInfix(prefixExpr);
cout << "Infix Expression: " << infixExpr << endl;

return 0;
}