#include<iostream>
using namespace std;
//template <class T>
//T* product(T *a, int n)
//{
//	T *arr1, *arr2;
//	arr1 = new T[n];
//	arr2 = new T[n];
//	for (int i = 0; i < n; i++)
//	{
//		arr1[i] = 1;
//		arr2[i] = 1;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (i != 0)
//		{
//			arr1[i] = arr1[i - 1] * a[i - 1];
//		}
//		
//		
//	}
//
//	for (int i = n-1; i >=0; i--)
//	{
//		
//		if (i != n - 1)
//		{
//			arr2[i] = arr2[i + 1] * a[ i + 1];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = arr1[i] * arr2[i];
//		
//	}
//	return a;
//}
//int main()
//{
//	int a[5] = { 2,4,6,8,10 };
//	int *n=product(a, 5);
//	for (int i = 0; i < 5; i++)
//	{
//	cout << n[i]<<" ";
//	}
//}

////////////////////////////////////////////////////////////////Task-4//////////////////////////////////////////////////////////////////////////////////

//int main()
//{
//	const int n = 11;
//	int a[n] = { 1,9,8,4,0,0,2,7,0,6,9};
//	
//	
//	
//	int c=0;
//	for (int i = 0; i < n && c<n-1; i++)
//	{
//		if (a[i] == 0)
//		{
//			 c = i+1;
//
//			while (a[c] == 0 && c<n-1)
//			{
//				
//				c++;
//			}
//
//			int temp = a[c];
//			a[c] = a[i];
//			a[i] = temp;
//	    }
//		
//
//	}
//	
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//}


/////////////////////////////////////////////////////////////TASK-3//////////////////////////////////////////////////////////////////////////////////////////////
//int main()
//{
//	const int n = 6;
//	int a[n] = { 5,8,7,3,4,6 };
//	
//		
//		
//			cout << a[n - 1] << " ";
//			int max=a[n-1];
//		for (int i = n - 2; i >= 0; i--)
//		{
//			if (a[i] > max)
//			{
//				max = a[i];
//				cout << a[i] << " ";
//		    }
//	    }
//}


//////////////////////////////////////////////////////////////////Task-6/////////////////////////////////////////////////////////////////////////////////////////////////////

//int main()
//{
//
//	const int n = 10;
//		int a[n] = { 0,3,4,5,4,6,7,8,8,10};
//		
//		
//		if (a[0] == 0)
//		{
//			for (int i = 0; i < n; i++)
//			{
//				if (a[i] == i)
//					cout << a[i]<<" ";
//			}
//		}
//}



/////////////////////////////////////////////////////////////////Task-10////////////////////////////////////////////////////////////////////////////////////////////
int binarySearch(int *a, int n,int key)
{
	int uB = 11, lB = 0;
	int mid;
	while (lB <= uB)
	{
		mid = (lB + uB) / 2;
		cout << mid << " ";
		if (a[mid] == key)
		{
			return mid;
		}
		else if (key>a[lB])
		{
			uB = mid - 1;
		}
		else
			lB = mid+1 ;
	}
	return -1;

}


int search(int *a,int n,int key)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == key)
			return i;
	}
	return -1;
}
int main()
{
	int a[12] = { 11,12,15,17,19,21,23 ,1,3,5,7,9 };
	
	int key;
	cout << "Enter key :";
	cin >> key;
cout<<	search(a, 12, key);
	
}


///////////////////////////////////////////////////////////////////Task-5/////////////////////////////////////////////////////////////////////////////////////////////

//int binarySearch(int *m, int n, int key)
//{
//	int lB = 0; int uB = n - 1; int mid;
//	while (lB <= uB)
//	{
//		mid = (lB + uB) / 2;
//		if (m[mid] == key)
//		{
//			return mid;
//		}
//		else if (m[mid] < key)
//		{
//			lB = mid + 1;
//		}
//		else
//			uB = mid - 1;
//	}
//	return -1;
//}
//int main()
//{
//	int m[3][3] = { {3,4,5},{5,6,7},{7,8,6} };
//	bool status = true;
//	int index,row;
//	for (int i = 0; i < 3 && status; i++)
//	{
//		if (binarySearch(m[i], 3, 7)>=0)
//		{
//			status = false;
//			index= binarySearch(m[i], 3, 1);
//			row = i;
//		}
//	}
//	if (index != -1)
//		cout << "Found at [" <<row <<"]["<<index<<"]";
//	else
//		cout << "( Not Found )";
//}



////////////////////////////////////////////////////////////Task-8///////////////////////////////////////////////////////////////////////////////////////
//#include<string>
//#include<vector>
////#include<cmath>
//int main()
//{
//	int n;
//	cin >> n;
//	string s;
//	
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s;
//		vector <char>s1;
//		vector <char> s2;
//		if (s.length() % 2 != 0)
//		{
//			cout << "-1\n";
//		}
//		else if (s.length() % 2 == 0)
//		{
//			for (int i = 0; i < s.length() / 2; i++)
//			{
//				s1.push_back(s[i]);	
//			}
//			for (int i = (s.length() / 2); i <s.length(); i++)
//			{
//				s2.push_back(s[i]);
//			}
//			int c = 0;
//			int ch1[26] = { 0 };
//			int ch2[26] = { 0 };
//			int lC = 97;
//			for (int i = 0; i < s1.size(); i++)
//			{
//				for (int j = 97; j <= 122; j++)
//				{
//					if (s1[i] == (char)j)
//					{
//						ch1[j - 97]++;
//					}
//					if (s2[i] == (char)j)
//					{
//						ch2[j - 97]++;
//					}
//				}
//			}
//			for (int i = 0; i < 26; i++)
//			{
//				c = c + abs(ch1[i] - ch2[i]);
//			}
//			
//		
//			int ans = c /2;
//			cout<<abs(ans)<<"\n";
//		}
//
//	}
//	
//	
//
//	
//}
	
