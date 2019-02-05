/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main(void){
   char userFirstName[20];
   char userLastName[20];
   
   srand((int)time(0));
   
   int die1 = (rand()%6)+1;
   int die2 = (rand()%6)+1;
   int die3 = (rand()%6)+1;
   int die4 = (rand()%6)+1;
   int die5 = (rand()%6)+1;
   
   int maxDie = 0;
   int minDie = 0;
   
   printf("Please enter you first and last name:\n");
   scanf(" %s[^/n}",userFirstName);
   scanf("%s",userLastName);
   
   printf("Hello %s %s! You rolled:\n", userFirstName, userLastName);
  
   printf("Die 1: %d\n",die1);
   printf("Die 2: %d\n",die2);
   printf("Die 3: %d\n",die3);
   printf("Die 4: %d\n",die4);
   printf("Die 5: %d\n",die5);
   
   int diceTotal = die1+die2+die3+die4+die5;
   
   printf("The total of your 5 die is: %d\n",diceTotal);
   
   if(die1>=die2 && die1>=die3 && die1>=die4 && die1>=die5){
      maxDie = die1;
   }
   else if(die2>=die1 && die2>=die3 && die2>=die4 && die2>=die5){
      maxDie = die2;

   }
   else if(die3>=die2 && die3>=die1 && die3>=die4 && die3>=die5){
      maxDie = die3;

   }
   else if(die4>=die2 && die4>=die3 && die4>=die1 && die4>=die5){
      maxDie = die4;
   }
   else if(die5>=die2 && die5>=die3 && die5>=die4 && die5>=die1){
      maxDie = die5;
   }
   
   
   if(die1<=die2 && die1<=die3 && die1<=die4 && die1<=die5){
      minDie = die1;
   }
   if(die2<=die1 && die2<=die3 && die2<=die4 && die2<=die5){
      minDie = die2;
   }
   if(die3<=die2 && die3<=die1 && die3<=die4 && die3<=die5){
      minDie = die3;
   }
   if(die4<=die2 && die4<=die3 && die4<=die1 && die4<=die5){
      minDie = die4;
   }
   if(die5<=die2 && die5<=die3 && die5<=die4 && die5<=die1){
      minDie = die5;
   }
   
   printf("The maximum die is: %d\n", maxDie);
   printf("The minimum die is: %d\n", minDie);
    
    
  return 0;  
 }//end of main function
