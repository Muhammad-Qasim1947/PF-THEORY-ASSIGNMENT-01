#include <stdio.h>
int main()
{
int value;

printf("Please enter a value in the range 1 to 7: ");
scanf("%d", &value);

switch (value)
{
case 1:
    printf("You Have Entered Monday.\n");
    break;

    case 2:
    printf("You Have Entered Tuesday.\n");
    break;

    case 3:
    printf("You Have Entered Wednessday.\n");
    break;

    case 4:
    printf("You Have Entered Thursday.\n");
    break;

    case 5:
    printf("You Have Entered Friday.\n");
    break;

    case 6:
    printf("You Have Entered Saturday.\n");
    break;

    case 7:
    printf("You Have Entered Sunday.\n");
    break;

default:
 printf("You Have Entered Value Out Of Range.\n");

}

return 0;
}