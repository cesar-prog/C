#include <stdio.h>
#include <ctype.h> 

#define OUT 0
#define IN 1

int main() {
	int c;
	int parenthesis, brackets, braces, single_q, double_q;
	int last_digit = OUT;
	parenthesis = brackets = braces = single_q = double_q = 0;
	int ignore = 0;


	while((c = getchar()) != EOF) {
		ignore = 0;
		switch (c) {
			case '(':
				parenthesis++;
				break;
			case '[':
				brackets++;
				break;
			case '{':
				braces++;
				break;
			case ')':
				parenthesis--;
				break;
			case ']':
				brackets--;
				break;
			case '}':
				braces--;
				break;
			case '\'':
				single_q = !single_q;
				break;
			case '\"':
				double_q = !double_q;
				break;
			case '.' :
			ignore = 1;
			break;
			case ',' :
			ignore = 1;
			break;
			case ';' :
			ignore = 1;
			break;
			case '-':
			ignore = 1;
			break;
			
		}
		if (ignore) {
			continue;
		}
		if ((!parenthesis) && (!brackets) && (!braces) && (!single_q) && (!double_q)) {
			if (!isdigit(c) && last_digit == IN) {
				putchar('x');
				last_digit = OUT;
			}
			isdigit(c) ? last_digit = IN : putchar(c);
		}
		else {
			putchar(c);
		}
	}

	printf("\n%d Parentesis Left\n", parenthesis);
	printf("%d Brackets Left\n", brackets);
	printf("%d Braces Left\n", braces);
	printf("%d Single Quotes Left\n", single_q);
	printf("%d Double Quotes Left\n", double_q);
}