#include <iostream>

int sum(int v1, int v2);

int main(){
	FILE* file = fopen("test.txt", "w");
	char str[7] = "abcd";
	fputs("qwerty", file);
	fputc('A', file);
	fseek(file, 1, SEEK_SET);
	fwrite(str, 1, 4, file);
	fclose(file);
	return 0;
}