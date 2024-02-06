#include <iostream>


int main(){
	FILE* file = fopen("test.txt", "w");
	char str[7] = "abcd";
	fputs("qwerty", file);
	fputc('A', file);
	fwrite(str, 1, 7, file);
	fclose(file);
	return 0;
}