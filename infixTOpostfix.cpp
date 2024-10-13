// Get Postfix expression from Infix expression

/*
Algorithm for converting infix expression to postfix expression:

POLISH(Q,P)

1. START
2. Add a right paranthesis ")" at the end of Q and a left paranthesis "(" onto STACK.  [This acts as sentinal.]
3. Scan Q from left to right and repeat step 4 to 7 for each element of Q until the STACK is empty.
4. If an operand is encountered, append it to P.
5. If a left paranthesis is encountered, push it onto the STACK.
6. If an operator X is encountered, then:
    (a) Repeatdly pop from STACK and add to P each operator (on the top of the STACK) which
        has same precedence or higher precedence than X.
    (b) Push X onto the STACK.
    [End of if structure]
7. If a right paranthesis is encountered, then:
    (a) Repeatdly pop from STACK and add to P each operator (on the top of the STACK) 
        until a left paranthesis is encountered.
    (b) Pop the left paranthesis from the STACK.
    [End of if structure]
[End of Step 3 loop]
8. EXIT
*/



#include <iostream>
#include <stack>
#include <string>
using namespace std;

class InfixToPostfix {

private:
    int precedence(char op) {
        if (op == '^') return 3;
        if (op == '+' || op == '-') return 1;
        if (op == '*' || op == '/') return 2;
        return 0;
    }
public:
    string convert(const string& infix) {
        stack<char> st;
        string postfix = " ";

        for (char c : infix) {
            if (isalnum(c)) {
                postfix += c;
            } else if (c == '(') {
                st.push(c);
            } else if (c == ')') {
                while (!st.empty() && st.top() != '(') {
                    postfix += st.top();
                    st.pop();
                }
                st.pop();  
            } else {
                while (!st.empty() && precedence(c) <= precedence(st.top())) {
                    postfix += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }

        while (!st.empty()) {
            postfix += st.top();
            st.pop();
        }

        return postfix;
    }


};

int main() {
    InfixToPostfix converter;
    string infix = "5^(6+2) - (2/4)";
    cout << "Infix: " << infix << endl;
    cout << "Postfix: " << converter.convert(infix) << endl;
    return 0;
}


