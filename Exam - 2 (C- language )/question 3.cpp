#include<stdio.h>
 int main(){
 	 int num,reversed=0,remainder;
 	  
 	   printf("Enter the Number:");
 	    scanf("%d",&num);
 	    
 	     for (;num!=0; num/=10){
 	     remainder=num%10;
 	      reversed=reversed *10+ remainder;
 } 
          printf("Reversed Number:%d\n",reversed);
          
          return 0;
}
 