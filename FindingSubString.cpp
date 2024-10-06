#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string  s1;
    cout<<"Enter main string "<<endl;
    getline(cin, s1);
    string s2;
    cout<<"Ente the sub string "<<endl;
    getline(cin, s2);

    int len1 = s1.length();
    int len2 = s2.length();

    int i, j, k;
    for(i=0; i<len1; i++)
    {
        k=i;
        for(j=0; j<len2; j++)
        {
            if(s1[k]==s2[j])
            {
                if(j==(len2-1))
                {
                    cout<<"Found"<<endl;
                    cout<<(k)-(len2-1);
                    exit(0);
                }
                k++;
            }
        }
    }
    if(k>len2)
    {
        cout<<"Not Found"<<endl;
    }
    return 0;
}