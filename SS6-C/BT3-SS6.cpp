#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b,c;
	int max,min;
	printf("nhap 3 so de thuc hien:");
	scanf("%d%d%d",&a,&b,&c);
	do{
		printf("1.tong 3 so\n");
		printf("2.trung binh cong cua 3 so\n");
		printf("3.so lon nhat,so nho nhat\n");
		printf("4.thoat\n");
		int calculation;scanf("%d",&calculation);
		switch(calculation){
			case 1:
				printf("%d + %d + %d = %d \n",a,b,c,a+b+c);
				break;
			case 2:
				printf("(%d + %d + %d) / 3 = %d \n",a,b,c,(a+b+c)/3);
				break;
			case 3:
				max = (((a>b) ? a:b)>c) ? ((a>b) ? a:b) : c;
				min = (((a<b) ? a:b)<c) ? ((a<b) ? a:b) : c;
				printf ("MAX = %d MIN = %d\n",max,min);
				break;
			 case 4:
                exit(0);
      		default:
        		printf("Vui long chon tu 1-4\n");
		}
		}	while("thuc hien lai");
	
	}


