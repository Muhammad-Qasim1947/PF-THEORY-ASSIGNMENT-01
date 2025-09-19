#include <stdio.h>
int main(){ 

int count0=0 , count1=0 , count2=0 , count3=0 , count4=0 , count5=0 , count6=0 , count7=0 , count8=0 , count9=0 ;
int num;
do{
   printf("Enter Number From 0 To 9 Both Inclusive : ");
   scanf("%d",&num);
   
   if (num==0){
   count0 += 1 ;
   }

   else if (num==0){
   count0 += 1 ;
   }

   else if (num==1){
   count1 += 1 ;
   }

   else if (num==2){
   count2 += 1 ;
   }

   else if (num==3){
   count3 += 1 ;
   }

   else if (num==4){
   count4 += 1 ;
   }

   else if (num==5){
   count5 += 1 ;
   }

   else if (num==6){
   count6 += 1 ;
   }

   else if (num==7){
   count7 += 1 ;
   }

   else if (num==8){
   count8 += 1 ;
   }

   else if (num==9){
   count9 += 1 ;
   }
   
} while (num>=0 && num<=9);
printf("Number\tNumber Of Occurences\n");
printf(" 0\t%d\n",count0);
printf(" 1\t%d\n",count1);
printf(" 2\t%d\n",count2);
printf(" 3\t%d\n",count3);
printf(" 4\t%d\n",count4);
printf(" 5\t%d\n",count5);
printf(" 6\t%d\n",count6);
printf(" 7\t%d\n",count7);
printf(" 8\t%d\n",count8);
printf(" 9\t%d\n",count9);

return 0;

}
