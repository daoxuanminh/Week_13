#include <stdio.h>
#include <string.h>
void Nhap (char a[]){
	printf ("Nhap vao chuoi: ");
	gets (a);
}
int numberofblanks (char a[]){
	int dem=0;
	for (int i=0;i<strlen(a);i++){
		if (a[i]==' '){
			dem++;
		}
	}
	return dem;
}

int main (){
	char a[100];
	Nhap (a);
	printf ("So ky tu blanks la: %d",numberofblanks (a));
	return 0;
}
