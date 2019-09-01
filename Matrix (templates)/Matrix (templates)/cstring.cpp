#include"iostream"
#include"cstring.h"
using namespace std;

cstring cstring::left(int count) const
{
	cstring temp;
	int c = 0;
	for(int i=0;i<count;i++)
	{
		temp.data[i] = data[i];
		c++;
	}
	temp.data[c] = '\0';
	return temp;

}

cstring cstring::right(int count) const
{
	cstring temp;
	int c = 0;
	for (int i = size - count; i < size; i++)
	{
		temp.data[c] = data[i];
		c++;
	}
	temp.data[c] = '\0';
	return temp;
}

void cstring::resize(int add)
{
	cstring copy=*this;
	this->~cstring();
	this->size = copy.size + add;
	this->data = new char[this->size];
	int c = 0;
	for (int i = 0; i < copy.size; i++)
	{
		this->data[c] = copy.data[i];
		c++;
	}
	data[c] = '\0';
	
}

cstring::cstring(int s)
{
	size = s;
	data = new char[size];
}

cstring::cstring()
{
	size = 5;
	data = new char[size];
	data = { "bilu" };
}

cstring::cstring(char c)
{
	size = 2;
	data = new char[size];
	data[0] = c;
}

cstring::cstring(char *ch)
{

size = getCharLength(ch)+1;

data = new char[size];
for (int j = 0; j < size-1; j++)
{
	
	data[j] = ch[j];
}
data[size-1] = '\0';

}

cstring::~cstring()
{
	delete []data;
	data = 0;
}

int cstring::remove(char ch)
{
	bool status = 0;
	for (int i = 0; i < getLength(); i++)
	{
		if (data[i] == ch)
		{
			for (int j = i; j < getLength(); j++)
			{
				status = 1;
				data[j] = data[j + 1];
			}
			
		}
	}
	if (status)
		return 1;
	if (!status)
		return 0;
}

char * cstring::getData()
{
	return data;
}

int cstring::insert(int index, char ch)
{
	char *ch1 = new char[size];
	for (int i = 0; i < size; i++)
	{
		ch1[i] = data[i];
	}
	
	data = new char[size + 1];

	for (int i = 0; i < size; i++)
	{
		data[i] = ch1[i];
	}
	int x = index;
	for (int i = index+1; i < size ; i++)
	{
		data[i] = ch1[x];
		x = x + 1;
	}
	data[index] = ch;
	
	

	data[size] = '\0';
	return size + 1;
}


char & cstring::at(int index)
{
	return data[index];
}

