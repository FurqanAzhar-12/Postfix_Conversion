#include "PostfixConvo.h"

int main() {

	 char string[50] = "";

	cout << "Enter expression: ";
	cin.get(string, 50);

	stackType<int> a;

	char* conver=PostfixConversion(string);
	cout << conver;
	
	delete[] conver;
	return 0;
}