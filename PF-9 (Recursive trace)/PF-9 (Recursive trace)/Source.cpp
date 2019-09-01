#include<iostream>
using namespace std;

//int f(int k,int n)
//{
//	if (k == n)
//	{
//		return k;
//	}
//	else if (n > k)
//	{
//		 f(k, n - k)+1;
//	}
//	else
//	{
//		 f(k - n, n)+1;
//	}
//}
//int main()
//{
//	cout <<f(6, 8);
//}


//int f(int k, int n)
//{
//	if (k == n)
//	{
//		return k;
//	}
//	else if (n > k)
//	{
//		return f(k, n - k) + 1;
//	}
//	else
//	{
//		return f(k - n, n) + 1;
//	}
//}
//int main()
//{
//	cout << f(6, 8);
//}


//int f(int k, int n)
//{
//	if (k == n)
//	{
//		return k;
//	}
//	else if (n > k)
//	{
//		return f(k, n - k);
//	}
//	else
//	{
//		return f(k - n, n) ;
//	}
//}
//int main()
//{
//	cout << f(6, 8);
//}


//int f(int n)
//{
//	if (n <= 0)
//	{
//		return n;
//	}
//	
//	for (int i = 0; i < n; i++)
//	{
//		
//		return 1 + f(n - 1);
//	}
//	
//}
//int main()
//{
//	cout << f(12);
//}

//int f(int n)
//{
//	cout << "F entered with n=" << n << "\n";
//	if (n >= 0 && n <= 2)
//	{
//		return n + 1;
//	}
//	else
//	{
//		return f(n - 2)*f(n - 4);
//	}
//}
//int main()
//{
//	cout << f(9);
//}


//int m(int x, int y)
//{
//	if (x < 0)
//	{
//		return -m(-x, y);
//	}
//	else if (y < 0)
//	{
//		return -m(x, -y);
//	}
//	else if (x == 0 && y == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return 100 * m(x / 10, y / 10) + 10 * (x % 10) + y % 10;
//	}
//}
//int main()
//{
//	cout << m(29, 45);
//}


//int e(int m, int n)
//{
//	if (m == 0)
//	{
//		return n + 1;
//	}
//	else if (n == 0)
//	{
//		return e(m - 1, 1);
//	}
//	else
//	{
//		return e(m - 1, e(m, n - 1));
//	}
//}
//int main()
//{
//	cout << e(1, 3);
//}



//int m(int n)
//{
//	if (n <= 1)
//	{
//		return n;
//	}
//	else if (n % 2 == 0)
//	{
//		return n + m(n / 2);
//	}
//	else
//	{
//		return m((n + 1) / 2) + m((n - 1) / 2);
//	}
//}
//int main()
//{
//	cout << m(13);
//}



//int o(int n)
//{
//	int s = 0;
//	if (n <= 1)
//	{
//		return s;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		s = s + o(n - i)+1;
//	}
//	n = n - 2;
//	return s;
//}
//int main()
//{
//	cout << o(4);
//}


//void swap(char* f, char*s)
//{
//	char temp = *f;
//	*f = *s;
//	*s = temp;
//
//}
//void p(char*arr, int c, int s)
//{
//	if (c == s - 1)
//	{
//		for (int i = 0; i < s; i++)
//		{
//
//			cout << arr[i] << "\t";
//		}
//		cout << "\n";
//	}
//	else
//	{
//		for (int i = c; i < s; i++)
//		{
//			swap(&arr[c], &arr[i]);
//			p(arr, c + 1, s);
//			swap(&arr[c], &arr[i]);
//		}
//	}
//}
//int main()
//{
//	char str[] = "ABC";
//	
//	p(str, 0, sizeof(str) - 1);
//}


//void part(int n, int m, int*p, int l)
//{
//	if (n == 0)
//	{
//		for (int i = 0; i < l; i++)
//		{
//			cout << p[i] << " ";
//		}
//		cout << "\n";
//		return;
//	}
//	int min = (m < n ? m : n);
//	for (int i = min; i >= 1; i--)
//	{
//		p[l] = i;
//		part(n - i, i, p, l + 1);
//	}
//}
//int main()
//{
//	int p[5];
//	part(5, 5, p, 0);
//}


void g(int *a, int *t, int l, int s, int n)
{
	int i, j;
	for (i = s; i < n; i++)
	{
		t[l] = a[i];
		for (j = 0; j <= l; j++)
		{
			cout << t[j] << ",";
		}
		cout << "\n";
		if (i < n - 1)
			g(a, t, l + 1, i + 1, n);
	}
}
int main()
{
	int t[3];
	int a[3] = { 1,2,3 };
	g(a, t, 0, 0, 3);
}