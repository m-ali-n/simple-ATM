#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	//mohammad ali nasiri
	
	//404149076
	
	//github------>https://github.com/m-ali-n/simple-ATM.git
	
	// | pin=ramz avali | epin=ramzi ke user vared mikonad | fname=full name | answer = gozine entekhab shode | status=on->1 of->0
	
	// | balance = mojodi | ltt = dah trakonesh akhar | withdraw = bardasht | deposit = variz
	
	int i,option;
	int epin;       //epin = entered Pin
    int status=0;   //enable = 1 or disable = 0
    char firstname[30];
    char lastname[30];
    int balance=0;
    int ltt[10];// ltt = Last ten transactions
    int lttcount=0;
    int withdraw,deposit;
  
		
//basic Account data 
	 int pin=1234;
    
//first login
	for (i = 0; i < 3; i++) {
    printf("Enter your PIN: ");
    scanf("%d", &epin);
    
    if (epin == pin) {
        printf("Login successful.\n");
        break;
    } else {
        printf("Wrong PIN. Try again.\n");
    }}
    if (i == 3) {
        printf("\n\nProgram terminated.\n\n");
        return 0;
   }
   
   printf("\n****  WELCOME  ****\n\n");
   
   //menu
    while (1) {
	printf("\n--- Main Menu ---\n");
		printf("1. create account\n");
		printf("2. Deposit\n");
		printf("3. Withdraw\n");
		printf("4. Change PIN\n");
		printf("5. last ten transactions\n");
		printf("6. Exit\n");
		printf("\n\nEnter the number of your desired option:");
		scanf("%d",&option);
		
//part1--->create account
		if (option==1){
			if(status==0){
             printf("\nEnter your first name:");
                scanf("%s", firstname);
             printf("\nEnter your last name:");
                scanf("%s", lastname);
            printf("\nEnter your initial balance:");
                scanf("%d", &balance);
                if(balance<0){
                	balance=0;
				}
			for(i=0;i<10;i++){
				ltt[i]=0;
			}
				status = 1;
             printf("\nYour account has been successfully created.\n");
             printf("\nPlease go to the Change PIN section and change your PIN.\n");
		
		}else {
			printf("you already have an account\n");
		}
		
//part2--->deposit
		}else if(option==2){
			printf("\n--- Deposit Menu ---\n");
			if(status==1){
				    printf("Enter the amount to deposit:");
				scanf("%d",&deposit);
				 if (deposit <= 0) {
                    printf("Invalid amount. Deposit must be greater than zero.\n");
                }else {
				balance += deposit;
				    printf("Deposit successful.\nYour new balance is: %d\n", balance);
				    
					if(lttcount < 10){
                       ltt[lttcount] = deposit;
                        lttcount++;
                        
                    } else {
                            for(i = 0; i < 9; i++){
                            ltt[i] = ltt[i+1];
						}
                            ltt[9] = deposit;
					  }}
					
			}else{
					printf("You need to create an account first.");
				}
				
//part3--->withdraw
		}else if(option==3){
				if(status == 1){
					printf("\n--- Withdraw Menu ---\n");
					printf("Please enter the amount you want to withdraw:");
					scanf("%d",&withdraw);
					
					if(withdraw<=0){
						printf("\nThe entered amount is not valid.\n Please enter a positive amount.\n");
						
					}else if(withdraw>balance){
						printf("\nNo balance!\n");
						
					}else{
					balance -= withdraw;
					printf("withdraw successful.\nYour new balance is: %d\n", balance);}
					
					if(lttcount < 10){
                       ltt[lttcount] = -withdraw;
                        lttcount++;
                    } else {
                           for(i = 0; i < 9; i++){
                            ltt[i] = ltt[i+1];
						}
                            ltt[9] = -withdraw;
					  }
				}else{
						printf("\nYou need to create an account first.\n");
					}
					
//part4--->change pin
		}else if(option==4){
			if(status==1){
				printf("\n--- Change PIN Menu ---\n");
				printf("enter old pin:");
				scanf("%d",&epin);
				if(epin==pin){
					printf("enter new pin:");
					scanf("%d",&pin);
					printf("PIN changed successfully\n\n");
					
				}else{
					printf("   Wrong PIN.   \n***Try again***\n\n");
				}}else{
					printf("\nYou need to create an account first.\n");
				}
//part5--->last ten transactions
     	}else if(option==5){
     			printf("\ntransactions:\n");
     		for(i=0;i<10;i++){
     			printf("\n-%d:%d\n",i+1,ltt[i]);
			 }
//part6--->exit
		}else if(option==6){
			printf("Thank you for choosing us.\n");
			printf("Hope to see you again.");
			return 0;
		}else{
		printf("\n\n\Invalid menu option.\n\n\n");
		}}

	return 0;
 }