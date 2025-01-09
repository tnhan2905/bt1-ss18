#include <stdio.h>
#include <string.h>

struct SinhVien{
	char name[100];
	int age;
	char phoneNumber[100];
};

typedef struct SinhVien SinhVien;

int main(){
	SinhVien x;
	strcpy(x.name,"Diep Thanh Nhan");
	x.age=18;
	strcpy(x.phoneNumber,"0907615070");
	
	printf("Ten: %s\n",x.name);
	printf("Tuoi: %d\n",x.age);
	printf("Sdt: %s",x.phoneNumber);
}
