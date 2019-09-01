#include<iostream>
using namespace std;



// *******************************************               TASK-1                *********************************************************************


//template<typename T>
//void mySwap(T&a, T&b)
//{
//	T c;
//	c = b;
//	b = a;
//	a = c;
//}
//int main()
//{
//	int a = 12,b=13;
//	cout << a <<"\t"<< b<<"\n";
//	int*c = &a, *d = &b;
//	mySwap(c,d);
//	cout << *c << "\t" << *d << "\n";
//}


//template<typename T>
//void mySwap(T&a, T&b)
//{
//	T c;
//	c = b;
//	b = a;
//	a = c;
//}
//int main()
//{
//	int a = 12, b = 13;
//	cout << a << "\t" << b << "\n";
//	mySwap(a, b);
//	cout << a << "\t" << b << "\n";
//}



//   ********************************                     TASK-2                ****************************************************************************

//#include<initializer_list>
//template<typename T>
//void mySwap(T &a, T&b)
//{
//	T c;
//	c = b;
//	b = a;
//	a = c;
//}
//template <typename T>
//class A
//{
//public:
//	T *data ;
//	int cap;
//	A( initializer_list <T> list)
//	{
//		cap = list.size();
//		data = new T[cap];
//		int i = 0;
//		for (auto val : list)
//		{
//			data[i] = val;
//			i++;
//		}
//	}
//
//};
//template <typename T>
//void genericSort(T  &a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i; j < n; j++)
//		{
//			if (a[i] > a[j])
//			{
//				mySwap(a[i], a[j]);
//			}
//		}
//	}
//}
//template <>
//void genericSort(A <int>  &a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i; j < n; j++)
//		{
//			if (a.data[i] > a.data[j])
//			{
//				mySwap(a.data[i], a.data[j]);
//			}
//		}
//	}
//}

	/*template <typename T>
	void genericSort(A <T>*a, int n)
	{
		cout << "\n USER DEFINED";
		for (int i = 0; i < n; i++)
		{
			for (int j = i; j < n; j++)
			{
				if (a[i].a > a[j].a)
				{
					T c;
					c = a[j].a;
					a[j].a = a[i].a;
					a[i].a = c;
				}
			}
		}
	}*/


//int main()
//{
////
////
////	     PRIMITIVE DATATYPE
//	//auto arr[3]={ 1,2,3,4,5 };//not possible
//	auto arr = { 1,2,3,4,5 };//possible
//	int a[10] = {7,3.7,7,2.9,9,8.1,1,4,3,11};
//	cout<<typeid(a).name();
//	for (auto x : a)
//	{
//		cout << x << " ";
//	}
//	cout << "\n";
//	genericSort(a, 10);
//	for (auto x:a)
//	{
//		cout << x << " ";
//	}
////
//
//
//
//
//	//      USER DEFINED
//	/*A <int> b ={9,3,6,1,4};
//	
//	for (int i=0;i<5;i++)
//	{
//		cout << b.data[i] << " ";
//	}
//	genericSort(b, 5);
//	for (int i = 0; i<5; i++)
//	{
//		cout << b.data[i]<< " ";
//	}*/
//}


//template <class T>
//
//class A
//{
//public:
//	T a = 1;
//};
//template <class T>
//void f(T &a)
//{
//	cout << a[2].a;
//}
//int main()
//{
//	A<int> a[5];
//	f(a);
//
//}


//void f(int (&a)[3])
//{
//	for (auto x : a)
//	{
//		cout << x << " ";
//	}
//}
//int main()
//{
//	int a[3] = { 1,2,3 };
//	for (auto x : a)
//	{
//		cout << x << " ";
//	}
//	f(a);
//}



//************************************************    TASK-3    *******************************************************************************************************************


#include<initializer_list>
//int main()
//{
//
//	auto ab = 'd';
//
//	cout<<typeid(ab).name();
//	auto a = new int[3];                  //auto with new cant be used for array initialization
//	cout << typeid(a).name();
//}
//int main()
//{
//
//	auto a3 = { 1.2,2.1,3.0};//if list contains even {1,2.1} since 1(int) & 2.1(double)i.e different then cant deduce auto
//	cout << typeid(a3).name();
//}


//auto f()
//{
////	const int a=9;
//	int *a=0;
//auto *z = a;
//cout << typeid(z).name();
//	return z;
//}
//int main()
//{
//	decltype(f())y;
//	decltype(y)z;
//	cout<<typeid(z).name();
//	auto x = f();
//	cout << typeid(x).name();
//}


//int main()
//{
//	auto a={ 1,2,3,4 };
//	for (auto i = a.begin(); i <= a.end(); i++)
//	{
//		cout << typeid(i).name();
//		cout << *i<<" ";
//	}
//}





//int main()
//{
//	const int c = 0;
//	auto *rc = &c;
////	cout << typeid(rc).name();
////	rc = 44;
//
//
//	int i = 42;
//	auto ri_1 = &i;
//	cout << typeid(ri_1).name();
//}

//template<typename T, typename S>
//void foo(T lhs, S rhs) {
//	auto prod = lhs * rhs;
//	cout << typeid(prod).name();
//	//...
//}
//int main()
//{
//	foo(1.2, 4);
//}



//template<typename T, typename S>
//void foo(T lhs, S rhs) {
//
// decltype(lhs * rhs) prod;
// cout << typeid(prod).name();
//}
//int main()
//{
//	char s = 'a';
//	foo(s, 4);
//	
//}

//int main()
//{
//	/*int x = 1;
//	const int&s = x;
//	auto z = s;
//	cout << typeid(s).name();
//	cout << typeid(z).name();*/
//
//
//	int x = 1;
//	auto s = &x;
//	auto z = s;
//	cout << typeid(s).name();
//	cout << typeid(z).name();
//}

//int main()
//{
//
//	const int x = 23;
//	const int *s= &x;//for & int,for * const int
//	decltype(s) a;
//	cout << typeid(s).name();
//}



//***************************************************************************    INITIALIZER -LIST      ********************************************************************************************
//int main()
//{
//	/*int arr[5] = { 10,20,30,40,50 };
//	for (auto l : arr)
//	{
//		cout << l << " ";
//	}
//	initializer_list < int > a = { 1,2,3,4,5 };
//	cout << "\n";
//	for (auto l : a)
//	{
//		cout << l << " ";
//	}
//	const int*val = a.begin();
//	cout << typeid(val).name();
//	for (int i = 0; i < a.size(); i++)
//	{
//		cout << *val << " ";
//		val++;
//	}	cout << "\n";*/
//	initializer_list < double > a = { 1,2,3,4,5 };
//	for (auto it = rbegin(a); it <= rend(a); it++)//auto it=begin(a)(auto will be const int*)
//	{
//		cout << *it;
//	}
//	auto it = rend(a);
//	//cout<<typeid(it).name();
//	
//	auto i = a.begin();
//	cout << typeid(i).name();
//	for (auto i = a.end(); i != a.begin(); --i)//auto it=begin(a)(auto will be int*)
//	{
//		cout << *i;  //this does not works
//	}
//}
//
