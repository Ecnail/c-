#include <iostream>

using namespace std;

struct numbers
{
	int a;
	long b;
	float c;
};

void resetNumbers(int& a, long& b, float& c)
{
	a = 2;
	b = 123;
	c = 4.142;
}

numbers doublePerStruct(int a, long b, float c)
{
	numbers result;
	
	result.a = a * 2;
	result.b = b * 2;
	result.c = c * 2;
	
	return result;
}

void doublePerReference(int& a, long& b, float& c)
{
	a *= 2;
	b *= 2;
	c *= 2;
}

void doublePerPointer(int* a, long* b, float* c)
{
	*a *= 2;
	*b *= 2;
	*c *= 2;
}

void nameIn(string* name)
{
	cout << "Name: ";
	cin >> *name;
}

void greetings(string name)
{
	cout << endl << "Greetings friendly adventurer, are you this " << name << " that everyone is talking about?" << endl << endl;
}

int main ()
{
	int a;
	long b;
	float c;
	
	resetNumbers(a, b, c);
	
	numbers result = doublePerStruct(a, b, c);
	
	a = result.a;
	b = result.b;
	c = result.c;
	
	cout << a << endl;
	cout << b << endl;
	cout << c << endl << endl;
	
	resetNumbers(a, b, c);
	
	doublePerReference(a, b, c);
	
	cout << a << endl;
	cout << b << endl;
	cout << c << endl << endl;
	
	resetNumbers(a, b, c);
	
	doublePerPointer(&a, &b, &c);
	
	cout << a << endl;
	cout << b << endl;
	cout << c << endl << endl;
	
	string name;
	
	nameIn(&name);
	greetings(name);
};
