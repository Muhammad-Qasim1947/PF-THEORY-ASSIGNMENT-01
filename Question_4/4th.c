#include <stdio.h>
int main(){
    int a,b,c,d,e;
    int count[14]={0};

    printf("Enter 5 Card Numbers : ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a<1 || a>13 || 
        b<1 || b>13 ||
        c<1 || c>13 ||
        d<1 || d>13 ||
        e<1 || e>13 ){
            printf("INVALID CARD VALUE , MUST BE BETWEEN 1-13");
        return 1;
        }
  
    count[a]++;
    count[b]++;
    count[c]++;
    count[d]++;
    count[e]++;

    int three = 0 , two = 0;

if (count[1] == 3) three = 1;
if (count[1] == 2) two = 1;

if (count[2] == 3) three = 1;
if (count[2] == 2) two = 1;

if (count[3] == 3) three = 1;
if (count[3] == 2) two = 1;

if (count[4] == 3) three = 1;
if (count[4] == 2) two = 1;

if (count[5] == 3) three = 1;
if (count[5] == 2) two = 1;

if (count[6] == 3) three = 1;
if (count[6] == 2) two = 1;

if (count[7] == 3) three = 1;
if (count[7] == 2) two = 1;

if (count[8] == 3) three = 1;
if (count[8] == 2) two = 1;

if (count[9] == 3) three = 1;
if (count[9] == 2) two = 1;

if (count[10] == 3) three = 1;
if (count[10] == 2) two = 1;

if (count[11] == 3) three = 1;
if (count[11] == 2) two = 1;

if (count[12] == 3) three = 1;
if (count[12] == 2) two = 1;

if (count[13] == 3) three = 1;
if (count[13] == 2) two = 1;

if (three && two){
    printf("The Hand Is A Full House.\n");
}
else{
    printf("The HAND Is Not A Full House.\n");
}

return 0;

}
