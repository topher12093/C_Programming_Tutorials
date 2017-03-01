#include <stdio.h>

main()
{
	int c, nt, ns;
	
	nt = ns = 0;

	while ((c = getchar()) != EOF){
		if(c=='\t')
			++nt;
		else if(c==' '){
			++ns;
		}	
		else if(c=='\n'){
			printf("%d %d\n", nt, ns);	
			nt = ns = 0;
		}
	}
			
}
