#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> answer = {
        {12,33,1},{23,4,1},{32,56,76}
    };
    for (int i = 0; i < answer.size(); i++)
        {
            for (int j = 0; j < answer[i].size(); j++)
               {cout << answer[i][j] << " ";} 
            cout << endl;
        }
    return 0;
}