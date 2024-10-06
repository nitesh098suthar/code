#include<iostream>
using namespace std;

class preprocessor{

    private:
        int health;
        int level;

   public:
   preprocessor(int health, int level)
   {
        this->health = health;
        this->level = level;
   }
    void printing()
    {
        cout<<"The health of the damn man: "<<this->health<<endl;
        cout<<"The level of the damn man: "<<this->level<<endl;
    }

};