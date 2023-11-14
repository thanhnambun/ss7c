#include <stdio.h>
int main(){
	int money, month;
	float moneyReceived, interest, interestRate;
	float monthInterestRate;
	printf("so tien gui ngan hang ban dau \n lai suat nam \n so thang gui \n");
	scanf("%d %f %d",&money, &interestRate, &month);
	moneyReceived = money;
	monthInterestRate = (interestRate/100)/12;
	printf("%f", moneyReceived); 
	for(int i=1;i<=month;i++){
		interest = moneyReceived*monthInterestRate;  
		moneyReceived = moneyReceived + interest;
		printf("tien lai %f \n tien nhan duoc %f\n", interest, moneyReceived);
	}	  
} 
