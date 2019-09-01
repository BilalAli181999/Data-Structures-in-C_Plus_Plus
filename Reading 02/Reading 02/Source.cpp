#include<iostream>
#include<stack>
#include<sstream>
#include"cstring.h"

using namespace std;
//int main()
//{
//	
//	string infix = { "(a+(b*c))" };
//	stack<char>s;
//	for (int i = 0; i < infix.size(); i++)
//	{
//		if (infix[i] == '(')
//			s.push('(');
//		else if (infix[i] == ')')
//			s.pop();
//
//	}
//	if (s.empty())
//	{
//		cout << "\n Valid";
//	}
//	else
//		cout << "\n Invalid";
//
//}

bool opposite(char one, char two)
{
	if (one == '('&& two == ')')
		return 1;
	else if (one == '{'&& two == '}')
		return 1;
	else if (one == '['&& two == ']')
		return 1;
	else 
		return 0;
}
//int main()
//{
//	string infix = { "(a+)b*c()" };
//	int count=0;
//		for (int i = 0; i < infix.size(); i++)
//		{
//			if (infix[i] == '(' && infix[0]=='(')
//				count++;
//			else if (infix[i] == ')' &&infix[infix.size()-1]==')')
//				count--;
//		}
//		if (count)
//				{
//					cout << "\nInvalid";
//				}
//				else
//					cout << "\n valid";
//}


//int main()
//{
//	string infix = { "a+{(b*c)}" };
//		stack<char>s;
//		bool status = 1;
//		for (int i = 0; i < infix.size(); i++)
//		{
//			if (infix[i] == '(' || infix[i] == '{' || infix[i] == '[')
//			{
//				s.push(infix[i]);
//			}
//			else if (infix[i] == ')' || infix[i] == '}' || infix[i] == ']')
//			{
//				if(opposite(s.top(), infix[i]))
//				s.pop();
//			}
//		
//	
//		}
//		
//		if (!s.empty())
//		{
//			cout << "g\n INValid";
//		}
//		else
//			cout << "\n valid";
//	
//}

//infix to postfix
//bool greaterPrecedence(char op1,char op2)
//{
//	if (op1 == '+'&& op2 == '-')
//	{
//		return 1;
//	}
//	else if (op1 == '*'&&op2 == '+')
//		return 1;
//	else if (op1 == '/'&&op2 == '*')
//		return 1;
//	else if (op1 == '*'&&op2 == '-')
//		return 1;
//	else if (op1 == '/'&&op2 == '+')
//		return 1;
//	else if (op1 == '/'&&op2 == '-')
//		return 1;
//	else if (op1 == '-'&& op2 == '+')
//	{
//		return 1;
//	}
//	else
//		return 0;
//}

//int main()
//{
//	char postfix[100] = { 0 };
//	int noE=0;
//
//	string infix = { "a+b-(c+d/e-f+g)" };
//	stack<char>s;
//	for (int i = 0; i < infix.size(); i++)
//	{
//		if (infix[i] >= 'a'&&infix[i] <= 'z')
//		{
//			postfix[noE] = infix[i];
//			noE++;
//		}
//		else if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '('|| infix[i] == ')')
//		{
//			
//			while (s.size() && greaterPrecedence(s.top(), infix[i]))
//			{
//				
//					postfix[noE] = s.top();
//					noE++;
//					s.pop();
//				
//				
//			}
//			if (infix[i] != ')')
//			{
//				s.push(infix[i]);
//			}
//			else if (infix[i] == ')')
//			{
//				s.pop();
//			}
//		}
//
//	}
//	while (s.size())
//	{
//		postfix[noE] = s.top();
//		noE++;
//		s.pop();
//	}
//	for (int i = 0; i < noE; i++)
//	{
//		cout << postfix[i];
//	}
//}


//int main()
//{
//	string infix = { "a+{(b*c]}" };
//	stack<char>s;
//	bool status = 1;
//	for (int i = 0; i < infix.length(); i++)
//	{
//		if (infix[i] == '(' || infix[i] == '{' || infix[i] == '[')
//		{
//			s.push(infix[i]);
//		}
//		if (s.size())
//		{
//			/*if (infix[i] == (s.top() + 2) )
//			{
//				s.pop();
//				
//			}
//			else if (infix[i] == (s.top() + 1))
//			{
//				
//				s.pop();
//			}*/
//			if (infix[i] == ')')
//			{
//				s.pop();
//
//			}
//			else if (infix[i] == ']')
//			{
//
//				s.pop();
//			}
//			else if (infix[i] == '}')
//			{
//
//				s.pop();
//			}
//			
//		}
//	}
//	if (s.empty())
//		cout << "VALID";
//	else
//		cout << "INVALID";
//}

