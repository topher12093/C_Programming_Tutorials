#include<stdio.h>


//Function Prototype
int convert(int, int);

//Main
int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;  //Lower bound
	upper = 300; //Upper bound
	step = 20; //Step amount
	
	printf("Fahr\tCelsius\n\n ");

	for(fahr = upper; fahr >= lower; (fahr = (fahr - step))){
		celsius = convert(celsius, fahr);
		printf("%6.2f\t%6.2f\n", fahr, celsius);
	}
	
	return 0;
}

//Convert function
int convert(int celsius, int fahr){	

	celsius = 5 * (fahr-32) / 9;
	
	return celsius;
}
