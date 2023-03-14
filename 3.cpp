#include <iostream>
#include <stack>
#include <sstream>
#include <string>


using namespace std;

int main()
{
	string str;
	getline(cin, str);
	stringstream ss(str);
	stack<int> st;
	for (int i = 0; i < str.size(); i++)
	{
		if (isdigit(str[i])) st.push(str[i] - 48);
		else if (isspace(str[i])) continue;
		else
		{
			int a, b = 0;
			a = st.top();
			st.pop();
			b = st.top();
			st.pop();
			if (str[i] == '+') {
				st.push(a + b);
			}
			else {
				if (str[i] == '-') {
					st.push(b - a);
				}
				else {
					st.push(a * b);
				}
			}
		}
	}
	cout << st.top();
	return 0;
}