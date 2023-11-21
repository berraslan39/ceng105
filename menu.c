#include <stdio.h>

int main(){
	
	int ch_1;
	char ch_2;
	do {
		
	printf("1. Print Hello.\n2. Print How are you?.\n3. Print Exit.\n");
	scanf(" %d", &ch_1);     
	
	switch(ch_1){
		
		case 1:
			printf("Hello.\n");
			break;
		
		case 2:
			printf("How are you?\n");
			break;
		
		case 3:
			printf("Goos bye.\n");
			break;
		
		default:
			while (ch_1!= 1 && ch_1!=2 && ch_1!=3){
				printf("1. Print Hello.\n2. Print How are you?.\n3.Exit.\n");
				scanf(" %d", &ch_1);
				switch(ch_1){
		
					case 1:
						printf("Hello.\n");
						break;
					case 2:
						printf("How are you?\n");
						break;
					case 3:
					break;
					}
				}
	}
	
	if (ch_1!=3){
	printf("Do you wish to continue? \n");
	scanf(" %c", &ch_2);
	while(ch_2 != 'n' && ch_2 != 'y' && ch_2 != 'Y' && ch_2 != 'N'){
		printf("Do you wish to continue? \n'Y' for yes 'N' for no: \n");
		scanf(" %c", &ch_2);
	}
	}
	else
	ch_2 = 'n';
	
	}while(ch_2!='n');
	
	return 0;
	
	
}
