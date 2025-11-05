#include <iostream>
#include <string>
using namespace std;

// struct Node {
//     char data;
//     Node* next;

//     Node(char d) : data(d), next(nullptr) {}
// };

// class MyStack {
// private:
//     Node* top;

// public:
//     MyStack() : top(nullptr) {}

//     ~MyStack() {
//         while (!isEmpty()) {
//             pop();
//         }
//     }

//     void push(char data) {
//         Node* newNode = new Node(data);
//         newNode->next = top;
//         top = newNode;
//     }

//     void pop() {
//         if (isEmpty()) {
//         }
//         Node* temp = top;
//         top = top->next;
//         delete temp;
//     }

//     char peek() {
//         if (isEmpty()) {
//             return '\0'; 
//         }
//         return top->data;
//     }

//     bool isEmpty() {
//         return top == nullptr;
//     }
// };

// bool areParenthesesBalanced(const string& expr) {
//     MyStack s;
//     char c;

//     for (int i = 0; i < expr.length(); i++) {
//         c = expr[i];

//         if (c == '{' || c == '(' || c == '[') {
//             s.push(c);
//             continue;
//         }

//         if (s.isEmpty()) {
//             return false;
//         }

//         switch (c) {
//         case ')':
//             if (s.peek() != '(') return false;
//             s.pop();
//             break;

//         case '}':
//             if (s.peek() != '{') return false;
//             s.pop();
//             break;

//         case ']':
//             if (s.peek() != '[') return false;
//             s.pop();
//             break;
//         }
//     }

//     return s.isEmpty();
// }

// int main() {
//     string expr1 = "{[()]}";
//     string expr2 = "([)]";
//     string expr3 = "{[}";
//     string expr4 = "()[]{}";
//     string expr5 = "())";

//     cout << expr1 << ": " << (areParenthesesBalanced(expr1) ? "Balanced" : "Not Balanced") << endl;
//     cout << expr2 << ": " << (areParenthesesBalanced(expr2) ? "Balanced" : "Not Balanced") << endl;
//     cout << expr3 << ": " << (areParenthesesBalanced(expr3) ? "Balanced" : "Not Balanced") << endl;
//     cout << expr4 << ": " << (areParenthesesBalanced(expr4) ? "Balanced" : "Not Balanced") << endl;
//     cout << expr5 << ": " << (areParenthesesBalanced(expr5) ? "Balanced" : "Not Balanced") << endl;

//     return 0;
// }

// const int MAX_STACK_SIZE = 100;

// class Stack {
// private:
//     char items[MAX_STACK_SIZE];
//     int top_index;

// public:
//     Stack() {
//         top_index = -1;
//     }

//     bool empty() {
//         return top_index == -1;
//     }

//     void push(char c) {
//         if (top_index < MAX_STACK_SIZE - 1) {
//             items[++top_index] = c;
//         }
//     }

//     void pop() {
//         if (!empty()) {
//             top_index--;
//         }
//     }

//     char top() {
//         if (!empty()) {
//             return items[top_index];
//         }
//         return '\0';
//     } 
// };

// bool isOperand(char ch) {
//     return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
// }

// int getPrecedence(char op) {
//     if (op == '^')
//         return 3;
//     else if (op == '*' || op == '/')
//         return 2;
//     else if (op == '+' || op == '-')
//         return 1;
//     else
//         return -1; 
// }

// string infixToPostfix(const string& infix) {
//     Stack s;
//     string postfix = "";

//     for (char ch : infix) {
//         if (isOperand(ch)) {
//             postfix += ch;
//         }
//         else if (ch == '(') {
//             s.push('(');
//         }
//         else if (ch == ')') {
//             while (!s.empty() && s.top() != '(') {
//                 postfix += s.top();
//                 s.pop();
//             }
//             if (!s.empty()) {
//                s.pop(); 
//             }
//         }
//         else {
//             while (!s.empty() && getPrecedence(ch) <= getPrecedence(s.top())) {
//                 postfix += s.top();
//                 s.pop();
//             }
//             s.push(ch);
//         }
//     }

//     while (!s.empty()) {
//         postfix += s.top();
//         s.pop();
//     }

//     return postfix;
// }

// int main() {
//     string infix_expression = "(A+B)*C";
//     string postfix_expression = infixToPostfix(infix_expression);
//     cout << "Infix expression: " << infix_expression << endl;
//     cout << "Postfix expression: " << postfix_expression << endl;
//     return 0;
// }

// const int MAX_STACK_SIZE = 100;

// class Stack {
// private:
//     char items[MAX_STACK_SIZE];
//     int top_index;

// public:
//     Stack() {
//         top_index = -1;
//     }

//     bool empty() {
//         return top_index == -1;
//     }

//     void push(char c) {
//         if (top_index < MAX_STACK_SIZE - 1) {
//             items[++top_index] = c;
//         }
//     }

//     void pop() {
//         if (!empty()) {
//             top_index--;
//         }
//     }

//     char top() {
//         if (!empty()) {
//             return items[top_index];
//         }
//         return '\0'; // Return null character if empty
//     }
// };

// // Function to check if a character is an operand
// bool isOperand(char ch) {
//     return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
// }

// // Function to return precedence of operators
// int getPrecedence(char op) {
//     if (op == '^')
//         return 3;
//     else if (op == '*' || op == '/')
//         return 2;
//     else if (op == '+' || op == '-')
//         return 1;
//     else
//         return -1; // For parentheses
// }


