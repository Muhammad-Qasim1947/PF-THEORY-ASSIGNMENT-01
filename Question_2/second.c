#include <stdio.h>
int main(){
   int x,y;
   printf("Enter The Coordinates of X : ");
   scanf("%d",&x);
   printf("Enter The Coordinates Of Y : ");
   scanf("%d",&y);

if (x>0 && y>0){
   printf("The Point (%d,%d) Lies In Quadrant I.\n",x,y);
}

else if (x<0 && y>0){
   printf("The Point (%d,%d) Lies In Quadrant II.\n",x,y);
}

else if (x<0 && y<0){
   printf("The Point (%d,%d) Lies In Quadrant III.\n",x,y);
}

else if (x>0 && y<0){
   printf("The Point (%d,%d) Lies In Quadrant IV.\n",x,y);
}

else if (x==0 && y==0){
   printf("The Point (%d,%d) Lies On The Origin.\n",x,y);
}

else if (x==0){
   printf("The Point Lies On The Y-Axis.\n");
}

else if (y==0){
   printf("The Point Lies On The X-Axis.\n");
}

return 0;

}