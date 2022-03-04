#include <iostream>
using namespace std;

void passByReference(int *x);
int main()
{
	int x = 3;
	cout << "address " << x << "\n" << "is " << x << "\n";
	passByReference(&x);
	x = 5;
	cout << " address " << x << "\n" << "is " << x << "\n";
	return 0;

}
void passByReference(int *x)
{
	cout << "---------------PassMyValue start------------------\n ";
	cout << "address " << x << "\n" << "is " << *x << "\n";
	*x = 4;
	cout << "address " << x << "\n" << "is " << *x << "\n";
	cout << "---------------PassMyValue end------------------ \n";

}
