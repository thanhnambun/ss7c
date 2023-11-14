#include <stdio.h>
#include <math.h>
int main(){
	int n, choose;
	printf("nhap so n \n");
	scanf("%d",n);
	printf("INTEGER NUMBER\n");
	printf("1. In ra day so ca gia tri nho hon hoac bang n và tinh tong .\n"),
	printf("2. In ra và dem cac so chia het cho 3 nho hon n .\n");
	printf("3. Kiem tra so nguyen co phai so nguyên to khong .\n");
	printf("4. Kiem tra so nguyen co phai so hoan hao khong .\n");
	printf("5. Tinh tong các uoc so cua n .\n"); 
	printf("6. Tinh giai thua n .\n");
	printf("7. In ra so dao nguoc cua n .\n");
	printf("8. In ra các so nguyen to tu 1-n .\n");
	switch(choose) {
		case 1:
			int sum; 
			for(int i=0; i<=n; i++){
			printf("%d",i);
			sum+=i; 
			} 
			printf("\n");
			printf("tong cac so la \n",sum);
			break;
		case 2:
			int divisibleNumber=0; 
			for(int i=0; i<=n;i++){
				if(i%3==0){
				printf("so chia het cho 3 la \n",i);
				divisibleNumber++;
				printf("co %d chia het cho 3 \n",divisibleNumber++); 
				} 
			}
			break;
		case 3:
			for(int i;2<i<=sqrt(n),i++){
				printf("n la so nguyen to \n"); 
			}
			if(n<2){
				printf("n khong la so nguyen to \n"); 
				};
			case 4: 
				for(i=1;i<number;i++){
					if(number%i==0){
						sum+=i;
					}
				}
				if(sum==number){
					printf("%d la so hoan hao\n",number);
				}else{
					printf("%d khong phai la so hoan hao\n",number);
				}
				break;
			case 5:
				for(i=1;i<number;i++){
					if(number%i==0){
						sum+=i;
					}
				}
				printf("Tong cac uoc cua n la: %d\n",sum);
				break;
			case 6:
				for(i=1;i<=number;i++){
					factorial*=i;
				}
				printf("Giai thua cua n la: %d\n",factorial);
				break;
			case 7:
				while(number!=0){
					reverseNumber=reverseNumber*10+number%10;
					number/=10;
				}
				printf("So dao nguoc la: %d\n",reverseNumber);
				break;
			case 8:
				for(i=1;i<=number;i++){
					printf("%d\n",i);
				}
			case 9:
				exit(0);
		}	
	}while("Chon tu 1-9");
}
