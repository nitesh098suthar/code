#include<iostream>
using namespace std;
class RollNo
{
    protected:
        int rn;
    public:
        void getRollNo(void)
        {
            cout<<"Enter roll No.: "<<endl;
            cin>>rn;
        }
        void showRollNo()
        {
            cout<<"The roll no. is: "<< rn<<endl;
        }
};
class Marks : virtual public RollNo
{
    protected:
        int sub1;
        int sub2;
    public:
        void getMarks(void)
        {
            cout<<"Enter sub1 marks: "<<endl;
            cin>>sub1;
            cout<<"Enter sub2 marks: "<<endl;
            cin>>sub2;
        }
        void showMarks()
        {
            cout<<"The sub1 marks is: "<<sub1<<endl;
            cout<<"The sub2 marks is: "<<sub2<<endl;
        }
};
class Score : virtual public RollNo
{
    protected:
        int score;
    public:
        void getScore(void)
        {
            cout<<"Enter the score: "<<endl;
            cin>>score;
        }
        void showScore()
        {
            cout<<"The score you've occupied is : "<<score<<endl;
        }
};
class Result : public Marks, public Score
{
        int total;
    public:
        void getResult(void)
        {
            total=score+sub1+sub2;
        }
        void showResult()
        {
            cout<<"This is your result: "<<total<<endl;
        }
};

int main()
{
    Result r1;
    r1.getRollNo();
    r1.getMarks();
    r1.getScore();
    r1.getResult();

    r1.showRollNo();
    r1.showMarks();
    r1.showScore();
    r1.showResult();

    return 0;
}