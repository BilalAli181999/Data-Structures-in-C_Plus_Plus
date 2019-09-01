#include<iostream>
#include"Hash.h"
using namespace std;
int main()
{
	Hash<string> h(3);
	h.insertNodes("BCSF16A030");
	h.insertNodes("BCSF16A009");
	h.insertNodes("BCSF16A016");
	h.insertNodes("BCSF16A042");
	h.insertNodes("BCSF16A004");
	h.insertNodes("BCSF16A043");
	h.displayRecord();

}

