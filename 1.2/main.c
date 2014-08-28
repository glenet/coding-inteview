#include <math.h>
#include <string.h>

void reverse(char* str, int len)
{
	int i = 0, index = len - 1;
	int mid = index / 2;

	while (i < mid) {
		char tmp = str[i];
		str[i] = str[index - i];
		str[index - i] = tmp;
		i++;
	}
}

int main(int argc, char **argv)
{
	char s1[] = "abcd";
	char s2[] = "abcgd";

	reverse(&s1, strlen(s1));
	printf("str %s\r\n", s1);
	reverse(s2, strlen(s2));
	printf("str %s\r\n", s2);
	
}

