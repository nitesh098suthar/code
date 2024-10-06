#include<stdio.h>

int main()
{

    int table;
    int answer;

    printf("Enter the table no. which you want to print\n ");
    scanf("%d", &table);

    for(int i=2; i<=10; i++)
    {
        //code
        answer = table *  i;
        printf("%d\n", answer);
    }

    return 0;
}