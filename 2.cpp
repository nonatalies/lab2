#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <char> st;
    char c;
    for (char c; cin >> c;) {
        switch (c) {
        case '(': case '{': case '[':
            st.push(c);
            break;
        case ')': case '}': case ']':
            if (st.empty() || (c == ')' && st.top() != '(') || (c == '}' && st.top() != '{') || (c == ']' && st.top() != '[')) {
                cout << "no";
                return 0;
            }
            st.pop();
            break;
        }
    }
    cout << (st.empty() ? "yes" : "no");
    return 0;
}