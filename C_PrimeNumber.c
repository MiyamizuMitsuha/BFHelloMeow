/* 決められた数までの素数を出力するプログラム */

#include <stdio.h>

#define MAX_COUNT	10000

int main(void)
{
	int number,count,primecount=0;
	
	for(number=0;number<MAX_COUNT;number++){
		for(count=1;count<=number;count++){
			if(0==number%count){
				primecount++;
			}
		}
		if(2==primecount){
			printf("%d ",number);
		}
		primecount=0;
	}
	return 0;
}
