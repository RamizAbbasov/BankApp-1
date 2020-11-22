#include "stdio.h"
#include "string.h"
//Name:Ramiz
//Surname:Abbasov
//Date:10.31.2020
int main(){
  char name[10]="Ramiz";
  int password=1234;
  char nameAsked[10];
  int passAsked;
  int option;
  int balance=100;
  int deposit;
  int withdraw;
  //system("color d");
  printf("-------------------------------\n");
  printf("Welcome to our bank application\n-------------------------------\nPlease enter you name:");
  scanf("%s",&nameAsked);
  printf("Please enter your password:");
  scanf("%d",&passAsked);
  //system("cls");
  /*printf("[1]-Check your balance\n[2]-Add money to your balance\n[3]-\n");
  printf("Please choose one option:");
  scanf("%d",&option);*/
  if (strcmp(name,nameAsked)==0 && passAsked==password) {
    printf("\n------------------\n");
    printf("Welcome back Ramiz\n");
    printf("------------------\n");
    printf("\n[+1]-Cash Deposit\n");
    printf("[+2]-Cash withdraw\n");
    printf("[+3]-Account information\n");
    printf("\nChoose one option above:");
    scanf("%d",&option);
    //system("cls");R
    if (option==1) {
      printf("\n-----------------------------------\n");
      printf("Enter the money you want to deposit");
      printf("\n-----------------------------------\n");
      printf("[+]-");
      scanf("%d",&deposit);
      balance=balance+deposit;
      printf("\nMoney deposited successfully\nMoney that deposited:%d",deposit);
      printf("\nYour new balance:%d",balance );
    }
    else if (option==2) {
      printf("\n-------------------------------------\n");
      printf("Enter the money you want to withdraw");
      printf("\n-------------------------------------\n");
      printf("[+]-");
      scanf("%d",&withdraw);
      balance=balance-withdraw;
      printf("\nMoney withdrawed successfully\nMoney that withdraw:%d",withdraw);
      printf("\nYour new balance:%d",balance );
    }
    else if (option==3) {
      printf("\n-------------------------------\n");
      printf("Welcome to our user interface\n");
      printf("-------------------------------\n");
      printf("Your name:%s",name);
      printf("\nYour password:%d",password );
      printf("\nAvailable balance:",balance);
    }
    else{
     printf("\nPlease enter again correctly\n");
    }
  }
  else{
    printf("\n-------------------------------------------\n");
    printf("Username and Password mismatch\nCheck your name or password and enter again\n-------------------------------------------");
  }
  return 0;
}
