#include <stdio.h>
#include <windows.h>

long long xFileSize (const char* filename);

int main(void)
{
	printf("File size is %llu", xFileSize("test.txt"));
	return 0;
}

long long xFileSize(const char* filename)
{
	printf("%s", filename);
	return 10;
}