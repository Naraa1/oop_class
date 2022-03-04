#include<iostream>
Using namespace std;
void passByValue(int x);
int main()
{
	int x = 3;
	cout << "The value of x at address " << &x << "\n" << "is " << x << "\n";
	passByValue(x);
	x = 5;
	cout << "The value of x at address " << &x << "\n" << "is " << x << "\n";
	return 0;

}
void passByValue(int x)
{
	cout << "---------------PassMyValue start------------------ ";
	cout << "The value of x at address " << &x << "\n" << "is " << x << "\n";
	x = 4;
	cout << "The value of x at address " << &x << "\n" << "is " << x << "\n";
	cout << "---------------PassMyValue end------------------ ";

}
