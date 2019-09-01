#include<iostream>
using namespace std;


//Reverse
//int rev(int n)
//{
//	int rem;
//	static int r = 0;
//	if (n <= 9)
//	{
//		return n;
//	}
//	rem = n % 10;
//		r= (r*10)+rem;
//		rev(n / 10);
//	
//	return r;
//}
//
//int main()
//{
//	cout<< rev(1234);
//}

//int rev(int n, int l)
//{
//	if (l == 1)
//		return n;
//	int p=pow(10,l-1);
//	return (rev(n%p,l-1) * 10) + n / p;
//}
//int main()
//{
//	cout << rev(1234, 4);
//}

//int sumUpto(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//	{
//		return n + sumUpto(n - 1);
//	}
//}
//int main()
//{
//	cout << sumUpto(5);
//}



//int recLen(char* str)
//{
//	
//	if (str[0] == '\0')
//		return 0;
//	else
//	{
//		
//		return 1 + recLen(str+1);
//	}
//}
//int main()
//{
//	char s[100];
//	cin >> s;
//	cout<<recLen(s);
//}

//
//int sumDigits(int n)
//{
//	static int div = 10000;
//	if (n <= 9)
//		return n;
//	else {
//		div = div / 10;
//		return n / div + sumDigits(n % div);
//	}
//}
//int main()
//{
//	cout << sumDigits(1512);
//}



//int sumDigits(int n)
//{
//	if (n/10 == 0)
//	{
//		return n;
//    }
//	else
//	{
//		return n % 10 + sumDigits(n / 10);
//	}
//}
//int main()
//{
//	cout << sumDigits(1512);
//}



//void printSquares(int n)
//{
//
//	if (n == 1)
//	{
//		cout << n*n<<",";
//		return;
//	}
//	else if (n % 2 != 0)
//	{
//		cout << n*n<<",";
//	}
//	
//	printSquares(n - 1);
//	if (n % 2 == 0)
//	{
//		cout << n*n << ",";
//	}
//
//
//}
//int main()
//{
//	printSquares(7);
//}


//int evenDigits(int n)
//{
//	static int newNum=0;
//	if (n <= 0)
//	{
//		return 0;
//	}
//	else
//	{
//		
//		evenDigits(n / 10);
//		if (n % 2 == 0)
//		{
//			newNum = (newNum * 10) + n % 10;
//		}
//	}
//	return newNum;
//}
//
//
//
//int main()
//{
//	cout<<evenDigits(83422416);
//}


//void pronounce(int n)
//{
//	if (n < 20)
//	{
//		const char*units[] = {"zero","one","two","three","four","five","six","seven","eight","nine" ,"ten","eleven","twelwe","thirteen","fourteen" ,"fifteen","sixteen","seventeen","eighteen","ninteen" };
//		cout << units[n];
//	
//	}
//	else if (n % 10 == 0 && n < 100)
//	{
//		const char* tens[] = {"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninty" };
//		cout << tens[n / 10-1];
//		
//	}
//	else if (n < 100)
//	{
//		pronounce((n / 10) * 10);
//		if (n%10 != 0)
//		{
//			cout << "-";
//			pronounce(n % 10);
//		}
//
//	}
//	else if (n % 100 != 0 && n < 1000)
//	{
//		pronounce(n / 100);
//		cout << "hundred";
//		pronounce(n % 10);
//	}
//	else if (n % 100 == 0 && n < 1000)
//	{
//		pronounce(n / 100);
//		cout << "hundred";
//	}
//	else if (n < 1000000)
//	{
//		pronounce((n / 1000));
//		cout << "thousand";
//		if (n % 1000 != 0)
//		{
//			cout << " ";
//			pronounce(n % 1000);
//		}
//	}
//	else if (n < 1000000000)
//	{
//		pronounce(n / 1000000);
//		cout << "million";
//		if (n % (int)1000000 != 0)
//		{
//			cout << " ";
//			pronounce(n % (int)1000000);
//		}
//	}
//	else
//	{
//		pronounce(n / 1000000000);
//		cout << "billion";
//		if (n % (int)1000000000 != 0)
//		{
//			cout << " ";
//			pronounce(n % (int)1000000000);
//		}
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	pronounce(n);
//}
//#include<string>
//#include<fstream>
//void reverseLines(istream & inp,string line)
//{
//	if (inp.eof())
//	{
//		return;
//	}
//	string print;
//	getline(inp, print);
//	reverseLines(inp, print);
//	cout << print<<"\n";
//
//}
//
//
//int main()
//{
//	ifstream inp("text.txt");
//	reverseLines(inp, "");
//}

