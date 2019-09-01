#include<initializer_list>
#include<iostream>
using namespace std;


//*************************************************** AUTO & DECLTYPE*********************************************************************************

//int main()
//{
//
//	auto ab = 'd';
//
//	cout<<typeid(ab).name();
//	auto*a = new int[3];                  //auto with new cant be used for array initialization
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
//	const int a=9;
////	const int *a=0;
//auto &z = a;
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
//	for (auto i = a.begin(); i != a.end(); i++)
//	{
//		cout << typeid(i).name();
//		cout << *i<<" ";
//	}
//}





//int main()
//{
//	const int c = 0;
//	auto *rc = &c;
//	cout << typeid(rc).name();
//	//rc = 44;
//
//
//	/*int i = 42;
//	auto* ri_1 = &i;
//	cout << typeid(ri_1).name();*/
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
//	int x = 1;
//	const int&s = x;
//	auto z = s;
//	cout << typeid(s).name();
//	cout << typeid(z).name();
//
//
//	/*int x = 1;
//	const int*s = &x;
//	auto z = s;
//	cout << typeid(s).name();
//	cout << typeid(z).name();*/
//}

//int main()
//{
//
//	const int x = 23;
//	const int *s= &x;//for & int,for * const int
//	decltype(s) a;
//	cout << typeid(s).name();
//}



//**************************************************   INITIALIZER -LIST      ********************************************************************************************
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
//	for (auto it = rbegin(a); it != rend(a); ++it)//auto it=begin(a)(auto will be const int*)
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


//**************************************************File Operations( RDBUF() )************************************************************************



#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base()";
//	}
//	Base(int i)
//	{
//		cout << "Base(int)" << i;
//	}
//
//};
//class Derive:public Base
//{
//public:
//	Derive()
//	{
//		cout << "Derive()";
//	}
//	using Base::Base;
//};
//int main()
//{
//	Derive d(36);
//}


//int main()
//{
//	ofstream o("..\\..\\file1.txt");//doing ("..file.txt") will create file by name ..file.txt
//}

//int main()
//{
//	ofstream o("..\\debug\\file2.txt");//doing ("..file.txt") will create file by name ..file.txt
//}


//int main()
//{
//	ofstream o("debug\\file1.txt");//doing ("..file.txt") will create file by name ..file.txt
//}


//int main(int argc,char *srgv[])
//{
//	for (int i = 0; i < argc; i++)
//	{
//		cout << "\n" << srgv[i];
//	}
//	return 0;
//}


//int main()
//{
//	ifstream ifs("..\\ifile.txt");
//
//	ofstream ofs("outputfile.txt", ios::app);
//	//ofs << ifs.rdbuf();
//		cout <<ifs.rdbuf();
//	ofs.close();
//}


//int main()
//{
//	ofstream ofs("ofile.txt", ios::app);
//	streambuf *coutBuf = cout.rdbuf();
//	cout.rdbuf(ofs.rdbuf());
//	string s = { 'a','b' };// "hello";
//	cout <<"\n Hello its Bilal ";
//	cout.rdbuf(coutBuf);
//	cout << s;
//	ofs.close();
//}


//int main()
//{
//	ifstream ifs("inputfile.txt");
//	ofstream ofs("ofile.txt");
//	streambuf *coutBuf = cout.rdbuf();
//	streambuf *cinBuf = cin.rdbuf();
//	cout.rdbuf(ofs.rdbuf());
//	cin.rdbuf(ifs.rdbuf());
//	string s="bilal is 19";
//	getline(cin, s);
//	cout<< s<<flush;
//	cout.rdbuf(coutBuf);
//	cin.rdbuf(cinBuf);
//	cout << "\n done";
//	ofs.close();
//}

//int main()
//{
////	streambuf *inbuf = cin.rdbuf();
//	ofstream o("file.txt");
//	o << cin.rdbuf();
//}

//int main()
//{
//	
//	ifstream o("file.txt");
//	cout << o.rdbuf();
//}
////

