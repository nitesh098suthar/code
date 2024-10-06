#include <iostream>
using namespace std;

int main() {
    int marks[] = {43, 65, 51, 27, 79, 11, 56, 61, 82, 9, 25, 36, 7, 49, 55, 63, 74, 81, 49, 37, 40, 49, 16, 75, 87, 91, 33, 24, 58, 78, 65, 56, 76, 65, 45, 54, 36, 63, 12, 21, 73, 49, 51, 19, 39, 49, 68, 93, 85, 59};

    for (int group = 0; group <= 10; group++) {
        int lower_bound = group * 10;
        int upper_bound = lower_bound + 9;
        int count = 0;

        cout << "Students in the range " << lower_bound << "-" << upper_bound << ": ";

        for (int i = 0; i < sizeof(marks) / sizeof(marks[0]); i++) {
            if (marks[i] >= lower_bound && marks[i] <= upper_bound) {
                cout << marks[i] << " ";
                count++;
            }
        }

        cout << "(" << count << " students)" << endl;
    }

    return 0;
}