//void display(char(*board)[6], int s)
//{
//	for (int i = 0; i < s; i++)
//	{
//		for (int j = 0; j < s; j++)
//		{
//			cout << board[i][j] << " ";
//		}
//		cout << "\n";
//	}
//}
//int whiteCells(char(*board)[6],int r,int c)
//{
//	bool status = 1;
//	cout << "\n:" << r << "\tc:" << c<<"\n";
//	display(board, 6); cout << "\n\n";
//	 int count;
//	
//	if (board[r][c] == 'w')
//	{
//		
//		board[r][c] = 'z';
//	}
//	
//	if (board[r][c + 1] == 'w' && r>=1 && r<=4 && c+1>= 1 && c+1 <= 4)
//	{
//		count=1+whiteCells(board, r, c + 1);
//			status = 0;
//	}
//	 if (board[r + 1][c] == 'w'&& r+1 >= 1 && r+1 <= 4 && c  >= 1 && c <= 4)
//	{
//		 count = 1 + whiteCells(board, r + 1, c);
//		status = 0;
//	}
//	if (board[r - 1][c] == 'w' && r-1 >= 1 && r-1 <= 4 && c  >= 1 && c <= 4)
//	{
//		count = 1 + whiteCells(board, r - 1, c);
//		status = 0;
//	}
//	if (board[r][c - 1] == 'w'&& r >= 1 && r <= 4 && c - 1 >= 1 && c - 1 <= 4)
//	{
//		count = 1 + whiteCells(board, r, c-1);
//		status = 0;
//	}
//	
//	if (status)
//	{
//		return 0;
//	}
//	
//	return count;
//}

//int main()
//{
//	const int size = 6;
//	int c = 0;
//	char board[size][size]{ 'b','b', 'b', 'b', 'b', 'b', 'b', 'w','w','b','w','b','b','w','w','b','b','b','b','b','b','w','b','b','b','w','b','w','b','b','b','b','b','b','b','b' };
//	for (int i = 0; i < 6; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			if (board[i][j] = 'w')
//			{
//				c++;
//				cout <<"\n Area :"<< 1 + whiteCells(board, i, j);
//			}
//		}
//	}
//	cout << "\n Total Islands:" << c;
//}

//bool isMeasurable(int target,int*weight,int n)
//{
// bool s1, s2;
//	cout << "\n N: " << n;
//	if (n == target)
//	{
//		
//		return 1 ;
//		
//	}
//
//	if (n > target)
//		return 0;
//	for (int i = 0; i < 3; i++)
//	{
//		if (n < target)
//			s1= isMeasurable(target, weight, n + weight[i]);
//		if (n > target)
//			 s2=isMeasurable(target, weight, n - weight[i]);
//	}
//	return (s1||s2);
//
//}

//bool isMeasurable(int target, int*w, int n)
//{
//	int status;
//	if (target == 0)
//	{
//		return 1;
//	}
//	if (target < 0)
//	{
//		return 0;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		 status=isMeasurable(target - w[i], w, n);
//		 
//	}
//	return status;
//}
//int main()
//{
//	int weight[3] = { 2,2,1 };
//	if (isMeasurable(6, weight,3))
//		cout << "\n Measurable";
//	else
//		cout << "\n Not Mesurable";
//}


//int countWays(int n)
//{
//	if (n == 0)
//		return 1;
//	else if (n < 0)
//		return 0;
//	else
//		return countWays(n - 1) + countWays(n - 2);
//	
//}
//int countWays(int n)
//{
//	int count=0;
//	if (n == 0)
//		return 1;
//	else if (n < 0)
//		return 0;
//	
//		count+= countWays(n - 1);
//	count+=countWays(n - 2);
//	return count;
//	
//}
//int main()
//{
//	cout<<countWays(7);
//}


