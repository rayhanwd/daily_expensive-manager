#include <stdio.h>

int main()
{
    int expensive =0,income=0,saving=0;
    int input=0;
    printf("welcome to daily expensive manager \n");
    printf("Menu => \n 1. dashboard press=> 2 \n 2. logout press=> 0 \n 3. login press=> 1 \n");
    scanf("%d",&input);
    printf("You pressed %d \n \n",input);
    if(input==2){
        printf("Total Expensive: %d \t \t Total Income: %d \t \t Total Saving: %d",expensive,income, saving);
               }
    return 0;
}
