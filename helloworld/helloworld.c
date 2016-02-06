#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void explainBariables(){
	//Integers
	long long v;		// 8 byte, 64bit.
	long w;				// 4 byte
	int x;				// 4 bytes,		  -2 billion  to  +2 billion	(4294967295)
	short y;			// 2 bytes,		 -32 thousand to +32 thousand	(65535)
	char z;				// 1 byte, 		-127 to 128						(256)

	//Floating poing (decimals)
	float a;			// 4 byte
	double b;			// 8 byte

	//
	char *str = "phases of characters... banana";
}
void operators(){
	int x = 42, y = 7;
	printf("x = 42, y = 7\n");
	printf("x + y = %d\n",x+y);
	printf("x - y = %d\n",x-y);
	printf("x * y = %d\n",x*y);
	printf("x / y = %d\n",x/y);
	printf("x & y = %d\n",x&y);
	printf("x | y = %d\n",x|y);
	printf("x >> 1 = %d\n",x>>1);
	printf("x << 1 = %d\n",x<<1);
	printf("x = %d\n",x);
	printf("x++ = %d\n",x++);
	printf("x = %d\n",x);
	printf("++x = %d\n",++x);
	printf("x = %d\n",x);
	printf("x-- = %d\n",x--);
	printf("x = %d\n",x);
	printf("--x = %d\n",--x);
	printf("x = %d\n",x);

}


int main(){
	printf("Hello World!\n");

	system("pause");
	return 0;
}