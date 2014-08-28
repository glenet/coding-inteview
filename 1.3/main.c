
void remove_1(char *str, int len)
{
	int i = 0, j = 0;
	int cur = 0;
	for (i = 0; i < len; i++) {
		for (j = i + 1; j < len ; j++) {
			if (str[i] == str[j]) {
				str[j] = 0;
			}
		}
	}

	for (i = 0; i < len; i++) {
		if (str[i] != 0) {
			str[cur] = str[i];
			cur++;
		}
	}
	str[cur] = '\0';
}

void remove_2(char *str, int len)
{
	int index[265] = {0};
	int i = 0, cur = 0;
	for (i = 0; i < len; i++) {
		int id = (int)str[i] - (int)'a';
		index[id]++;
	}

	for (i =0; i < len; i++) {
		int id = (int)str[i] - (int)'a';
		if (index[id] > 0) {
			str[cur] = str[i];
			index[id] = -1;
			cur++;
		}
	}
	str[cur] = '\0';
}

int main(int argc, char **argv)
{
	char buf[] = "abcad";
	char buf2[] = "abcad";
	remove_1(buf, strlen(buf));
	printf("test 1: buf %s\r\n", buf);
	remove_2(buf2, strlen(buf2));
	printf("test 2: buf %s\r\n", buf2);
}
