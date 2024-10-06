#include<iostream>
#include<vector>

using namespace std;


void permutation(string input, vector<string> &answer, int index)
{
    if(index>=input.length())
    {
        answer.push_back(input);
        return ;
    }
    for(int j= index; j<=input.length(); j++)
    {
        swap(input.at(index), input.at(j));
        permutation(input, answer, index+1);
        swap(input.at(index), input.at(j));
    }
}
int main()
{
    string input = "abc";
    vector<string> answer;
    int index = 0;
    permutation(input, answer, index);
    // for(auto i : answer)
    // {
    //     cout<<i;
    // }
    cout<<endl;
    return 0;
}