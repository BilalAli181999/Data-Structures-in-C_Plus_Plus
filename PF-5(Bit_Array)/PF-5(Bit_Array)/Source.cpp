//#include<iostream>
//#include<ctime>
//#include<chrono>
//using namespace std;
//using namespace chrono;
//void selectionSort(int a[], int n)
//{
//	int min;
//	for (int i = 0; i < n - 1; i++)
//	{
//		min = i;
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[min] > a[j])
//				min = j;
//		}
//		swap(a[min], a[i]);
//	}
//}
//
//int main()
//{
//	const int n = 1100;
//	int a[n];
//	a[0] = n;
//	for (int i = 1; i < n; i++)
//	{
//		a[i]=i;
//	}
//	cout << "\n Selection Sort\n";
//	long double sum = 0;
//	
//		for (int i = 0; i<10; i++)
//		{
//			time_point<high_resolution_clock> start, end;
//			start = high_resolution_clock::now();
//
//			selectionSort(a, n);
//
//			end = high_resolution_clock::now();
//			cout << endl << fixed << duration_cast<nanoseconds>(end - start).count() << endl;
//			sum = sum + duration_cast<nanoseconds>(end - start).count();
//		}
//		cout << "\nAverage Time: " << sum / 10 << endl;
//
//		return 0;
//	
//}