//int canMakeSum(int *array, int tS,int *print)
//{
//
//	
//	static int noE = 0;
//	if (tS == 0)
//	{
//		cout << "\n";
//		for (int i = 0; i < noE; i++)
//		{
//			cout << print[i] << " ";
//		}
//		return 1;
//	}
//	if (tS < 0)
//		return 0;
//	for (int i = 0; i < 5; i++)
//	{
//		if (tS > 0)
//		{
//			 print[noE] =  array[i];
//			noE++;
//			 canMakeSum(array, tS - array[i],print);
//			noE--;
//		}
//	}
//	
//	
//
//}
//bool canMakeSum(int *array, int tS,int *print,int nA,int nP)
//{
//	bool status;
//	if (tS == 0)
//	{
//		for (int i = 0; i < nP; i++)
//		{
//			cout << print[i] << " ";
//		}
//		return 1;
//	}
//	if (tS < 0)
//	{
//		return 0;
//	}
//	for (int i = 0; i < tS; i++)
//	{
//		print[nP]=array[i];
//		nP++;
//		return canMakeSum(array, tS - array[i], print, nA, nP);
//	}
//}
//int main()
//{
//	int set[5] = { 3,6,4,8,1 };
//	int print[20] = {};
//	if (!canMakeSum(set, 5,print,5,0))
//		cout << "Not Found";
//}



//bool puzzle(const int array[], int n, int c,int *temp)
//{
//	int status = 0;
//	temp[c] = -1;
//	if (array[c] == 0)
//	{
//		cout << "At index" << c;
//		return true;
//	}
//	if (c + array[c] < n && temp[c + array[c]]!=-1)
//	{
//      status+= puzzle(array, n, c + array[c],temp);
//	}
//	if (c - array[c] >= 0 &&  temp[c - array[c]] != -1)
//	{
//		status+= puzzle(array, n, c-array[c],temp);
//	}
//	return status;
//}
//
//int main()
//{
//	int arr[10] = { 3,6,4,1,3,4,2,5,3,0};
//	int temp[10] = { 3,6,4,1,3,4,2,5,3,0};
//	int arr1[10] = { 3,1,2,0,4};
//	int temp1[10] = { 3,1,2,0,4 };
//	if (puzzle(arr, 10, 0, temp))
//		cout << " Found Zero";
//	else
//		cout << "\n Zero Not Found";
//	if (puzzle(arr1, 5, 0, temp1))
//		cout << " Found Zero";
//	else
//		cout << "\n Zero Not Found";
//}


//int fibonaci(int term)
//{
//	if (term == 1)
//		return 1;
//	else if (term == 2)
//		return 1;
//	else
//		return fibonaci(term - 1) + fibonaci(term - 2);
//}
//int main()
//{
//	cout << fibonaci(7);
//}



//int factorial(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n*factorial(n - 1);
//}
//int main()
//{
//	cout << factorial(5);
//}


//int power(int n,int p)
//{
//	if (p == 1)
//		return n;
//	else
//		return n*power(n, p - 1);
//
//}
//int main()
//{
//	cout<<power(7,2);
//}





//Tower of Henoi

//void tower(int n, char a, char  b, char c)
//{
//	
//	if (n == 1)
//	{
//		cout << "\n Moved Disc"<< "from peg-"<< a << "to peg-" << c;
//	
//	}
//	else
//	{
//		tower(n - 1, a, c, b);
//        tower(1, a, b, c);
//		tower(n - 1, b, a, c);
//	}
//}
//int main()
//{
//	tower(3, '1', '2', '3');
//}

#include<stack>
//void display(stack<int> a, stack<int>  b, stack<int> c)
//{
//	stack<int> temp;
//	cout << "A=>";
//	while (!a.empty())
//	{
//		temp.push(a.top());
//		a.pop();
//	}
//
//	while (!temp.empty())
//	{
//		cout << temp.top() << " ";
//		temp.pop();
//	}
//	cout << "\n";
//	cout << "B=>";
//	while (!b.empty())
//	{
//		temp.push(b.top());
//		b.pop();
//	}
//	while (!temp.empty())
//	{
//		cout << temp.top()<<" ";
//		temp.pop();
//	}
//	cout << "\n";
//	cout << "C=>";
//	while (!c.empty())
//	{
//		temp.push(c.top());
//		c.pop();
//	}
//	while (!temp.empty())
//	{
//		cout << temp.top() << " ";
//		temp.pop();
//	}
//	cout << "\n";
//}
//void tower(int n, stack<int> &a, stack<int>  &b, stack<int> &c)
//{
//	display(a, b, c);
//	cout << "\n";
//	if (n == 1)
//	{
//		
//		c.push(a.top());
//		a.pop();
//		display(a, b, c);
//		cout << "\n";
//	}
//	else
//	{
//		
//		tower(n - 1, a, c, b);
//		tower(1, a, b, c);
//		tower(n - 1, b, a, c);
//	}
//	
//}
//int main()
//{
//	stack<int> A,  B,  C;
//	A.push(3);
//	A.push(2);
//	A.push(1);
//	
//	tower(3,A,B,C);
//}


