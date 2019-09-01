#include<iostream>
#include<algorithm>
#include<stack>
#include<utility>
#include<string>
using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	stack <char>s;
//	char matrix[26] = {};
//	pair<int, int>size[27];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> matrix[i];
//		cin >> size[i].first;
//		cin >> size[i].second;
//	}
//	
//	
//	string exp;
//	while (cin>>exp)
//	{
//		bool same = 0;
//		int mul=0;
//		int open = 0;
//		if (exp.length() == 1 /*&& exp[0] != '(' || exp[0] != ')'*/)
//		{
//			 mul = 0;	
//		}
//		else
//		{
//			for (int i = 0; i < exp.length(); i++)
//			{
//				if (exp[i] == '(')
//				{
//					open++;
//				}
//				if (exp[i] == ')')
//				{
//					open--;
//				}
//				if (exp[i] != ')' /*&& (exp[i] != '(')*/)
//				{
//					s.push(exp[i]);
//				}
//				else if (exp[i] == ')')
//				{
//					char tS2 = s.top();
//					s.pop();
//					char tS1 = s.top();
//					s.pop();
//					
//				
//					if (size[(int)tS1 - 65].second == size[(int)tS2 - 65].first)
//					{
//						mul =mul+ ((size[(int)tS1 - 65].first)*((size[(int)tS1 - 65].second)*(size[(int)tS2 - 65].second)));
//					}
//					else
//					{
//						same = 1;
//					}
//					if (open)
//					{
//						size[91 - 65].first = size[(int)tS1 - 65].first;
//						size[91 - 65].second = size[(int)tS2 - 65].second;
//						s.push(91);
//					}
//
//					
//				}
//			}
//			
//		}
//		if (same)
//		{
//			cout << "error\n";
//		}
//		else
//		{
//			cout << mul<<"\n";
//		}
//	}
//}



int main()
{
	int n;
	cin >> n;
	
	char matrix[26] = {};
	pair<int, int>size[26];
	for (int i = 0; i < n; i++)
	{
		cin >> matrix[i];
		cin >> size[i].first;
		cin >> size[i].second;
	}


	string exp;
	while (cin >> exp)
	{
		stack <pair<int, int>>s;
		bool same = 0;
		int mul = 0;
		int open = 0;
		if (exp.length() == 1)
		{
			mul = 0;
		}
		else
		{
			for (int i = 0; i < exp.length(); i++)
			{
				if (exp[i] == '(')
				{
					open++;
				}
				if (exp[i] == ')')
				{
					open--;
				}
				if (exp[i] != ')' &&  exp[i] != '(')
				{
					s.push(size[exp[i]-65]);
				}
				else if (exp[i] == ')')
				{
					pair<int,int> p2 = s.top();
					s.pop();
					pair<int, int> p1 = s.top();
					s.pop();


					if (p1.second == p2.first)
					{
						mul = mul + ((p1.first)*(p1.second)*(p2.second));
					}
					else
					{
						same = 1;
					}
					if (open)
					{
						p1.first = p1.first;
						p1.second = p2.second;
						s.push(p1);
					}


				}
			}

		}
		if (same)
		{
			cout << "error\n";
		}
		else
		{
			cout << mul << "\n";
		}
	}
}