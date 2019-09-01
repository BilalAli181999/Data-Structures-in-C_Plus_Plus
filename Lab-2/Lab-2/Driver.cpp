#include<iostream>
#include<string>
#include<vector>
using namespace std;



//vector<char>  removeDuplicate(string str)
//{
//	int count = 0;
//	int nA[26] = {};
//			int ch = 97; int c = 97;
//			for (int i = 0; i<str.length(); i++)
//			{
//				for (int x = 97; x<=122; x++)
//				{
//					if ((int)str[i] == x)
//					{
//						nA[x-c]++;
//					}
//					
//				}
//			}
//		
//		
//			vector<char> temp;
//			for (int i = 0; i < 26; i++)
//			{
//				
//				if (nA[i] >= 1 )
//				{
//					
//					temp.push_back(char( 97+i));
//				}
//			}
//			
//			return temp;
//}
//int main()
//{
//	string str;
//	cout << "\n Enter the String\n";
//	cin >> str;
//	vector <char> temp;
//	temp=removeDuplicate(str);
//	for (int i = 0; i < temp.size(); i++)
//	{
//		cout << temp[i];
//	}
//}

#include<algorithm>
int main()
{
	int a;
	char ch;
	vector <int> v;
	while(cin >> a)
 {
		
		v.push_back(a);
		
		sort(v.begin(), v.end());
		if (v.size() % 2 == 0)
		{
			cout << (v[v.size()/2]+ v[(v.size() / 2)-1])/2<<"\n";
		}
		else
		{
			
			cout<<  v[v.size() / 2]<<"\n";
		}

		
	} 
}