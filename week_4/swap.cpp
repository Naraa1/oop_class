#include <iostream>

void swap(int& a, int& b) {
	int c;
	c = a;
	a = b;
	b = c;
}

int main() {
	int a;
	int b;
	std::cout << "a = "; std::cin >> a; 
	std::cout << "b = "; std::cin >> b; 
	swap(a, b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b;
	return 0;
}
