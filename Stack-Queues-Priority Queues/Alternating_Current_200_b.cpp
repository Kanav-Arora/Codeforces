#include<iostream>
#include<stack>

using namespace std;

void solver()
{
	string s;
	cin>>s;

	stack<char> stk;
	for(int i=0; i<s.length(); i++)
	{
		char ch  = s[i];

		if(stk.empty() || ch!=stk.top())
			stk.push(ch);
		else
		{
			while(!stk.empty() && stk.top()==ch)
				stk.pop();
		}
		
	}

	if(!stk.empty())	cout<<"No";
	else cout<<"Yes";

}

int main()
{
	solver();
	return 0;
}