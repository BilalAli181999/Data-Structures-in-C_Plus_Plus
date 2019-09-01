//#include<iostream>
//using namespace std;
//int index(initializer_list <int> dimension,initializer_list <int> index)
//{
//	int *sum = new int[dimension.size()];
//	for (int i = 0; i < dimension.size(); i++)
//	{
//		sum[i] = 0;
//	}
//
//	auto x = index.begin();
//	auto d = dimension.begin();
//	int c = 0;
//	for (int i = 0; i < dimension.size(); i++)
//	{
//		sum[i] += *(x+i);
//		
//		for (int j = i + 1; j < dimension.size(); j++)
//		{
//			sum[i] *= *(d+j);
//	
//		}
//	}
//	int s = 0;
//	for(int i=0;i<dimension.size();i++)
//	{
//		s += sum[i];
//	
//    }
//	
//	return s;
//	
//}
//int main()
//{
//	cout<<index({ 3,3,3 }, { 4,2,3 });
//}