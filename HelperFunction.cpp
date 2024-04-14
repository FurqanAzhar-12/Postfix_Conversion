#include"HelperFunctions.h"

bool isAlphanumeric(char alpha) {
	return alpha >= 'A' && alpha <= 'Z' ? true : (alpha >= 'a' && alpha <= 'z' ? true : (alpha >= '0' && alpha <= '9' ? true : (alpha == ' ' ? true : false)));
}
int precedence(char ch)
{
	
	switch (ch) {
	
	case '*':
	case '/':
		return 3;
	
	case '+':
	case '-':
		return 2;

	default:
		return 1;
	 }

}
int length(const char* string) {

	int i = 0;

	while (string[i] != '\0') {
		i++;
	};

	return i;

}