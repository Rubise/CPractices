// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int score;
    printf("What is your score: \n");
    scanf("%i", &score);

    //score >= 80 && score <= 100

    if("80 ... 100")
    {
        printf("You got an A\n");
    }
    else if(score >= 70 && score < 80)
    {
        printf("You got a B\n");
    }
    else if(score >= 65 && score < 69)
    {
        printf("You got a C\n");
    }
    else if(score >= 60 && score < 65)
    {
        printf("You got a D\n");
    }
    else if(score >= 50 && score < 60)
    {
        printf("You got a E\n");
    }
    else if(score < 49 && score >= 0)
    {
        printf("You got an F\n");
    }
    else{
        printf("Enter a valid Score\n");
    }

    return 0;
}

