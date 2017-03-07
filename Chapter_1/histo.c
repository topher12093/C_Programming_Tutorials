#include <stdio.h>

main() {
	int counter, c;
	int counts[10];

	counter = 0;
	for(int i=0; i<10; i++){
		counts[i]=0;
	}
	while((c = getchar()) != EOF){
		if((c==' ') || (c=='\n')){
			if(counter >= 9) {
				++counts[9];
				counter=0;
			}
			else {
				++counts[counter];
				counter=0;
			}
				
			if(c=='\n') {
			
				printf("\nHISTOGRAM COUNT\n");
				printf("_______________\n");

				for(int i=1; i<10; i++){
					if(i==9)
						printf(">=9 | ");
					else
						printf("%d | ", i);
						
					for(int j=0; j<counts[i]; j++){
						printf("X ");
					}
					printf("\n");
				}
				
				for(int i=0; i<10; i++){
					counts[i]=0;
				}

				counter = 0;
				continue;
			}
		}
		else {
			++counter;
		}	
	}			
	
}
