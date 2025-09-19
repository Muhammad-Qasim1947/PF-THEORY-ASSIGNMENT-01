#include <stdio.h>
#include <string.h>
int main(){
    int dailylimit = 5000;
    int totalspending , transactionamount , transactionThisHour ;
    char transactioncountry[50];

    printf("Enter The Transaction Amount : ");
    scanf("%d",&transactionamount);
    printf("Enter Your Total Spendings For Today : ");
    scanf("%d",&totalspending);

if (transactionamount + totalspending > dailylimit){
   printf("Your Transaction Has Been Flagged.\n");
   return 0;
}

  printf("Enter Transaction Country : ");
  scanf("%s",transactioncountry);

if((strcmp(transactioncountry , "Pakistan") != 0 && 
    strcmp(transactioncountry , "pakistan") != 0 &&
    strcmp(transactioncountry , "UAE") != 0 &&
    strcmp(transactioncountry , "uae") != 0 )){
        printf("Your Transaction Has Been Flagged.\n");
    return 0;
    }

printf("Enter Number Of Transactions In One Hour : ");
scanf("%d",&transactionThisHour);

if (transactionThisHour > 3){
  printf("Your Transaction Has Been Flagged.\n");
return 0;
}

printf("Transaction Is Being Processed!");
return 0;
}
