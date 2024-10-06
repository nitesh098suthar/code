#include <iostream>
#include <vector>
using namespace std;

void solution(vector<int> input, vector<int> output, vector<vector<int>> &answer, int index)
{

    if (index >= input.size())
    {
        answer.push_back(output);
        
        return;
    }

    // include
    int element = input[index];
    output.push_back(element);
    // for(int i : output)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    solution(input, output, answer, index + 1);

    output.pop_back();

    solution(input, output, answer, index + 1);
}
int main()
{
    vector<int> input = {1, 2};
    vector<vector<int>> answer;
    vector<int> output;
    int index = 0;
    solution(input, output, answer, index);
    for (int i = 0; i < answer.size(); i++)
        {
            for (int j = 0; j < answer[i].size(); j++)
                cout << answer[i][j] << " ";
            cout << endl;
        }
    return 0;
}