// string infixToPostfix(const string& infix) {
//     Stack s;
//     string postfix = "";

//     for (char ch : infix) {
//         if (isOperand(ch)) {
//             postfix += ch;
//         } else if (ch == '(') {
//             s.push('(');
//         } else if (ch == ')') {
//             while (!s.empty() && s.top() != '(') {
//                 postfix += s.top();
//                 s.pop();
//             }
//             if (!s.empty()) {
//                s.pop();
//             }
//         }
//         else { 
//             while (!s.empty() && getPrecedence(ch) <= getPrecedence(s.top())) {
//                 postfix += s.top();
//                 s.pop();
//             }
//             s.push(ch);
//         }
//     }

//     while (!s.empty()) {
//         postfix += s.top();
//         s.pop();
//     }

//     return postfix;
// }


// string reverseString(string str) {
//     string reversed_str = "";
//     for (int i = str.length() - 1; i >= 0; i--) {
//         reversed_str += str[i];
//     }
//     return reversed_str;
// }

// string infixToPrefix(string infix) {
//     string reversed_infix = reverseString(infix);

//     for (int i = 0; i < reversed_infix.length(); i++) {
//         if (reversed_infix[i] == '(') {
//             reversed_infix[i] = ')';
//         } else if (reversed_infix[i] == ')') {
//             reversed_infix[i] = '(';
//         }
//     }

//     string postfix_expr = infixToPostfix(reversed_infix);

//     string prefix_expr = reverseString(postfix_expr);

//     return prefix_expr;
// }

// int main() {
//     string infix_expression = "(A+B)*(C+D)";
//     string prefix_expression = infixToPrefix(infix_expression);
//     cout << "Infix expression: " << infix_expression << endl;
//     cout << "Prefix expression: " << prefix_expression << endl;
//     return 0;
// }

// const int MAX_STACK_SIZE = 100;

// class IntStack {
// private:
//     int items[MAX_STACK_SIZE];
//     int top_index;

// public:
//     IntStack() {
//         top_index = -1;
//     }

//     bool empty() {
//         return top_index == -1;
//     }

//     void push(int val) {
//         if (top_index < MAX_STACK_SIZE - 1) {
//             items[++top_index] = val;
//         }
//     }

//     void pop() {
//         if (!empty()) {
//             top_index--;
//         }
//     }

//     int top() {
//         if (!empty()) {
//             return items[top_index];
//         }
//         return -1; 
//     }
// };

// int evaluatePostfix(const string& expression) {
//     IntStack s;

//     for (int i = 0; i < expression.length(); ++i) {
//         if (expression[i] == ' ') {
//             continue;
//         }
//         else if (isdigit(expression[i])) {
//             s.push(expression[i] - '0');
//         }
//         else {
//             int val1 = s.top();
//             s.pop();
//             int val2 = s.top();
//             s.pop();

//             switch (expression[i]) {
//                 case '+': s.push(val2 + val1); break;
//                 case '-': s.push(val2 - val1); break;
//                 case '*': s.push(val2 * val1); break;
//                 case '/': s.push(val2 / val1); break;
//             }
//         }
//     }
//     return s.top();
// }

// int main() {
//     string postfix_expression = "2 3 + 5 *";
//     int result = evaluatePostfix(postfix_expression);
//     cout << "Postfix expression: " << postfix_expression << endl;
//     cout << "Result: " << result << endl;
//     return 0;
// }

// const int MAX_STACK_SIZE = 100;

// class Stack {
// private:
//     char items[MAX_STACK_SIZE];
//     int top_index;

// public:
//     Stack() {
//         top_index = -1;
//     }

//     bool empty() {
//         return top_index == -1;
//     }

//     void push(char c) {
//         if (top_index < MAX_STACK_SIZE - 1) {
//             items[++top_index] = c;
//         }
//     }

//     void pop() {
//         if (!empty()) {
//             top_index--;
//         }
//     }

//     char top() {
//         if (!empty()) {
//             return items[top_index];
//         }
//         return '\0'; 
//     }
// };

// bool isOperand(char ch) {
//     return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
// }
// int getPrecedence(char op) {
//     if (op == '^')
//         return 3;
//     else if (op == '*' || op == '/')
//         return 2;
//     else if (op == '+' || op == '-')
//         return 1;
//     else
//         return -1; 
// }

// string infixToPostfix(const string& infix) {
//     Stack s;
//     string postfix = "";

//     for (char ch : infix) {
//         if (isOperand(ch)) {
//             postfix += ch;
//         }
//         else if (ch == '(') {
//             s.push('(');
//         }
       
//         else if (ch == ')') {
//             while (!s.empty() && s.top() != '(') {
//                 postfix += s.top();
//                 s.pop();
//             }
//             if (!s.empty()) {
//                s.pop(); 
//             }
//         }
//         else {
           
//             while (!s.empty() && getPrecedence(ch) <= getPrecedence(s.top())) {
//                 postfix += s.top();
//                 s.pop();
//             }
//             s.push(ch);
//         }
//     }

//     while (!s.empty()) {
//         postfix += s.top();
//         s.pop();
//     }

//     return postfix;
// }

// int main() {
//     string infix_expression = "((A+B)*C-(D-E))^(F+G)";
//     string postfix_expression = infixToPostfix(infix_expression);
//     cout << "Infix expression: " << infix_expression << endl;
//     cout << "Postfix expression: " << postfix_expression << endl;
//     return 0;
// }