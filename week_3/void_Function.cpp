#include<iostream>
using namespace std;

void myVoid();
int myFunctionWithRtrn();
void myFunctionWithParameter(string myParameter);
int main()
{
	myVoid();
	int result = myFunctionWithRtrn();
	cout << result<<"\n";
	myFunctionWithParameter("Nra");
}

void myVoid() {

	cout << "hi\n";
}
int myFunctionWithRtrn()
{
	return 100;
}
void myFunctionWithParameter(string myParameter)
{
	
	cout << "hello:"<<myParameter<<"\n";
}
