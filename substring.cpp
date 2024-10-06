#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str1[100];
    cout<<"Enter your main string"<<endl;
    cin.getline(str1,100);
    int len1 = strlen(str1);
    cout<<"The length of the main array is: "<<len1<<endl;

    char *str2 = new char [100];
    cout<<"Enter string your want to search: "<<endl;
    cin.getline(str2, 100);
    int len2 = strlen(str2);

    int i=0;
    int k=i;
    while(i<=len1)
    {
        int j=0; 
        while(j<=len2)
        {
            if(str1[i]==str2[j])
            {
                
            }
            j++;
        }
        i++;
    }
    return 0;
}