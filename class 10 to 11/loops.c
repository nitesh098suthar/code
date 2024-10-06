#include <stdio.h>

//loops : 4 types

// 1. for loop 
// 2. while loop
// 3. do while loop
// 4. for each loop -> pending

// for loop syntex

// for(initial_value; condition; inc/dec_operator)
// {
//     //code
// }

// ascii value




int main()
{

    // //capital A-Z
    // for(int i=65; i<(65+26); i++)
    // {
    //     printf("\n%c", i);
    // }

    // printf("\n\n\n");
    // //small A-Z
    
    // for(int i=97; i<(97+26); i++)
    // {
    //     printf("\n%c", i);
    // }

    // for(int i = 1; i<=n; i++)
    // {
    //     printf("%d\n", i);
    // }

    // int table = 4;
    // int multiple = 0;
    // int i = 1;
    // int n = 10;

//    for(int i = 1; i<=10; i++)
//    {
//         multiple = table * i;
//         printf("%d\n", multiple );
//    }

    // while(i<=n)
    // {
        
    //     multiple = table * i;
    //     printf("%d\n", multiple );
    //     i++;
    // }

    // do{
        
    //     multiple = table * i;
    //     printf("%d\n", multiple);
    //     i++;

    // }while(i<=n);




    // while(i == 1000)
    // {
    //     printf("this is while looop");
    //     break;
    // }

    int i = 1;

    do{

        printf("this is while looop\n");
        i++;

    }while(i > 10);



    return 0;
}