//                                Istring stream(for input from file once and then accessing one bye one ,saves time)
//int main()
//{
//	ifstream i("inputfile.txt");
//	string s;
//	char h[100];
//	i.getline(h, 100);
//	
//	istringstream is(h);
//	for (int i = 0; i < 4; i++)
//	{
//		string val;
//		is >> val;
//		cout << val;
//	}
//}

//int main()
//{
//	stringstream s("bilal\nali ");
//	string str;
//	getline(s, str);
//	cout << str;
//	cout << endl<<s.rdbuf();
//}
//istring stream
//int main()
//{
//	
//	fstream f("f.txt");
//
//	istringstream is("Tom & Jerry");
//	is >> f.rdbuf();
//	is.seekg(2,ios::beg);
//	cout << is.rdbuf();
//}


//string stream(to input and output with same operator ,what is outputed goes for input)
//int main()
//{
//	string s = { "hello" };
//	stringstream ss;
//	int foo,bar;
//	ss << 100 <<" "<< 200;
//	ss >> foo >> bar;
//
//	cout << foo <<" "<< bar;
//}


//string stream(to input and output with same operator ,what is outputed goes for input)
//int main()
//{
//	string s = { "hello" };
//	stringstream ss("hoi bilal",ios::in );
//	int foo, bar;
//	ss << 'z'<<'l';
//	/*string h,x;
//	ss >> h>>x;
//	ss<<h;*/
//	cout << ss.str();
//}

//string stream(to input and output with same operator ,what is outputed goes for input)
//int main()
//{
//	
//	stringstream ss ("hello boilal");
//	string s;
//	ss << "fasiha";
//	ss << "hello";
//	ss >> s;
//	cout << s;
//	//cout <<ss.str();
//}

//ostring stream
//int main()
//{
//	ostringstream foo;
//	ostringstream bar("TestString", ios::app);         //or ios::ate);
//	//foo.str("Test string");
//	
//	foo << 100;
//	bar << 100;
//	//cout << foo.str() << "\n " << bar.str();
//	cout << bar.rdbuf();
//
//}


//string buffer


//int main()
//{
//	stringbuf sb("hello");
//	
//	cout<<sb.str();
//}

//template <class T>
//void swap(T & a, T &b)
//{
//	T temp=a;
//	a = b;
//	b = a;
//}
//int main()
//{
//	int x = 100;
//	int y = 200;
//	int *a = &x;
//	int*b = &y;
//	cout << a << ":" << b << "\n";
//	cout << *a << ":" << *b << "\n";
//	swap(a,b);
//	cout << a << ":" << b << "\n";
//	cout << *a << ":" << *b << "\n";
//
//
//}


//*************************************************Task-2*****************************************************************************************


#include<stdarg.h>
//void f(int argn,...)
//{
//	va_list vl;
//	va_start(vl, argn);
//	for (int i = 0; i < argn; i++)
//	{
//	cout<<	va_arg(vl, int);
//	}
//	va_end(vl);
//}
//
//int main()
//{
//	int n = 5;
//	f(n, 'a', 'b', 'c', 'e', 99);
//}


//void f(int argn, ...)
//{
//	va_list vl;
//	va_start(vl, argn);
//	for (int i = 0; i < argn; i++)
//	{
//		cout << va_arg(vl, char);
//	}
//	va_end(vl);
//}
//
//int main()
//{
//	int n = 5;
//	f(n, 'a', 'b', 76, 'e', 99);
//}



// *******************************************************Task-6***********************************************************************************


//void output(char* f1, char* f2)
//{
//	ofstream o("winner.txt");
//	ifstream i1(f1);
//	ifstream i2(f2);
//	string str1[10000], str2[10000];
//	int c1=0, c2=0;
//	while (i1>>str1[c1])
//	{
//		c1++;
//	}
//	while (i2 >> str2[c2])
//	{
//		c2++;
//	}
//	for (int i = 0; i < c1; i++)
//	{
//		for (int j = 0; j < c2; j++)
//		{
//			if (str1[i] == str2[j])
//			{
//				o << str1[i]<<"\n";
//			}
//		}
//	}
//}
//void toFile(char* name,char**& arg,int argc)
//{
//	ofstream f(name,ios::out);
//	cout << "\n";
//	for (int i = 1; i < argc; i++)
//	{
//		f <<"\n"<< (arg[i]);
//	}
//	
//}
//int main(int argc,char* argv[])
//{
//	//toFile("bondList.txt", argv,argc);
//	//toFile("userList.txt", argv, argc);
//	output("bondList.txt", "userList.txt");
//}


