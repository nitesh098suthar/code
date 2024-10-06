// #include<iostream>
// #include<string.h>

// using namespace std;

// int main()
// {
//     string s1 = "water is life";
//     string s2 = "life";
//     int len1 = s1.length();
//     int len2 = s2.length();
//     cout<<len1<<"and"<<len2;
//     int count = 0;
//     for(int i=0; i<len1; i++)
//     {
//         for(int j=0; j<len2; j++)
//         {
//             int k=0;
//            while( s1.at(i) == s2.at(k) )
//            {
//                 int count = 0;
//                 if(k==len2)
//                 {
//                     cout<<"found";
//                     count = 1;
//                     exit(0);
//                 }
//                 k++;
//            }
//         }
//     }
//     // if(!count) cout<<"Not found";
//     return 0;
// }




#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string s1 = "water is life";
    string s2 = "is";
    int len1 = s1.length();
    int len2 = s2.length();

    int i, j, k;
    for(i=0; i<len1; i++)
    {
        k=i;
        for(j=0; j<len2; j++)
        {
            if(s1.at(k)==s2.at(j))
            {
                if(j==len2-1)
                {
                    cout<<"found";
                    exit(0);
                }
            }
            else 
             break;
        }
    }
    if(i==len1) cout<<"Not found";
    return 0;
}