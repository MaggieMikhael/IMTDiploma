# include<stdio.h>
int main (){
	int choice;
	char ready;
	
	printf("Welcome in our resturant \n It is our Menu \n Press 1 for meat \n Press 2 for Fish \n Press 3 for Chicken ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
		printf("price will be 50$ and it will be ready after 30 minutes \n");
	    break;
		
		case 2:
		printf("price will be 60$ and it will be ready after 40 minutes \n");
		break;
		
		case 3 :
		printf("price will be 700$ and it will be ready after 50 minutes \n");
	break;	
	}
	
	printf("IS it Okay ? \n press Y if Yes \n press N if No \n");
	
	scanf(" %c",&ready);
	if(ready=='Y'){
	printf("Please wait until the meal will be ready \n ");}
	else if (ready=='N'){printf("Bye Bye ");}
	
	// when execute the above , it does not working correct !!! Why Scan only one input ?????
	
return 0;
}