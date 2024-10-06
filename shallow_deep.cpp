#include <iostream>
#include <string.h>

using namespace std;

class Hero
{

private:
    int health;

public:
    char *name;
    char level;

    Hero()
    {
       name = new char[100];
    }

    Hero(Hero &temp)
    {
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << endl;
        
        cout << "health  :" << this->health << endl;
        cout << "Level   :" << this->level << endl;
        cout << "Name    :" << this->name << endl;

        cout << endl;
    }


    void setHealth(int health)
    {
        this->health = health;
    }

    void setLevel(char level)
    {
        this->level = level;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

};


int main()
{

    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Banner";
    hero1.setName(name);
     
    hero1.print();

    Hero hero2 = hero1;

    hero2.print();

    cout<<"done"<<endl;
    
    return 0;
}