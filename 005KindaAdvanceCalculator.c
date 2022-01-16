#include <stdio.h>

int main () {
	
	//declearing values
	int sum ,sub ,mul ,div ,mod ,firstNumber ,secondNumber;
	
	//getting user input
	printf("Enter First Number: \a");
	scanf("%d",&firstNumber);
	
	printf("Enter Second Number:  \a");
	scanf("%d",&secondNumber);
	
	
	//calculating
	sum = firstNumber + secondNumber;
	sub = firstNumber - secondNumber;
	mul = firstNumber * secondNumber;
	div = firstNumber / secondNumber;
	mod = firstNumber % secondNumber;
	
	//result
	printf("The Sum is : %d\n",sum);
	printf("The Sub is : %d\n",sub);
	printf("The Mul is : %d\n",mul);
	printf("The Div is : %d\n",div);
	printf("The Mod is : %d\n",mod);
	
	
	
	
	return 0;
}
