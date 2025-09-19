#include <stdio.h>
int main(){
    int Userage;
    char Usereyesight,Userwritten,Userdriving,Usermedical;
    
    printf("Enter Your Age: ");
    scanf("%d",&Userage);

if (Userage>=18){
   printf("Enter Your Eyesight Exam Result (P for Pass , F for Fail) ");
   scanf(" %c",&Usereyesight);

   if (Usereyesight == 'P' || Usereyesight == 'p'){
      printf("Enter Your Written Exam Result (P for Pass , F for Fail)");
      scanf(" %c",&Userwritten);

        if (Userwritten == 'P' || Userwritten == 'p'){
            printf("Enter Your Driving Test Result (P for Pass , F for Fail)");
            scanf(" %c",&Userdriving);
        
             if (Userdriving == 'P' || Userdriving == 'p'){
                 
                  if (Userage>=60){
                      printf("Do You Have Your Medical Fitness Certificate? (Y for Yes , N for NO) ");
                      scanf(" %c",&Usermedical);  
                      
                      if (Usermedical == 'Y' || Usermedical == 'y'){
                          printf("You Are Eligible For A License. \n");
                      }
                       else{
                        printf("You are not eligible for the license.\n");
                      }
                    } else {
                    printf("You are eligible for the license.\n");
                           }
                 
            }else{
                printf("Retake Your Driving Test.\n");
                 }
             
        }else{
            printf("Retake Your Written Exam.\n");
             }

    }else{
        printf("You are not eligible for the license.\n");
    }
}   else{
        printf("You are not eligible for the license.\n");
    }
    return 0;
}
