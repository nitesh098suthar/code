#include<iostream>
#include<vector>
using namespace std;

void sol(string input, string output, int index, vector<string> answer, string mapping[])
{
    
    if(index>=input.length())
    {
        return;
    }
    int digit = input.at(index) - '0';

    string value = mapping[digit];

    for(int i = 0 ; i<value.length(); i++)
    {
        output.push_back(value[i]);
        if(output.size() == input.length())
        {
            cout<<output<<" ";
        }
        sol(input, output, index+1, answer, mapping);
        output.pop_back();
    } 
}

int main()
{
    string input = "423";
    vector <string> answer;
    string output;
    int index = 0; 
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    sol(input, output, index, answer , mapping);
    return 0;
}