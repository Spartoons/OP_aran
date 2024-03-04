#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find(int i, int r){
    if (i < r){
        return -1;
    }
    else if(i>r){
        return 1;
    }
    return 0;
}

int main(void){
    srand(time(NULL));
    int secretNumber = rand() % 100 + 1;
    int i, s=0;
//    printf("%d", secretNumber);

    while(s==0){
        printf("\nEnter number: ");
        scanf("%d", &i);
        switch(find(i, secretNumber)){
            case 1:
                printf("Too high.\n");
                break;
            case -1:
                printf("Too low.\n");
                break;
            case 0:
                printf("You got it!\n");
                s=1;
                break;
        }
    }
    return 0;
}