//void display(stack<int> &a, char c1, stack<int>  &b, char c2, stack<int> &c, char c3)
//{
//	stack<int> temp;
//
//	cout << "A=>";
//	while (!a.empty())
//	{
//		temp.push(a.top());
//		a.pop();
//	}
//
//	while (!temp.empty())
//	{
//		cout << temp.top() << " ";
//		temp.pop();
//	}
//	cout << "\n";
//	cout << "B=>";
//	while (!b.empty())
//	{
//		temp.push(b.top());
//		b.pop();
//	}
//	while (!temp.empty())
//	{
//		cout << temp.top() << " ";
//		temp.pop();
//	}
//	cout << "\n";
//	cout << "C=>";
//	while (!c.empty())
//	{
//		temp.push(c.top());
//		c.pop();
//	}
//	while (!temp.empty())
//	{
//		cout << temp.top() << " ";
//		temp.pop();
//	}
//	cout << "\n";
//}
//void tower(int n, stack<int> &a, char c1, stack<int>  &b, char c2, stack<int> &c, char c3, int &counter)
//{
//
//	if (n == 1)
//	{
//		counter--;
//		display(a, b, c);
//		if (counter < 0)
//			exit(0);
//		cout << "\n";
//
//		c.push(a.top());
//		a.pop();
//
//		cout << "\n";
//	}
//	else
//	{
//
//		tower(n - 1, a, c1, c, c3, b, c2, counter);
//		tower(1, a, c1, b, c2, c, c3, counter);
//		tower(n - 1, b, c2, a, c1, c, c3, counter);
//	}
//
//}
//int main()
//{
//	stack<int> A, B, C;
//	pair<stack<int>, char>A, B, C;
//	A.push(8);
//	A.push(7);
//	A.push(6);
//	A.push(5);
//	A.push(4);
//	A.push(3);
//	A.push(2);
//	A.push(1);
//	int c = 45;
//	tower(8, A, 'A', B, 'B', C, 'C', c);
//}



