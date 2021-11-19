#include <cstdio>
#include <cstddef>

/*
* We out here doing C++ operators and
* multiline comments and whatnot
* Davis 2021
*/

int main() {
	bool b1 = true;
	bool b2 = false;
	printf("%d %d\n", b1, b2);
	printf(" 7 == 7 %d\n", 7 == 7);
	printf(" 7 != 7 %d\n", 7 != 7);

	bool t = true;
	bool f = false;
	printf("true && false: %d\n", t && f);
	printf("true && !false: %d\n", t && !f);

	size_t floatsize = sizeof(float);
	printf("size is %zd\n", floatsize); /*The %zd is for decimal representation of size_t*/

	int arr[] = { 1, 2, 3, 69, 5, 9, 22 };
	printf("The number is %d\n", arr[4]);



}