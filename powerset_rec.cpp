#include<iostream>
#include<vector>
using namespace std;

void powerset(vector<vector<int>> &answer, vector<int> output, int index, vector<int>input)
{
    if(index>=input.size())
    {
        answer.push_back(output);
        return;
    }

    //for include
    int element = input[index];
    output.push_back(element);
    powerset(answer, output, index+1, input);

    //for exclude
    output.pop_back();
    powerset(answer, output, index+1, input);

}
int main()
{
    vector<int> input;
    input.push_back(1);
    input.push_back(2);
    input.push_back(3);
    vector<vector<int>> answer;
    vector<int> output;
    int index = 0;

    powerset(answer, output, index, input);

    return 0;
}