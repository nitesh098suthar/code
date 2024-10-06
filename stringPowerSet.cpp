#include<iostream>
#include<vector>
using namespace std;
void solution(string input, string output, vector<string> answer, int index)
{
    
    if(index>=input.length())
    {
        answer.push_back(output);
        for(auto i : answer)
        {
            cout<<i;
        }
        cout<<endl;

        return;
    }
    //include

    char element = input.at(index);
    output.push_back(element);

    solution(input, output, answer, index+1);

    output.pop_back();

    //exclude

    solution(input, output, answer, index+1);
}
int main()
{
    int index = 0 ;
    string input = "123";
    vector<string> answer;
    string output;
    solution(input, output, answer, index);

    return 0;
}