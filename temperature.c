#include<stdio.h>

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;  //Lower bound
	upper = 300; //Upper bound
	step = 20; //Step amount

	fahr = upper;
	
	printf("Fahr\tCelsius\n\n "); 

	for(fahr = upper; fahr >= lower; (fahr = (fahr - step))){
		celsius = 5 * (fahr-32) / 9;
		printf("%6.2f\t%6.2f\n", fahr, celsius);
	}
}
