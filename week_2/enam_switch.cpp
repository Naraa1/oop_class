#include <iostream>
using namespace std;
int main()
{
	
	enum Name {
		budee,anand,temuujin
	};
	Name name = budee;
	switch (name)
	{
	case budee:
		cout << "hi budee";
		break;
	case anand:
		cout << "Go";
	case temuujin:
		cout << "Hi temuujin";
	default:
		cout << "dont understand";
		break;
	}
}
