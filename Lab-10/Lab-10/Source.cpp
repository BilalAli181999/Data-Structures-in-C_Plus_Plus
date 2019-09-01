#include<iostream>
#include"Ldll.h"
#include<sstream>
#include<string>
using namespace std;
//int main()
//{
//	
//	char ch;
//	string str;
//	while (getline(cin, str))
//
//	{
//		istringstream inp(str);
//
//		Ldll<char> l1, l2;
//		char *arr = new char[str.size()];
//		int aN=0;
//		DNode<char>*p=l2.head;
//	
//		while (inp>>ch)
//		{
//			if (ch == '[')
//			{
//				
//				while (ch != ']')
//				{
//					inp >> ch;
//					if (ch != ']'&&ch != '[')
//					{
//						
//						arr[aN] = ch;
//						aN++;
//					}
//			
//				}
//			}
//			
//			for (int i = 0; i < aN/2; i++)
//			{
//				char t = arr[i];
//				arr[i] = arr[aN - i-1];
//				arr[aN - i-1] = t;
//			}
//			for(int i=0;i<aN;i++)
//			{
//				
//				l1.insertAtHead(arr[i]);
//				
//			}
//			aN = 0;
//		
//			if (ch != ']'&&ch != '[')
//				l1.insertAtTail(ch);
//
//
//
//
//		}
//		/*for (int i = 0; i<aN; i++)
//		{
//
//			cout << arr[i];
//
//		}*/
//		l1.display();
//		cout << "\n";
//	}
//		
//
//}



int main()
{

	char ch;
	string str;
	while (getline(cin, str))

	{
		istringstream inp(str);

		Ldll<char> l1, l2;
		DNode<char>*p = l2.head;

		while (inp >> ch)
		{
			if (ch == '[')
			{

				while (ch != ']')
				{
					inp >> ch;

					if (ch != ']'&&ch != '[')
					{
						l2.insertAtHead(ch);
					}
					p = l2.head;
				}
			}

			while (p)
			{
				l1.insertAtHead(p->info);
				p = p->next;
			}
			l2.head = 0;
			if (ch != ']'&&ch != '[')
				l1.insertAtTail(ch);




		}

		l1.display();
		cout << "\n";
	}


}
	