//#include<iostream>
//using namespace std;
//#include<stack>
//#include<utility>
//void display(pair<stack<int>, char> a, pair<stack<int>, char> b, pair<stack<int>, char> c)
//{
//	stack<int> temp;
//
//	cout << "A=>";
//	if (a.second == 'A')
//	{
//		while (!a.first.empty())
//		{
//			temp.push(a.first.top());
//			a.first.pop();
//		}
//
//		while (!temp.empty())
//		{
//			cout << temp.top() << " ";
//			temp.pop();
//		}
//
//	}
//	else if (b.second == 'A')
//	{
//		while (!b.first.empty())
//		{
//			temp.push(b.first.top());
//			b.first.pop();
//		}
//
//		while (!temp.empty())
//		{
//			cout << temp.top() << " ";
//			temp.pop();
//		}
//
//	}
//	else if (c.second == 'A')
//	{
//		while (!c.first.empty())
//		{
//			temp.push(c.first.top());
//			c.first.pop();
//		}
//
//		while (!temp.empty())
//		{
//			cout << temp.top() << " ";
//			temp.pop();
//		}
//
//	}
//	cout << "\n";
//	cout << "B=>";
//	if (a.second == 'B')
//	{
//		while (!a.first.empty())
//		{
//			temp.push(a.first.top());
//			a.first.pop();
//		}
//
//		while (!temp.empty())
//		{
//			cout << temp.top() << " ";
//			temp.pop();
//		}
//
//	}
//	else if (b.second == 'B')
//	{
//		while (!b.first.empty())
//		{
//			temp.push(b.first.top());
//			b.first.pop();
//		}
//
//		while (!temp.empty())
//		{
//			cout << temp.top() << " ";
//			temp.pop();
//		}
//
//	}
//	else if (c.second == 'B')
//	{
//		while (!c.first.empty())
//		{
//			temp.push(c.first.top());
//			c.first.pop();
//		}
//
//		while (!temp.empty())
//		{
//			cout << temp.top() << " ";
//			temp.pop();
//		}
//
//	}
//	cout << "\n";
//	cout << "C=>";
//	if (a.second == 'C')
//	{
//		while (!a.first.empty())
//		{
//			temp.push(a.first.top());
//			a.first.pop();
//		}
//
//		while (!temp.empty())
//		{
//			cout << temp.top() << " ";
//			temp.pop();
//		}
//
//	}
//	else if (b.second == 'C')
//	{
//		while (!b.first.empty())
//		{
//			temp.push(b.first.top());
//			b.first.pop();
//		}
//
//		while (!temp.empty())
//		{
//			cout << temp.top() << " ";
//			temp.pop();
//		}
//
//	}
//	else if (c.second == 'C')
//	{
//		while (!c.first.empty())
//		{
//			temp.push(c.first.top());
//			c.first.pop();
//		}
//
//		while (!temp.empty())
//		{
//			cout << temp.top() << " ";
//			temp.pop();
//		}
//
//	}
//	cout << "\n";
//}
//void tower(int n, pair<stack<int>, char> &a, pair<stack<int>, char> &b, pair<stack<int>, char> &c, int &counter)
//{
//
//	if (n == 1)
//	{
//		counter--;
//		display(a, b, c);
//		if (counter < 0)
//			exit(0);
//		cout << "\n";
//
//		c.first.push(a.first.top());
//		a.first.pop();
//
//		cout << "\n";
//	}
//	else
//	{
//
//		tower(n - 1, a, c, b, counter);
//		tower(1, a, b, c, counter);
//		tower(n - 1, b, a, c, counter);
//	}
//
//}
//int main()
//{
//
//	pair<stack<int>, char>A, B, C;
//	A.first.push(8);
//	A.first.push(7);
//	A.first.push(6);
//	A.first.push(5);
//	A.first.push(4);
//	A.first.push(3);
//	A.first.push(2);
//	A.first.push(1);
//	A.second = 'A';
//	B.second = 'B';
//	C.second = 'C';
//	int c = 45;
//	tower(8, A, B, C, c);
//}
//
//
//#include<iostream>
//using namespace std;
//#include<stack>
//#include<utility>
//void display(pair<stack<int>, char> a, pair<stack<int>, char> b, pair<stack<int>, char> c)
//{
//	stack<int> temp;
//	cout << "\n";
//
//
//
//	if (a.second == 'A')
//	{
//		if (a.first.empty())
//			cout << "A=>";
//		else
//			cout << "A=>   ";
//		while (!a.first.empty())
//		{
//			temp.push(a.first.top());
//			a.first.pop();
//		}
//
//		while (!temp.empty())
//		{
//			cout << temp.top() << " ";
//			temp.pop();
//		}
//
//	}
//	else if (b.second == 'A')
//	{
//		if (b.first.empty())
//			cout << "A=>";
//		else
//			cout << "A=>   ";
//		while (!b.first.empty())
//		{
//			temp.push(b.first.top());
//			b.first.pop();
//		}
//
//		while (!temp.empty())
//		{
//			cout << temp.top() << " ";
//			temp.pop();
//		}
//
//	}
//	else if (c.second == 'A')
//	{
//		if (c.first.empty())
//			cout << "A=>";
//		else
//			cout << "A=>   ";
//		while (!c.first.empty())
//		{
//			temp.push(c.first.top());
//			c.first.pop();
//		}
//
//		while (!temp.empty())
//		{
//			cout << temp.top() << " ";
//			temp.pop();
//		}
//
//	}
//	cout << "\n";
//
//	if (a.second == 'B')
//	{
//		if (a.first.empty())
//			cout << "B=>";
//		else
//			cout << "B=>   ";
//		while (!a.first.empty())
//		{
//			temp.push(a.first.top());
//			a.first.pop();
//		}
//
//		while (!temp.empty())
//		{
//			cout << temp.top() << " ";
//			temp.pop();
//		}
//
//	}
//	else if (b.second == 'B')
//	{
//		if (b.first.empty())
//			cout << "B=>";
//		else
//			cout << "B=>   ";
//		while (!b.first.empty())
//		{
//			temp.push(b.first.top());
//			b.first.pop();
//		}
//
//		while (!temp.empty())
//		{
//			cout << temp.top() << " ";
//			temp.pop();
//		}
//
//	}
//	else if (c.second == 'B')
//	{
//		if (c.first.empty())
//			cout << "B=>";
//		else
//			cout << "B=>   ";
//		while (!c.first.empty())
//		{
//			temp.push(c.first.top());
//			c.first.pop();
//		}
//
//		while (!temp.empty())
//		{
//			cout << temp.top() << " ";
//			temp.pop();
//		}
//
//	}
//	cout << "\n";
//
//	if (a.second == 'C')
//	{
//		if (a.first.empty())
//			cout << "C=>";
//		else
//			cout << "C=>   ";
//		while (!a.first.empty())
//		{
//			temp.push(a.first.top());
//			a.first.pop();
//		}
//
//		while (!temp.empty())
//		{
//			cout << temp.top() << " ";
//			temp.pop();
//		}
//
//	}
//	else if (b.second == 'C')
//	{
//		if (b.first.empty())
//			cout << "C=>";
//		else
//			cout << "C=>   ";
//		while (!b.first.empty())
//		{
//			temp.push(b.first.top());
//			b.first.pop();
//		}
//
//		while (!temp.empty())
//		{
//			cout << temp.top() << " ";
//			temp.pop();
//		}
//
//	}
//	else if (c.second == 'C')
//	{
//		if (c.first.empty())
//			cout << "C=>";
//		else
//			cout << "C=>   ";
//		while (!c.first.empty())
//		{
//			temp.push(c.first.top());
//			c.first.pop();
//		}
//
//		while (!temp.empty())
//		{
//			cout << temp.top() << " ";
//			temp.pop();
//		}
//
//	}
//	cout << "\n";
//}
//void tower(int n, pair<stack<int>, char> &a, pair<stack<int>, char> &b, pair<stack<int>, char> &c, int &counter)
//{
//
//	if (n == 1)
//	{
//
//		if (counter >= 0)
//			display(a, b, c);
//
//
//
//
//		c.first.push(a.first.top());
//		a.first.pop();
//
//
//		counter--;
//	}
//	else if (counter >= 0)
//	{
//
//		tower(n - 1, a, c, b, counter);
//		tower(1, a, b, c, counter);
//		tower(n - 1, b, a, c, counter);
//	}
//
//}
//int main()
//{
//
//
//	int c, n;
//	int co = 0;
//
//	while (cin >> n && cin >> c && n != 0 && c != 0)
//	{
//		co++;
//		pair<stack<int>, char>A, B, C;
//		A.second = 'A';
//		B.second = 'B';
//		C.second = 'C';
//
//		for (int i = n; i > 0; i--)
//		{
//			A.first.push(i);
//		}
//
//		cout << "Problem #" << co << "\n";
//		tower(n, A, B, C, c);
//		cout << "\n";
//	}
//}


//int sumOfDigits(int n,int l)
//{
//	int sum=0;
//	if (n / 10 == 0)
//	{
//		return n;
//	}
//	sum = pow(10, l-1);
//	return  n/sum+sumOfDigits(n%sum,l-1);
//}
//int main()
//{
//	cout << sumOfDigits(1121,5);
//}


//task-9


//bool isMeasurable(int target, int c,int * weights, int n)
//{
//	bool status = 0;
//	if (c == target)
//	{
//		return true;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (weights[i] != -1)
//		{
//			int t = weights[i];
//			weights[i] = -1;
//			status += isMeasurable(target, c + t, weights, n);
//			
//			weights[i] = t;
//		}
//	
//		if (weights[i] != -1)
//		{
//			int t = weights[i];
//			weights[i] = -1;
//			status += isMeasurable(target, c - t, weights, n);
//
//			weights[i] = t;
//		}
//	
//	}
//	return status;
//
//}
//int main()
//{
//	int arr[2] = { 1,3 };
//	cout<<isMeasurable(5,0, arr, 2);
//}




