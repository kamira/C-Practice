#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
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
}*/

void getln(char *p, int *p2){
	char c;
	int i = 0, j = 1;
	while(1){
		c = getc(stdin);
		if(c!='\n'){ 
			p = (char*)realloc(p, j*sizeof(char));
			p[i] = c;
			*p2 = i;
			i++;
			j++;
		}else{
			break;
		}
	}
}

int main(){
	char *p, c;
	int r, g=0, x, i = 0, j = 9999, vla;

	
	printf("Guess Number! Ver. 1.0 (%d-%d)\n",i ,j);
	srand(time(NULL));
	r = (rand()%(j+1));

	p = (char*)malloc(sizeof(char));

	while(1){
		getln(p,&vla);
		g=0;
		for(x = 0; x <= vla ; x++){
			g = g*10 + p[x]-48;
		}
		if(g > r){
			printf("Smaller!\n");
			if( j > g)
				j = g;
		}else if(g < r){
			printf("Bigger!\n");
			if( i < g)
				i = g;
		}else{
			printf("You Win!\n");
			
			while(1){
				i = 0; j = 9999;
				p = (char*)realloc(p, sizeof(char));
				vla=-1;
				r = (rand()%(j+1));
				printf("Continue?(Y\\N)");
				c = getchar();
				if( c == 121 || c == 89 ){
					break;	
				}
				else if( c == 78 || c == 110)
					return 0;
			}
			
		}
		printf("\nGuess Number!(%d-%d)\n",i ,j);

	}
}

