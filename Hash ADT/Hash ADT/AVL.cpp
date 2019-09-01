
#include"AVL.h"

template<typename T>
void AVL<T>::inOrder(AVLNode<T>* ref)
{

	if (ref)
	{

		inOrder(ref->left);
		cout << ref->info << ':  '  <<ref->arr[0] << '|| ' << ref->arr[0] << '||  ' << ref->arr[0]<<endl;
		inOrder(ref->right);

	}

}

template<typename T>
int AVL<T>::calcDifference(AVLNode<T>* ref)
{

	int h = 0, h1 = 0;

	if (ref->left)
		h = ref->left->height;
	
	if (ref->right)
		h1 = ref->right->height;
	
	return (h - h1);

}

template<typename T>
void AVL<T>::correctHeight(AVLNode<T>* ref)
{

	if (!ref)
		return;

	if (ref->left)
		correctHeight(ref->left);
	if (ref->right)
		correctHeight(ref->right);

	int h1 = 0, h2 = 0;

	if (ref->left)
		h1 = ref->left->height;

	if (ref->right)
		h2 = ref->right->height;

	if (h1 > h2)
		ref->height = h1 + 1;
	else
		ref->height = h2 + 1;

}

template<typename T>
int AVL<T>::checkRotationType(AVLNode<T>* ref)
{
	int diff = calcDifference(ref);

	int LC, RC;

	LC = RC = 0;

	if (diff >= 2)
	{

		if (ref->left->left)
			LC = ref->left->left->height;
		
		if (ref->left->right)
			RC = ref->left->right->height;

		return (LC - RC == 1 ? -2 : -1);

	}
	else if (diff <= -2)
	{

		if (ref->right->left)
			LC = ref->right->left->height;

		if (ref->right->right)
			RC = ref->right->right->height;

		return (LC - RC == 1 ? 1 : 2);

	}

	return 0;

}

template<typename T>
void AVL<T>::modifyHeight(AVLNode<T>* ref)
{

	if (!ref)
		return;

	int h1 = 0, h2 = 0;

	if (ref->left)
		h1 = ref->left->height;

	if (ref->right)
		h2 = ref->right->height;

	if (h1 > h2)
		ref->height = h1 + 1;
	else
		ref->height = h2 + 1;

}

template<typename T>
void AVL<T>::rotateClockwise(AVLNode<T>* parent, AVLNode<T>* pivot)
{

	if (pivot == root)
	{

		root = pivot->left;

	}
	else
	{

		if (parent->left == pivot)
		{
			parent->left = pivot->left;
		}
		else
		{
			parent->right = pivot->left;
		}

	}
	

	AVLNode<T> * temp = pivot->left->right;
	pivot->left->right = pivot;
	pivot->left = temp;

	modifyHeight(pivot);

}

template<typename T>
void AVL<T>::rotateAntiClockwise(AVLNode<T>* parent, AVLNode<T>* pivot)
{

	if (pivot == root)
	{

		root = pivot->right;

	}
	else
	{

		if (parent->left == pivot)
		{
			parent->left = pivot->right;
		}
		else
		{
			parent->right = pivot->right;
		}

	}

	AVLNode<T> * temp = pivot->right->left;
	pivot->right->left = pivot;
	pivot->right = temp;

	modifyHeight(pivot);

}

template<typename T>
AVL<T>::AVL()
{

	root = nullptr;

}

template<typename T>
void AVL<T>::insertNode(T val)
{

	if (root)
	{

		bool heightFlag = false;

		stack<AVLNode<T>*> s;

		AVLNode<T>* p = root;
		AVLNode<T>* q = root;

		if (p->info > val)
			p = p->left;
		else
			p = p->right;

		s.push(root);

		while (p != nullptr)
		{

			s.push(p);

			q = p;

			if (p->info > val)
				p = p->left;
			else
				p = p->right;

		}

		if (q->info > val)
		{

			q->left = new AVLNode<T>(val);

			q = q->left;

			if (q->right == nullptr)
				heightFlag = true;

		}
		else
		{

			q->right = new AVLNode<T>(val);

			q = q->right;

			if (q->left == nullptr)
				heightFlag = true;

		}

		while (!s.empty())
		{

			modifyHeight(s.top());

			int check = checkRotationType(s.top());

			AVLNode<T> * pivot = s.top();

			if (check == -2)										// LL Type
			{

				cout << endl << pivot->info << " LL ...!!!" << endl;

				if (pivot == root)
				{
					
					rotateClockwise(root, pivot);

				}
				else
				{
					
					s.pop();

					rotateClockwise(s.top(), pivot);
				
				}
	
			}
			else if (check == -1)									// LR Type
			{

				cout << endl << pivot->info << " LR ...!!!" << endl;

				if (pivot == root)
					root = pivot->left->right;
				else
				{

					s.pop();

					if (s.top()->left == pivot)
						s.top()->left = pivot->left->right;
					else
						s.top()->right = pivot->left->right;

				}

				AVLNode<T> * face = pivot->left->right;
				AVLNode<T> * LP = face->left;
				AVLNode<T> * RP = face->right;

				face->left = pivot->left;
				face->right = pivot;

				face->left->right = LP;
				face->right->left = RP;

				modifyHeight(face->left);
				modifyHeight(face->right);
				modifyHeight(face);

			}
			else if (check == 1)									// RL Type
			{

				cout << endl << pivot->info << " RL ...!!!" << endl;

				if (pivot == root)
					root = pivot->right->left;
				else
				{

					s.pop();

					if (s.top()->left == pivot)
						s.top()->left = pivot->right->left;
					else
						s.top()->right = pivot->right->left;

				}

				AVLNode<T> * face = pivot->right->left;
				AVLNode<T> * LP = face->left;
				AVLNode<T> * RP = face->right;

				face->right = pivot->right;
				face->left = pivot;

				face->left->right = LP;
				face->right->left = RP;

				modifyHeight(face->left);
				modifyHeight(face->right);
				modifyHeight(face);

			}
			else if (check == 2)									// RR Type
			{

				cout << endl << pivot->info << " RR ...!!!" << endl;

				if (pivot == root)
				{

					rotateAntiClockwise(root, pivot);

				}
				else
				{

					s.pop();

					rotateAntiClockwise(s.top(), pivot);

				}

			}

			q = s.top();

			s.pop();


		}
				

	}
	else
	{
		root = new AVLNode<T>(val);
	}


}

