#include <stdio.h>
#include <string.h>
int main(){


	char gate[25];

	printf("Do you have an id student?(Yes, No, Lost, Replacing, None)");
	scanf("%s", gate);

	if (strcmp(gate, "Yes") == 0){
		printf("You can now enter the school\n");
	}
	else if(strcmp(gate, "No") == 0){
		printf("You can not enter the school without Id\n");
	}
	else if(strcmp(gate, "Lost") == 0){
		printf("Go to the police station and get an abstract before applying for a new one \n");
	}
	else if (strcmp(gate,"Replacing") == 0){
		printf("Go to the canteen shop, get a replacement form, and apply for a new one\n");
	}
	else if(strcmp(gate, "None") == 0){
		printf("State your objectives here\n");
	}




return 0;
}
