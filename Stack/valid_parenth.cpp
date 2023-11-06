#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (!st.empty()) {
                    char top = st.top();
                    st.pop();
                    if (top == '(' && ch == ')' || top == '{' && ch == '}' || top == '[' && ch == ']') {
                        // Valid pair, continue with the next character
                    } else {
                        return false;
                    }
                } else {
                    return false; // Closing parenthesis without matching opening parenthesis
                }
            }
        }

        return st.empty(); // If stack is empty, all parentheses were balanced
    }
};

int main() {
    Solution solution;
    cout << solution.isValid("(){}[]") << endl; // Output: 1 (true)
    cout << solution.isValid("({[]})") << endl; // Output: 1 (true)
    cout << solution.isValid("({[)})") << endl; // Output: 0 (false)
    return 0;
}
