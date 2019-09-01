#ifndef STRING_H
#define STRING_H
#include<iostream>
using namespace std;
class cstring
{
public:
	char *data;
	int size;
public: 
	cstring left(int count)const;//36
	cstring right(int count)const;//37
	void resize(int add);//35
	cstring(int s);  //1,2
	cstring();
	cstring(char);//3
	cstring(char*);//4
	~cstring();//5
	int remove(char ch);//6
	char* getData();//7
	int insert(int index, char ch);//8
	char & at(int index);//9
	bool isEmpty();//10
	int getLength()const;//11
	void display()const;//12
	int find(char *subStr, int start=0);//13
	int find(char ch, int start=0 );//14
	int insert(int index, char* subStr);//15
	void makeUpper();//16
	void makeLower();//17
	void input();//18
	void trim();//19
	void reverse();//20
	cstring concatenate(const cstring &  s2);//21
	void concatEqual(const cstring &  s2);//22
	void concatEqual(char *s2);//38    ////      Before today's lab
	void trimLeft();//39
	void trimRight();//40
	cstring( cstring & ref);//23
	int isEqual(const cstring & s2);//24
	int isEqual(char * s2);//25
	int getCharLength(char * & ch);//26
	int replace(char *old, char *subStr);//27
	cstring & operator=(const cstring &ref);//28
	cstring operator+(const cstring & s2)const;//29
	cstring operator+( char* s2);//30
	void operator +=(const cstring &s2);//31
	void operator +=( char *s2 );//32
	friend ostream & operator<<(ostream &ostr, cstring & ref);//33
	friend istream & operator>>(istream &ostr, cstring & ref);//34
	//Lab-9
	int operator==(char*s2);//41
	char &operator[](int index);//42
	int operator!();//43
	cstring operator()(int start , int end);//44
	   
	




};
#endif
