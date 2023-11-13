#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b;
	printf("nhap 2 so de thuc hien:");
	scanf("%d%d",&a,&b);
	int x=a,y=b;
	do{
		printf("1.tong 2 so\n");
		printf("2.hieu 2 so\n");
		printf("3.tich 2 so\n");
		printf("4.thuong 2 so\n");
		printf("5.so du trong phep chia 2 so\n");
		printf("6.uoc chung lon nhat\n");
		printf("7.boi chung nho nhat\n");
		printf("8.thoat\n");
		int calculation;scanf("%d",&calculation);
		switch(calculation){
			case 1:
				printf("%d + %d = %d\n",a,b,a + b);
				break;
			case 2:
				printf("%d - %d = %d\n",a,b,a - b);
				break;
			case 3:
				printf("%d x %d = %d\n",a,b,a * b);
				break;
			case 4:
				printf("%d / %d = %d\n",a,b,a / b);
				break;
			case 5:
				printf("%d % %d = %d\n",a,b,a % b);
				break;
			case 6:
				while (a != b) {
       				if (a > b) {
        				a -= b;
    				}
	   				else {
    					 b -= a;
    						}			
    } 
        printf("ucln 2 so la:%d\n",a);  
        break;
            case 7:
            	
            	while (a != b){
            		if (a > b){
            			a -= b;
					}
					else{
						b -=a;
					}
				}
				printf("bcnn 2 so la: %d",(x*y)/a);
				break;
			case 8:
				exit(0);
				default:
        printf("Vui long chon tu 1-8\n");
		}
	}while("vui long chon tu 1-8/n");
}
