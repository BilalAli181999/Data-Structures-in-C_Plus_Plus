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
//	ofstream o("..\\file1.txt");//doing ("..file.txt") will create file by name ..file.txt
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
//	ofstream o("file.txt");
//	cout << cin.rdbuf();
//}
////

    //                                Istring stream(for input from file once and then accessing one bye one ,saves time)
//int main()
//{
//	ifstream i("inputfile.txt");
//	string s;
//	char h[100];
//	cin.getline(h, 100);
//	
//	istringstream is(h);
//
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
//	//getline(s, str);
//	//cout << str;
//	cout << endl<<flush<<s.rdbuf();
//}
//istring stream
//int main()
//{
//	string str;
//	fstream f("hello.txt",ios::out);
//	if (f.is_open()) {
//		istringstream is("Tom & Jerry");
//		is >> f.rdbuf();
//		is.seekg(2,ios::beg);
//		cout << is.rdbuf();
//	}
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
//	stringstream ss(s,ios::app|ios::ate);
//	/*int foo, bar;
//	ss << 'z'<<'l';
//	string h,x;
//	ss >> h>>x;
//	cout<<h;*/
//	cout<<ss.rdbuf();
//}

//string stream(to input and output with same operator ,what is outputed goes for input)
//int main()
//{
//	
//	stringstream ss ("hello boilal",ios::in|ios ::app);
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
//	ostringstream bar("TestString");         //or ios::ate);
//	//foo.str("Test string");
//	
//	//foo << 100;
//	bar << 100;
//	cout << bar.rdbuf();
//	//cout << foo.str() << "\n " << bar.str();
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
//void Swap(T & a, T &b)
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
//	Swap(a,b);
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


//bool happy(int n)
//{
//	static int count=0;
//	count++;
//	if (n < 7)
//	{
//		return false;
//	}
//	unsigned int sum=0;
//	while (n != 0)
//	{
//		sum += (n % 10)*(n%10);
//		n /=10;
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