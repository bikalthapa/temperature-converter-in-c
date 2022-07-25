#include<stdio.h>
int main(){
	// Declaring Variables //
	int input;
	float celsius, fahrenheit, kelvin;
	
	
	// printing a straight line
	int i=0;
	printf("\t");
	while(i<50){
		printf("__");
		i++;
	};
	printf("\n\n\t\t\t\t\t\tTemperature Converter App\n\t");
	for(i=0; i<50; i++){
		printf("__");
	};
	
	// An Instruction for user //
	printf("\t\t\t\t\t\t\t An instruction to the User\n\n");
	printf("\t Enter 1 to convert from Celsius\n \t Enter 2 to Convert from Fahrenheit\n");
	printf("\t Enter 3 to conver from kelvin\n\t");
	
	// printing a straight line using do-while loop
	do{
		printf("__");
		i++;
	} while(i<100);
	
	// Taking user Input //
	printf("\n\t Enter Your Number Here :");
	scanf("%i",&input);
	
	if(input==1){
		// Taking the value of celsius from user //
		printf("\tEnter Temperature In celsius :");
		scanf("%f",&celsius);
		// celsius to fahrenheit //
		fahrenheit = (180*celsius +3200)/100;
		printf("\t%f celsius = %f fahrenheit\n",celsius,fahrenheit);
		// Celsius to kelvin//
		kelvin = (100 * celsius + 27300)/100;
		printf("\t%f celsius = %f kelvin\n",celsius,kelvin);
		
	}else if(input==2){
		// Taking the value of Fahrenheit from the user //
		printf("\tEnter Temperature In Fahrenheit :");
		scanf("%f",&fahrenheit);
		
		// converting fahrenheit into celsius //
		celsius = (100*fahrenheit - 3200)/180;
		printf("\t%f Fahrenheit = %f Celsius\n",fahrenheit,celsius);
		// converting fahrenheit into kelvin //
		kelvin = (100 * fahrenheit + 45940)/180;
		printf("\t%f Fahrenheit = %f Kelvin\n",fahrenheit,kelvin);
	}else if(input==3){
		// Taking the value of kelvin from the user //
		printf("\tEnter Temperature In Kelvin :");
		scanf("%f",&kelvin);
		
		// Converting kelvin into celsius //
		celsius = (100*kelvin -27300) / 100;
		printf("\t%f kelvin = %f celsius\n",kelvin,celsius);
		
		// Converting kelvin into fahrenheit //
		fahrenheit = (180*kelvin - 45940)/100;
		printf("\t%f kelvin = %f fahrenheit\n",kelvin,fahrenheit);
	}else{
		printf("Please Enter the Valid Number");
	};
	
	
	return(0);
}
