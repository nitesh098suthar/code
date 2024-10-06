#include<stdio.h>
#include<stdbool.h>

int main()
{

    int x = 5;
    int y = 10;

    bool f = 0;
    bool t = 1;

//  simple if-else
    if(f || f)
    {
        printf("x and y equal");
    }
    else
    {
        printf("x and y not equal");
    }

//  nested if-else 

    if(x%2 == 0)
    {
        if(x/2 == 0)
        {
            printf("this is nested if");
        }
        // else
        // {
        //     printf("this is nested else");
        // }
    }
    else
    {
        if(x==5)
        {
            printf("\nthis is else");
        }
        printf("\nthis else is working");
    }

    //bool

    if(true)
    {
        printf("\n \n \nthis is true");
    }
    if(1)
    {
        printf("\n \n \nthis is true");
    }
    if(false)
    {
        printf("\n \n \nthis is true");
    }
    else
    {
        printf("this is else");
    }
    if(0)
    {
        printf("\n \n \nthis is true");
    }


    // if-else ladder or if, else if, else if... else


    // Question = if you're 18 then congratulations you're able to vote, if you're under 18 you're not allowed to vote and if you're 18+ then you can vote

    // syntex

    // if(condition)
    // {

    // }
    // else if (condition)
    // {

    // }
    // else if (condition)
    // {

    // }
    // else
    // {

    // }

    int age = 19;

    if(age == 18)
    {
        printf("\ncongratulations you can vote");
    }
    else if(age == 19)
    {
        printf("\ncongratulations you can vote cause you're 19");
    }
    else if(age < 18)
    {
        printf("\nyou're not allowed to vote because you are minor");
    }
    else{
        printf("\nyou are 18 plus you can vote");
    }


    return 0;
}