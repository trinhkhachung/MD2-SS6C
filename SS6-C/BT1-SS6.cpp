#include<stdio.h>
int main(){
	int j,i;
	printf("nhap so can in ra bang cuu chuong:\n");
	scanf("%d",&j);
	printf("bang cuu chuong cua %d la :\n",j);
	for(i=1; i<=10; i++){
		printf("%d x %d = %d\n",i,j,i * j);
	}
}
//for(int i = 1; i <= 10;i++){
    //    printf("\nBANG CUU TRUONG %d\n", i);
      //  for(int j = 0; j < 10; j++){
        //    printf("\t%d x %d = %d\n", i, j, i*j);
        //}
    //}
