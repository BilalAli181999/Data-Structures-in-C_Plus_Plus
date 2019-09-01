#include<iostream>
using namespace std;

//template <class T>
//T* function(T *a, int s)
//{
//	T* temp = new T[s];
//	for (int i = 0; i < s; i++)
//	{
//		temp[i] = 1;
//	}
//	for (int i = 0; i < s; i++)
//	{
//		for (int j = 0; j < s; j++)
//		{
//			if (i != j)
//			{
//				
//				temp[i] = temp[i] * a[j];
//			}
//		}
//	}
//	
//	return temp;
//}
//int main()
//{
//
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int * newA=function(arr, 5);
//	for (int i = 0; i < 5; i++)
//	{
//		cout << newA[i]<<" ";
//	}
//}


//template <class T>
//T* function(T *a, int s)
//{
//	T* temp = new T[s];
//	for (int i = 0; i < s; i++)
//	{
//		temp[i] = 1;
//	}
//
//	T prod = 1;
//	for (int i = 0; i < s; i++)
//	{
//		prod = prod*a[i];
//	}
//	for (int i = 0; i < s; i++)
//	{
//		temp[i] = prod / a[i];
//	}
//	return temp;
//}
//int main()
//{
//
//	int arr[5] = { 8, 8, 11, 3, 10 };
//	int * newA = function(arr, 5);
//	for (int i = 0; i < 5; i++)
//	{
//		cout << newA[i] << " ";
//	}
//}


//template <class T>
//T* function(T *a, int s)
//{
//	T* temp = new T[s];
//	for (int i = 0; i < s; i++)
//	{
//		temp[i] = 1;
//	}
//
//	T prod = 1;
//	for (int i = 0; i < s; i++)
//	{
//		prod = prod*a[i];
//	}
//	for (int i = 0; i < s; i++)
//	{
//		temp[i] = prod / a[i];
//	}
//	return temp;
//}
//int main()
//{
//
//	int arr[5] = { 8, 8, 11, 3, 10 };
//	int * newA = function(arr, 5);
//	for (int i = 0; i < 5; i++)
//	{
//		cout << newA[i] << " ";
//	}
//}



//#include <map>
//#include <set>
//#include <list>
//#include <cmath>
//#include <ctime>
//#include <deque>
//#include <queue>
//#include <stack>
//#include <string>
//#include <bitset>
//#include <cstdio>
//#include <limits>
//#include <vector>
//#include <climits>
//#include <cstring>
//#include <cstdlib>
//#include <fstream>
//#include <numeric>
//#include <sstream>
//#include <iostream>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//
//int number_needed(string a, string b)
//{
//	
//	int count = 0;
//		int nA[26] = {}, nB[26] = {};
//		int ch = 97; int c = 97;
//		for (int i = 0; i<a.length(); i++)
//		{
//			for (int x = 97; x<=122; x++)
//			{
//				if ((int)a[i] == x)
//				{
//					nA[x-c]++;
//				}
//				
//			}
//		}
//		for (int i = 0; i < 26; i++)
//		{
//			cout <<(char)(i+97) <<nA[i] << " ";
//		}
//		for (int j = 0; j<b.length(); j++)
//		{
//			for (int x = 97; x<=122; x++)
//			{
//				if ((int)b[j] == x)
//				{
//					nB[x-c]++;
//				}
//			
//			}
//		}
//		cout << "\n";
//		for (int i = 0; i < 26; i++)
//		{
//			cout << (char)(i + 97) << nB[i] << " ";
//		}
//		for (int i = 0; i<26; i++)
//		{
//			if (nA[i] != nB[i])
//			{
//				if (nA[i]>nB[i])
//				{
//					count = count + nA[i] - nB[i];
//				}
//				else
//				{
//					count = count + nB[i] - nA[i];
//				}
//
//			}
//		}
//		return count;
//}
//
//int main() {
//	string a;
//	cin >> a;
//	string b;
//	cin >> b;
//	cout << number_needed(a, b) << endl;
//	return 0;
//}


#include<algorithm>

//int main()
//{
//	int arr[10] = { 99,43,65,12,54,75,34,96,33,71 };
//auto it=	find(arr, arr + 10, 33);
//cout << *it;
//}



/////////////////////////////////////////////////  Vectors   ////////////////////////////////////////////////////////////////////////////////
#include<vector>
//int main()
//{
//	vector<int> v;
//	for (auto i = v.begin(); i != v.end(); i++)
//	{
//		cout << *i;
//	}
//}

//int main()
//{
//	vector <int> g1(4,22);
//	vector<int> v2(g1.begin(), g1.end());
//	vector<int> v3(v2);
//	
//	cout << "Size : " << g1.size();
//	cout << "\nCapacity : " << g1.capacity();
//	cout << "\nMax_Size : " << g1.max_size();
//	cout << "\n";
//	for (auto i = g1.begin(); i < g1.end(); i++)
//	{
//		//cout << typeid(i).name()<<"\n";
//		//cout << *i<<" " ;
//		
//	}
//
//	for (int i = 0; i < v2.size(); i++)
//	{
// v3[i]=i;
// cout<<v3[i]<<" ";
//	}
//	
//	return 0;
//
//}


//int main()
//{
//	vector <double> v2(5);
//
//	for (int i = 0; i < v2.size(); i++)
//			{
//		 v2[i]=i;
//		
//			}
//	cout << " " << v2.size()<<"\n";
//	v2.push_back(87);
//	v2.push_back(7);
	/*for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i]<<" ";

	}
	cout << " " << v2.size();
	v2.pop_back();
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";

	}*/
//	cout << v2.back();
//}


//int main()
//{
//	int c = 0;
//	int n;
//	cin >> n;
//	for (int i = 0; i <=n; i *= 5)
//	{
//		c++;
//	}


	//for (int i = 1; i <= n; i ++)

//	/*for (int i = 1; i <= n; i++)
//	{
//		
//		if (i % 2 == 0)
//		{
//			c++;
//			for(int j=1;j<n;j*=3)
//			{ 
//			
//			}
//		}
//	}
//	cout << c;
//}*/


#include<algorithm>
	template <class T>
	T ceiling(T*a, int n, int key,int mid)
	{
		if (a[mid] == key )
		{
			return key;
		}
		else if (mid == n - 1)
		{
			return a[n - 1];
		}
		else	if ( a[mid]<key && a[mid + 1]>key)
			{
				return a[mid];
			}
		  
		
		
		else if (a[mid] > key)
		{
			ceiling(a, n, key, --mid);
		}
		else if (a[mid] < key)
		{
			ceiling(a, n, key, ++mid);
		}
	}


	int main()
	{
		int arr[10] = { 0,0,2,2,4,5,7,8,8,9};
	//	sort(arr, arr + 10);
		
		cout<<"ceiling of x: "<<ceiling(arr, 10, 6, 5);
	}
