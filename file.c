#include <stdio.h>

main ()

{
	int c;

	c = getchar();
	
	while((c=getchar()) != EOF){
		
		printf("%d",(c != EOF));
	}

}
