#include<stdio.h>

void TOfH(int x, char from, char to, char aux){

	if(x > 0){
		TOfH(x-1, from, aux, to);
			printf("%c to %c\n", from, to);
		TOfH(x-1, aux, to, from);
	}

}

int main(){
	
	char A = 'A', B = 'B', C = 'C';
	TOfH(3, A, C, B);

	return 0;
}