#include<iostream>
#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>

using namespace std;

int maxOccurance(vector<int> v)
{
    int size = v.size();

    unordered_map<int , int > m;

    for(int i=0; i<size; i++)
    {
        m[v[i]]++;
    }

    for(auto i : m)
    {
        cout<<i.first<<"  "<<i.second<<endl;
    }

    cout<<endl<<m.size();

    int min = 0;
    int output;

    for(auto x : m)
    {
        if(x.second>min)
        {
            min = x.second;
            output = x.first;
            
        }
        
    }


    return output;
}

int main()
{
    vector <int> v;

    v.push_back(234);
    v.push_back(24);
    v.push_back(24);
    v.push_back(24);
    v.push_back(23);
    v.push_back(30);
    v.push_back(34);
    v.push_back(34);
    v.push_back(35);
    v.push_back(35);
    v.push_back(35);

    int answer =  maxOccurance(v);
    cout<<endl<<"answer is : " <<answer;
    return 0;
}