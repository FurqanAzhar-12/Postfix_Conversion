#include"PostfixConvo.h"

char* PostfixConversion(const char* string) {

	stackType<char> St(50);
	int len = length(string);
	char* conversion = new char[15];
 	int index = 0;

	for (int i = 0; i < len; i++) {

		if (isAlphanumeric(string[i])) {
			conversion[index++] = string[i]; 
		}
		else if (string[i] == '(') {
			St.push('(');
		}
		else if (string[i] == ')') {
			while (St.top() != '(') {
				conversion[index++] = St.top();
				St.pop();
			}
			St.pop(); 
		}
		
		else {
			
			while (!St.isEmpty() && precedence(St.top()) >= precedence(string[i])) {
				conversion[index++] = St.top();
				St.pop();
			}
          St.push(string[i]);
			
		}  
	}
	while(!St.isEmpty()){
		conversion[index] = St.top();
		index++;
		St.pop();
	}

	conversion[index] = '\0';

	return conversion;
}