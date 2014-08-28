
int isEnique_1(char *str, int len)
{
	//except /0
	int size = len - 1;
	int i = 0, j = 0;
	for(i = 0; i < size ; i++) {
		if (i == size - 1)
			return 1;
		for (j = i + 1; j < size ; j++) {
			if (str[i] == str[j]) {
				return 0;
			}
		}
	}

	return 1;
}

int isEnique_2(char* str, int len)
{
	int index[256] = {0};
	int i = 0;
	int size = len - 1;
	for (i = 0; i < size; i++) {
		int id = (int)str[i] - (int)'a';
		index[id]++;
		if (index[id] > 1)
			return 0;
	}

	return 1;
}

int main(int argc, char **argv)
{
	char str_1[] = "abcd";
	char str_2[] = "abcdseffa";
	int r1 = 0, r2 = 0;
	r1 = isEnique_1(str_1, (sizeof(str_1) / sizeof(char)));
	r2 = isEnique_1(str_2, (sizeof(str_2) / sizeof(char)));
	printf("test 1: r1 %d r2 %d \r\n", r1, r2);
	r1 = isEnique_2(str_1, (sizeof(str_1) / sizeof(char)));
	r2 = isEnique_2(str_2, (sizeof(str_2) / sizeof(char)));
	printf("test 2: r1 %d r2 %d \r\n", r1, r2);
	return 1;
}