bool cstring::isEmpty()
{
	int i = getLength();
	if (i == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int cstring::getLength()const
{
	int i = 0;
	while (data[i] != '\0')
	{
		i++;
	}
	return i;
}

void cstring::display()const
{


	cout << data;


}



int cstring::find(char * subStr, int start)
{

	
	bool status1 = true;
	int cS = getCharLength(subStr);

	for (int i = start; i < getLength(); i++)
	{
		status1 = true;
		if (data[i] == subStr[0])
		{
		
			int x = i+1;
			for (int j = 1; j < cS && status1 ; j++)
			{
				if (data[x] != subStr[j])
				{
					status1 = false;
				}
				x++;
			}
			if (status1)
				return i;
			
		}
	}
	
	
	return -1;
}

int cstring::find(char ch, int start)
{
	for (int i = start; i < getLength(); i++)
	{
		if (data[i] == ch)
		{
			return i;
		}
	}
	return -1;
}

int cstring::insert(int index, char * subStr)
{
	char *ch = new char[size];
	for (int i = 0; i < size; i++)
	{
		ch[i] = data[i];
	}
	int cS = getCharLength(subStr);
	int oldSize = size;
	size = size + cS;
	data = new char[size];

	for (int i = 0; i < oldSize; i++)
	{
		data[i] = ch[i];

	}
	int x=index;
	for (int j = index+cS; j < size; j++)
	{
		data[j] = ch[x];
		x++;
	}
	int c = 0;
	for (int i = index; i < cS + index; i++)
	{
		data[i] = subStr[c];
		c++;
	}
	data[size-1] = '\0';


	return 0;
}





void cstring::makeUpper()
{
	for (int i = 0; i < getLength(); i++)
	{
		data[i] = data[i] - 32;
	}

}

void cstring::makeLower()
{
	for (int i = 0; i <getLength(); i++)
	{
		
		data[i] = data[i] + 32;
		
	}

}

void cstring::input()
{
	//char ch[50];
	cout << "enter the name";
	cin.ignore();
	cin.getline(data, 20);
}

void cstring::trim()
{
	for (int i = 0; i < size; i++)
	{
		if ((data[i] == ' ')||( data[i]='\n' ) || (data[i]='\t'))
		{
			for (int j = i; j < getLength(); j++)
			{
				data[j] = data[j + 1];
			}

		}
	}
}

void cstring::reverse()
{
	cstring x=*this;
	/*for (int i = 0; i < getLength(); i++)
	{
		x.data[i] = data[i];
	}*/
	int y = 0;
	for (int i = getLength() - 1; i >= 0; i--)
	{

		data[i] = x.data[y];
		y++;
	}


}


cstring cstring::concatenate(const cstring & s2)
{
	cstring y;
	int x = 0;
	for (int i = 0; i < getLength(); i++)
	{
		y.data[x] = data[i];
		x++;
	}

	for (int j = 0; j < s2.getLength(); j++)
	{
		y.data[x] = s2.data[j];
		x++;
	}

	y.data[x] = '\0';
	cout << y.data;
	return y;
}
void cstring::concatEqual(const cstring & s2)
{
	char *ch = new char[size];										
	for (int i = 0; i < size; i++)
	{
		ch[i] = data[i];
	}
	int cS = s2.getLength();
	data = new char[size + cS];
	
	for (int i = 0; i < size; i++)
	{
		data[i] = ch[i];
		
	}
	int x = getLength();
	for (int j = 0; j < s2.getLength(); j++)
	{
		data[x] = s2.data[j];
		x++;
	}

	data[x] = '\0';
	
	
}

void cstring::concatEqual(char * s2)
{
	int cL = getCharLength(s2);
	int cS = getLength();
	cstring y(cS + cL + 1);

	int x = 0;
	for (int i = 0; i < cS; i++)
	{
		y.data[x] = data[i];
		x++;
	}
	for (int j = 0; j <cL; j++)
	{
		y.data[x] = s2[j];
		x++;
	}
	y.data[x] = '\0';
	(*this) = y;

}

void cstring::trimLeft()
{
	int i = 0;
	while(data[i] == ' '||data[i]=='\n'|| data[i]=='\t')
	{
		if ((data[i] == ' ') || (data[i] = '\n') || (data[i] = '\t'))
		{
			for (int j = i; j < getLength(); j++)
			{
				data[j] = data[j + 1];
			}

		}
		i++;
	}
}

void cstring::trimRight()
{
	int i = size-1;
	while (data[i] == ' ' || data[i] == '\n' || data[i] == '\t')
	{
		if ((data[i] == ' ') || (data[i] = '\n') || (data[i] = '\t'))
		{
			for (int j = i; j < getLength(); j++)
			{
				data[j] = data[j + 1];
			}

		}
		i--;
	}
}

cstring::cstring( cstring & ref)
{

	this->size = ref.size;
	data = new char[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = ref.data[i];
	}
}

int cstring::isEqual(const cstring & s2)
{
	if (getLength() > s2.getLength())
	{
		return 1;
	}
	if (getLength() < s2.getLength())
	{
		return 2;
	}
	else if (data == s2.data)
		return 0;
	else
	{

		for (int i = 0; i < getLength(); i++)
		{
			if ((int)data[i] < (int)s2.data[i])
				return 1;
			else if ((int)data[i] > (int)s2.data[i])
				return 2;
		}

	}
	return 0;
}

int cstring::isEqual(char * s2)
{
	if (getLength() > getCharLength(s2))
	{
		return 1;
	}
	if (getLength() < getCharLength(s2))
	{
		return 2;
	}
	else if (data == s2)
		return 0;
	else
	{

		for (int i = 0; i < getLength(); i++)
		{
			if ((int)data[i] < (int)s2[i])
				return 1;
			else if ((int)data[i] > (int)s2[i])
				return 2;
		}

	}
	return 0;
	;
}



int cstring::getCharLength(char * & ch)
{
	int i = 0;
	while (ch[i] != '\0')
	{
		i++;
	}
	return i;
}

int cstring::replace(char * old, char * subStr)
{
	/*cstring temp = (*this);
	size = (size + getCharLength(subStr))-getCharLength(old);
	
	int x= (*this).find(old);

	data = new char[size];
	for (int i = 0; i < temp.getLength(); i++)
	{
		data[i] = temp.data[i];
	}
	for (int i = x+ getCharLength(subStr); i<=temp.size; i++)
	{
		data[i] = temp.data[x+ getCharLength(old)];
		x++;
	}
	
	
	
	int c = 0;
	
	
		
		
			for (int j = temp.find(old); j < temp.find(old)+getCharLength(subStr); j++)
			{
				
				data[j] = subStr[c];
				c++;
			}
		
			data[size - 1] = '\0';
	


	return c;*/

	cstring x = *this;
	int diff = getCharLength(subStr) - getCharLength(old);
	(*this).~cstring();
	
	size = (size + getCharLength(subStr)) - getCharLength(old);
	data = new char[size];
	for (int i = 0; i < x.size; i++)
	{
		data[i] = x.data[i];
	}

	int index = (*this).find(old);
	for (int i = index; i <= (*this).size; i++)
	{
		(*this).data[i+ getCharLength(subStr)] = x.data[i+getCharLength(old)];
	}
	int c = 0;
	for (int i = index; i < index + getCharLength(subStr); i++)
	{
		data[i] = subStr[c];
		c++;
	}
	data[size - 1] = '\0';
	return c;
}

cstring & cstring::operator=(const cstring & ref)
{
	this->~cstring();
	this->size = ref.size;
	this->data = new char[size];
	for (int i = 0; i < ref.size; i++)
	{
		this->data[i] = ref.data[i];
		
	}
	return *this;
}

cstring cstring::operator+(const cstring & s2) const
{
	cstring y;
	int x = 0;
	for (int i = 0; i < getLength(); i++)
	{
		y.data[x] = data[i];
		x++;
	}

	for (int j = 0; j < s2.getLength(); j++)
	{
		y.data[x] = s2.data[j];
		x++;
	}

	y.data[x] = '\0';
	
	return y;
}

cstring cstring::operator+(  char *  s2)
{
	int cL = getCharLength(s2);
	int cS = getLength();
	cstring y(cS+cL+1);
	
	int x = 0;
	for (int i = 0; i < cS; i++)
	{
		y.data[x] = data[i];
		x++;
	}
	for (int j = 0; j <cL; j++)
	{
		y.data[x] = s2[j];
		x++;
	}
	
	y.data[x] = '\0';

	return y;
}

void cstring::operator+=(const cstring & s2)
{
	cstring y;
	int x = 0;
	for (int i = 0; i < getLength(); i++)
	{
		y.data[x] = data[i];
		x++;
	}

	for (int j = 0; j < s2.getLength(); j++)
	{
		y.data[x] = s2.data[j];
		x++;
	}

	y.data[x] = '\0';

	(*this) = y;
	

}

void cstring::operator+=( char * s2)
{
	int cL = getCharLength(s2);
	int cS = getLength();
	cstring y(cS + cL + 1);

	int x = 0;
	for (int i = 0; i < cS; i++)
	{
		y.data[x] = data[i];
		x++;
	}
	for (int j = 0; j <cL; j++)
	{
		y.data[x] = s2[j];
		x++;
	}
	y.data[x] = '\0';
	(*this) = y;

}

int cstring::operator==(char * s2) 
{
	if (getLength() > getCharLength(s2))
	{
		return 1;
	}
	if (getLength() < getCharLength(s2))
	{
		return 2;
	}
	else if (data == s2)
		return 0;
	else
	{

		for (int i = 0; i < getLength(); i++)
		{
			if ((int)data[i] < (int)s2[i])
				return 1;
			else if ((int)data[i] > (int)s2[i])
				return 2;
		}

	}
	return 0;
	

}

char & cstring::operator[](int index)
{
	return data[index];
}

int cstring::operator!()
{
	int i = getLength();
	if (i == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

cstring cstring::operator()(int start , int end)
{
	cstring temp;
	int c = 0;
	for (int i = start; i <= end; i++)
	{
		temp.data[c] = data[i];
		c++;
	}
	temp.data[c] = '\0';
	return temp;
}

ostream & operator<<(ostream &ostr, cstring & ref)
{
	ostr << ref.data;
	return ostr;
}
istream & operator>>(istream &ostr, cstring & ref)
{
	cin.getline(ref.data, 40);
	return ostr;
}