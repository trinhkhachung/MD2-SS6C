#include <stdio.h>
#include <stdlib.h>
int main (){
	int n;
	int sum=0;
	printf("nhap so nguyen N:");
	scanf("%d",&n);
	 do {
    printf("************** Caculator ********\n");
    printf("1. In dãy so chia het cho 2 và giam dan\n");
    printf("2. in so nho hon N tinh tong\n");
    printf("3. cac uoc chan cua N\n");
    printf("4. in ra so uoc le va so luong\n");
    printf("5. in ra uoc le lon nhat\n");
    printf("6. thoat\n");
    printf("Lua chon cua ban:");
    int choice; scanf("%d",&choice);
    switch(choice) {
      case 1:
        
        for(int i=n;i>=2;i--){
        	if (i%2==0){
        		printf(" %d \n",i);
			}
		}
        break;
      case 2:
      	for(int i=n;i>=0;i--){
      	 printf(" %d \n",i);
      	sum+=i;
		    }
        printf("tong cac so la:%d\n",sum);
        break;
      case 3:
        printf("cac uoc chan la:\n"); 
        for(int i=n;i>=1;i--){
        	if(n%i==0&&i%2==0){
        		printf("%d \n",i);
			}
		}
        break;
      case 4:
        printf("cac uoc le la:\n"); 
        for(int i=n;i>=1;i--){
        	if(n%i==0&&i%2!=0){
        	printf("%d \n",i);
            sum+=i;
			}
		}
		printf("tong la %d\n",sum);
        break;
        case 5:
        	printf("cac uoc le:\n"); 
        for(int i=n;i>=1;i--){
        	if(n%i==0&&i%2!=0){
        	printf("uoc le lon nhat :%d \n",i);
        	break;
			}
		}
        break;
     case 6:
        exit(0);
      default:
        printf("Vui long chon tu 1-6\n");
    }
  } while ("khong hop le 1 - 6\n");
  return 0;
}