template<typename T>
bool AVL<T>::search(T key)
{

	AVLNode<T> * ref = root;

	while (ref)
	{

		if (key == ref->info)
			return true;
		if (key < ref->info)
			ref = ref->left;
		else
			ref = ref->right;
	}

	return false;

}

template<typename T>
void AVL<T>::inOrder()
{

	inOrder(root);

}

template<typename T>
void AVL<T>::removeNode(T val)
{

	if (root)
	{

		bool heightFlag = false;

		stack<AVLNode<T>*> s;

		AVLNode<T>* p = root;

		s.push(root);

		while (p->info != val && p != nullptr)
		{

			if (p->info > val)
				p = p->left;
			else
				p = p->right;

			s.push(p);

		}

		if (p)
		{

			if (p->left && p->right)
			{

				AVLNode<T> * temp = p;

				s.push(p);

				temp = p->right;


				if (temp->left)
				{
					s.push(temp);

					while (temp->left)
					{

						temp = temp->left;

						s.push(temp);

					}

					s.pop();

					p->info = temp->info;

					temp = temp->right;

					delete s.top()->left;

					s.top()->left = temp;

				}
				else
				{

					s.top()->info = temp->info;

					temp = temp->right;

					delete s.top()->right;

					s.top()->right = temp;

				}


			}
			else if (p->left || p->right)
			{

				AVLNode<T> * temp;

				if (p->left)
					temp = p->left;
				else 
					temp = p->right;

				if (p == root)
				{
					delete root;
					root = temp;
				}
				else if (s.top()->left == p)
				{

					delete s.top()->left;

					s.top()->left = temp;

				}
				else
				{


					delete s.top()->right;

					s.top()->right = temp;
				}

			}
			else
			{

				if (p == root)
				{
					delete root;
					root = nullptr;
				}
				else if (s.top()->left == p)
				{

					delete s.top()->left;

					s.top()->left = nullptr;

				}
				else
				{

					s.pop();

					delete s.top()->right;

					s.top()->right = nullptr;
				}

			}

			while (!s.empty())
			{

				modifyHeight(s.top());

				int check = checkRotationType(s.top());

				AVLNode<T> * pivot = s.top();

				if (check == -2)										// LL Type
				{

					cout << endl << pivot->info << " LL ...!!!" << endl;

					if (pivot == root)
					{

						rotateClockwise(root, pivot);

					}
					else
					{

						s.pop();

						rotateClockwise(s.top(), pivot);

					}

				}
				else if (check == -1)									// LR Type
				{

					cout << endl << pivot->info << " LR ...!!!" << endl;

					if (pivot == root)
						root = pivot->left->right;
					else
					{

						s.pop();

						if (s.top()->left == pivot)
							s.top()->left = pivot->left->right;
						else
							s.top()->right = pivot->left->right;

					}

					AVLNode<T> * face = pivot->left->right;
					AVLNode<T> * LP = face->left;
					AVLNode<T> * RP = face->right;

					face->left = pivot->left;
					face->right = pivot;

					face->left->right = LP;
					face->right->left = RP;

					modifyHeight(face->left);
					modifyHeight(face->right);
					modifyHeight(face);

				}
				else if (check == 1)									// RL Type
				{

					cout << endl << pivot->info << " RL ...!!!" << endl;

					if (pivot == root)
						root = pivot->right->left;
					else
					{

						s.pop();

						if (s.top()->left == pivot)
							s.top()->left = pivot->right->left;
						else
							s.top()->right = pivot->right->left;

					}

					AVLNode<T> * face = pivot->right->left;
					AVLNode<T> * LP = face->left;
					AVLNode<T> * RP = face->right;

					face->right = pivot->right;
					face->left = pivot;

					face->left->right = LP;
					face->right->left = RP;

					modifyHeight(face->left);
					modifyHeight(face->right);
					modifyHeight(face);

				}
				else if (check == 2)									// RR Type
				{

					cout << endl << pivot->info << " RR ...!!!" << endl;

					if (pivot == root)
					{

						rotateAntiClockwise(root, pivot);

					}
					else
					{

						s.pop();

						rotateAntiClockwise(s.top(), pivot);

					}

				}

				s.pop();


			}
		}



	}

}

template<typename T>
AVL<T>::~AVL()
{
}