//int main()
//{
//	int h, w, n,l,wT,hT,sum=0;
//	cin >> h >> w>>n;
//	bool status = 1;
//	hT = 0;
//	
//	int i = 0;
//		
//	
//		while ( i<n && hT!=h && status)
//		{
//			cin >> l;
//			sum += l;
//			i++;
//			if (sum >w)
//			{
//				status = 0;
//				
//			}
//			if (sum == w)
//			{
//				hT++;
//				sum = 0;
//			}
//			if (hT != h && i == n)
//			{
//				status = 0;
//			}
//			
//	    }
//		if (status)
//		{
//			cout << "Yes";
//
//		}
//		else
//			cout << "No";
//	
//}

//
//bool happy(int n)
//{
//	static int count = 0;
//	count++;
//	if (n < 7)
//	{
//		return false;
//	}
//	unsigned int sum = 0;
//	while (n != 0)
//	{
//		sum += (n % 10)*(n % 10);
//		n /= 10;
//	}
//	if (sum == 1 && count>2)
//	{
//		return true;
//	}
//	return happy(sum);
//
//
//
//}
//int main()
//{
//	int n;
//	cin >> n;
//	if (happy(n))
//	{
//		cout << "\n Happy Prime";
//	}
//	else
//		cout << "\n Not Happy";
//}


//int main()
//{
//	stringstream s("nothing to\n do what ever");
//	string str;
//	getline(s, str);
//	cout << str;
//	cout << endl << s.rdbuf();
//}


//int main()
//{
//	istringstream s("10 11 12 13");
//	fstream fs("magic.txt");
//	s >> fs.rdbuf();
//	cout << s.rdbuf();
//	fs.close();
//}


//int main()
//{
//	istringstream s("Tom & Jerry");
//	fstream fs("magic.txt");
//	s >> fs.rdbuf();
//	s.seekg(2, ios::beg);
//	cout << s.rdbuf();
//	fs.close();
//}

//template <typename T>
//void mySwap(T & a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int *a = &x;
//	int*b = &y;
//	cout << a << ":" << b << "\n";
//	cout << *a << ":" << *b << "\n";
//	mySwap(a, b);
//	cout << a << ":" << b << "\n";
//	cout << *a << ":" << *b << "\n";
//	cout << x << ":" << y << "\n";
//
//}


/////////////////////////////////////////////////  Vectors   ////////////////////////////////////////////////////////////////////////////////
#include<vector>
#include<algorithm>
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
//		cout << typeid(i).name()<<"\n";
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
//	/*for (int i = 0; i < v2.size(); i++)
//	{
//		v2[i] = i;
//
//	}*/
//	cout << " size 1-" << v2.capacity() << "\n";
//	v2.push_back(87);
//	v2.push_back(7);
//	/*for (int i = 0; i < v2.size(); i++)
//	{
//		cout << v2[i] << " ";
//
//	}*/
//	
// v2.pop_back();
//	cout << "size 2- " << v2.size();
//	for (int i = 0; i < v2.size(); i++)
//	{
//		 v2[i]=i*i;
//
//	}
//	v2[3] = -32;
//	sort(v2.begin(), v2.end());
//	for (int i = 0; i < v2.size(); i++)
//	{
//		cout << v2[i] << " ";
//
//	}
//}


//int main()
//{
//	istringstream is("Tom & Jerry");
//}

int f(int n)
{
	int a, b, c = 0;
	for (a = n / 2; a <= n; a++)
		for (b = 2; b <= n; b = b * 2)
			c++;
	return c;
}
int main()
{
	cout << f(10);
}