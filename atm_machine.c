#include<stdio.h>

struct person{
int pin;
int balance;
char c;
};
int main(){
int withdraw,withdraw2,pin,i;
char c;

struct person user[3] ;
user[0].pin=123;
user[0].balance=4000;
user[0].c='a';
user[1].pin=124;
user[1].balance=3000;
user[1].c='b';
user[2].pin=125;
user[2].balance=6000;
user[2].c='c';
printf("********Minimum balance reqired to make a withdrawl is 500******* \n");
//printf("The name of user is %s",user[0].name);
//printf("The pin of user is %d",user[0].pin);

while(1){
printf("enter name \n");
scanf("%c",&c);
printf("Enter pin \n");
scanf("%d",&pin);


//printf("%s \n",name);
//printf("%d \n",pin);
if(pin==123&&c=='a'){


printf("Your balance is %d \n",user[0].balance);
printf("Enter Withdrawing amount \n");
scanf("%d",&withdraw);
if(user[0].balance>500&&user[0].balance>withdraw){
printf("Money withdrawn \n");
printf("Balance left is %d \n",user[0].balance-withdraw);
}

else if(user[0].balance<500||user[0].balance<withdraw){
printf("Too less balance");
}
printf("If you want to do second trancition then press 1 if you want to exit press 0  \n");
scanf("%d",&i);
if(i==0){
	printf("Thanks for using nv's ATM \n");
	
}
if(i==1){


printf("Now your balance left is %d \n",user[0].balance-withdraw);
printf("Enter Withdrawing amount \n");
scanf("%d",&withdraw2);
if((user[0].balance-withdraw)>500&&(user[0].balance-withdraw)>withdraw2){

printf("Money withdrawn \n");
printf("Balance left is %d \n",(user[0].balance-withdraw)-withdraw2);

printf("Thanks for using nv's ATM \n");


}
 else if((user[0].balance-withdraw)<500||(user[0].balance-withdraw)<withdraw2){
 	printf("Too less balance \n");
 }
}


else if(i!=1 && i!=0){
printf("press 1 or 0 \n");
}

user[0].balance=(user[0].balance-withdraw)-withdraw2;
}
else if(pin==124&&c=='b'){


printf("Your balance is %d \n",user[1].balance);
printf("Enter Withdrawing amount \n");
scanf("%d",&withdraw);
if(user[1].balance>500&&user[1].balance>withdraw){
printf("Money withdrawn \n");
printf("Balance left is %d \n",user[1].balance-withdraw);
}

else if(user[1].balance<500||user[1].balance<withdraw){
printf("Too less balance");
}
printf("If you want to do second trancition then press 1 if you want to exit press 0  \n");
scanf("%d",&i);
if(i==0){
	printf("Thanks for using nv's ATM \n");
	
}
if(i==1){


printf("Now your balance left is %d \n",user[1].balance-withdraw);
printf("Enter Withdrawing amount \n");
scanf("%d",&withdraw2);
if((user[1].balance-withdraw)>500&&(user[1].balance-withdraw)>withdraw2){

printf("Money withdrawn \n");
printf("Balance left is %d \n",(user[1].balance-withdraw)-withdraw2);

printf("Thanks for using nv's ATM \n");


}
 else if((user[1].balance-withdraw)<500||(user[1].balance-withdraw)<withdraw2){
 	printf("Too less balance \n");
 }
}


else if(i!=1 && i!=0){
printf("press 1 or 0 \n");
}

user[1].balance=(user[1].balance-withdraw)-withdraw2;
}
else if(pin==125&&c=='c'){


printf("Your balance is %d \n",user[2].balance);
printf("Enter Withdrawing amount \n");
scanf("%d",&withdraw);
if(user[2].balance>500&&user[2].balance>withdraw){
printf("Money withdrawn \n");
printf("Balance left is %d \n",user[2].balance-withdraw);
}

else if(user[2].balance<500||user[2].balance<withdraw){
printf("Too less balance");
}
printf("If you want to do second trancition then press 1 if you want to exit press 0  \n");
scanf("%d",&i);
if(i==0){
	printf("Thanks for using nv's ATM \n");
	
}
if(i==1){


printf("Now your balance left is %d \n",user[2].balance-withdraw);
printf("Enter Withdrawing amount \n");
scanf("%d",&withdraw2);
if((user[2].balance-withdraw)>500&&(user[2].balance-withdraw)>withdraw2){

printf("Money withdrawn \n");
printf("Balance left is %d \n",(user[2].balance-withdraw)-withdraw2);

printf("Thanks for using nv's ATM \n");


}
 else if((user[2].balance-withdraw)<500||(user[2].balance-withdraw)<withdraw2){
 	printf("Too less balance \n");
 }
}


else if(i!=1 && i!=0){
printf("press 1 or 0 \n");
}

user[2].balance=(user[2].balance-withdraw)-withdraw2;
}

else{
printf("Invalid user name or pin \n");
printf("Try again \n");
}


}





 





return 0;
}