//bool greaterPrecedence(char op1, char op2)
//{
//	if (op1 == '+'&& op2 == '-')
//	{
//		return 1;
//	}
//	else if (op1 == '*'&&op2 == '+')
//		return 1;
//	else if (op1 == '/'&&op2 == '*')
//		return 1;
//	else if (op1 == '*'&&op2 == '-')
//		return 1;
//	else if (op1 == '/'&&op2 == '+')
//		return 1;
//	else if (op1 == '/'&&op2 == '-')
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	string str = {"(a - b/c) * (a/k-l)"};
//	char postfix[100] = {};
//	int noE=0;
//	stack<char>s;
//	for (int i = str.length() - 1; i >= 0; i--)
//	{
//		if (str[i] >= 97 && str[i] <= 122)
//		{
//			postfix[noE] = str[i];
//			noE++;
//		}
//		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '(' || str[i] == ')')
//		{
//			while(s.size() && greaterPrecedence(s.top(),str[i]) )
//			{
//				postfix[noE] = s.top();
//				s.pop();
//				noE++;
//			}
//			if ( str[i] != '(')
//			{
//				s.push(str[i]);
//
//			}
//			else if (str[i] == '(')
//			{
//				s.pop();
//			}
//		}
//	}
//	while (s.size())
//	{
//		postfix[noE] = s.top();
//		s.pop();
//		noE++;
//	}
//	for (int i = noE-1; i >=0; i--)
//	{
//		cout << postfix[i];
//	}
//}


//INFIX TO PREFIX
//bool greaterPrecedence(cstring op1, cstring op2)
//{
//	if (op1 == "+"&& op2 == "-")
//	{
//		return 1;
//	}
//	else if (op1 == "*"&&op2 == "+")
//		return 1;
//	else if (op1 == "/"&&op2 == "*")
//		return 1;
//	else if (op1 == "*"&&op2 == "-")
//		return 1;
//	else if (op1 == "/"&&op2 == "+")
//		return 1;
//	else if (op1 == "/"&&op2 == "-")
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	stack<cstring>operators,operands;
//	string str = { "(a - b/c) * (a/k-l)" };
//	for (int i = 0; i < str.length(); i++)
//	{
//		if (str[i] >= 'a'&& str[i] <= 'z')
//		{
//			operands.push(str[i]);
//		}
//		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '(' || str[i] == ')')
//		{
//			while (!operators.empty() && greaterPrecedence(operators.top(), str[i]))
//			{
//				cstring op1, op2, oper;
//				op2 = operands.top();
//				operands.pop();
//				op1= operands.top();
//				operands.pop();
//				oper= operators.top();
//				operators.pop();
//
//			}
//		}
//	}
//}



//postfix to infix conversion
//int main()
//{
//	string str = {"ab*cd-e*/"};
//	
//	stack <cstring> s;
//	for (int i = 0; i < str.length(); i++)
//	{
//		if (str[i] >= 'a'&& str[i] <= 'z')
//		{
//			s.push(str[i]);
//		}
//		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '(' || str[i] == ')')
//		{
//			cstring  oper,op1,op2;
//			 op1 = s.top();
//			s.pop();
//			op2 = s.top();
//			s.pop();
//			op1 += oper;
//		op1 += op2;
//		cout << "(";
//			cout << op1<<")";
//			cstring push(op1);
//			s.push(push);
//		}
//	}
//}


//
//int main()
//{
//	stack<char>s;
//	string infix = { "(a - b / c) * (a / k - l)"};
//	char a[10] = {};
//	int noe = 0;
//	for (int i = 0; i < infix.length(); i++)
//	{
//		if (infix[i] != '(' && infix[i] != ')')
//		{
//			a[noe] = infix[i];
//			noe++;
//		}
//	}
//	for (int i = 0; i < noe; i++)
//	{
//		cout << a[i] << " ";
//	}
//}

int main()
{
	char s = 1;
	s = s << 5;
	cout << (int)s;
}