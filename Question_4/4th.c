#include <stdio.h>
int main(){
    int card1 , card2 , card3 , card4 , card5 ;
    int rank1 , rank2 , rank1count=0 , rank2count=0;

printf("Enter The Rank Of Your Poker Hand One By One\n");
printf("Rank Of Card1 : ");
scanf(" %d",&card1);
printf("Rank Of Card2 : ");
scanf(" %d",&card2);
printf("Rank Of Card3 : ");
scanf(" %d",&card3);
printf("Rank Of Card4 : ");
scanf(" %d",&card4);
printf("Rank Of Card5 : ");
scanf(" %d",&card5);
   
    rank1 = card1;
    rank1count += 1;

if ( card2 == rank1 ){
    rank1count += 1 ;
} else {
    rank2 = card2 ;
    rank2count += 1 ;
}

    if (card3 == rank1){    
    rank1count += 1 ;
    } else {
    if (rank2count == 0){
       rank2 = card3 ;
       rank2count += 1 ;
    } else if (card3 == rank2)
       rank2count += 1 ;
    }

        if (card4 == rank1){    
        rank1count += 1 ;
        } else {
        if (rank2count == 0){
        rank2 = card4 ;
        rank2count += 1 ;
        } else if (card4 == rank2)
        rank2count += 1 ;
        }    
     
            if (card5 == rank1){    
            rank1count += 1 ;
            } else {
            if (rank2count == 0){
            card5 = rank2 ;
            rank2count += 1 ;
            } else if (card5 == rank2)
            rank2count += 1 ;
            }

    if ((rank1count == 3 && rank2count == 2 ) || ( rank2count == 3 && rank1count == 2)){
  printf("This Hand Is A Poker Full House");
} else {
    printf("This Hand Is Not A Poker Full House") ;
}
return 0;
}


