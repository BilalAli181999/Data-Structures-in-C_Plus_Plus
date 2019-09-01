#ifndef NDARRAY_H
#define NDARRAY_H
#include<iostream>
#include<initializer_list>
using namespace std;
template <typename T>
class Ndarray
{
public:
	int getRowMajorIndexMapping(intitailizer_list<int> list);
	//bool checkIndexBounds(initializer_list<int> list);
	T *data;
	int noOfDimensions;
	int *sizeOfDimensions;
	int *startingIndex;
public:
	Ndarray(initializer_list<int> list, initializer_list<int> stIndex = {});
	int getNoOfDimensions();
	int getDimensionSize(int dNo);
	int getDimensionLowerIndex(int dNo);
	int getDimensionHigherIndex(int dNo);
	T & operator()(initializer_list<int>indexSet);
};

#endif
#pragma once
