#include<iostream>
using namespace std;

class RollNo
{
    protected:
        int a;
    public:
        void getRollNo();
        void showRollNo();
};

class Marks : public RollNo
{
    protected:
        int x;
        int y;
    public:
        void getMarks();
        void showMarks();
};

class Result : public Marks
{
    private:
        int total;
    public:
        void showResult();
};
void RollNo :: getRollNo()
{
    cout<<"\nEnter the roll no."<<endl;
    cin>>a;
}
void RollNo :: showRollNo()
{
    cout<<"\nThe rollno is: "<<a;
}
void Marks :: getMarks()
{
    cout<<"\nEnter marks of Maths : "<<endl;
    cin>>x;
    cout<<"\nEnter marks of Hindi: "<<endl;
    cin>>y;
}
void Marks :: showMarks()
{
    cout<<"\nMarks of Maths is : "<<endl;
    cout<<x;
    cout<<"\nMarks of Hindi is : "<<endl;
    cout<<y;
}
void Result :: showResult()
{
    total=x+y;
    showRollNo();
    showMarks();
    cout<<"\nThe total Marks: "<<total<<endl;
}
int main(void)
{
    Result student;
    student.getRollNo();
    student.getMarks();
    student.showResult();
    return 0;
}