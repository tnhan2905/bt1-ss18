#include <stdio.h>

int main(){
	int n=2905;
	int *ptr;	
	ptr = &n;
	printf("Gia tri cua bien duoc khai bao: %d\n",*ptr);
	printf("Dia chi cua bien duoc khai bao: %d",ptr);
}
