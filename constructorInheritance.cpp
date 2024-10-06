#include<iostream>
using namespace std;

class alpha
{
    protected:
        int a;
    public:
        alpha(int i)
        {
            a=i;
            cout<<"Alpha Initialized"<<endl;
        }
        void showAlpha()
        {
            cout<<"Alpha Value: "<<a<<endl;
        }
};
class beta
{
    protected:
        int b;
    public:
        beta(int j)
        {
            b=j;
            cout<<"Beta Initialized"<<endl;
        }
        void showBeta()
        {
            cout<<"Beta Value: "<<b<<endl;
        }
};
class gamma : public beta, public alpha
{
    private:
        int m, n;
    public:
        gamma(int p, int q, int r, int s): alpha(p),beta(q)
        {
            m=r;
            n=s;
            cout<<"Gamma Initialized"<<endl;
        }
        void showGamma()
        {
            cout<<"Gamma Value is 1: "<<m<<endl;
            cout<<"Gamma Value is 2: "<<n<<endl;
            
        }
};
int main()
{
    gamma g1(4,2,10,20);
    g1.showAlpha();
    g1.showBeta();
    g1.showGamma();
    return 0;
}