#include<iostream>
using namespace std;
class car
{
    public:
        virtual void start()
        {
            cout<<"Car Started"<<endl;
        }
        virtual void stop()
        {
            cout<<"Car stopped"<<endl;
        }
};
class Innova : public car
{
    void start() override
        {
            cout<<"Innova Started"<<endl;
        }
        void stop() override
        {
            cout<<"Innova stopped"<<endl;
        }
};
class BMW : public car
{
    void start() override
        {
            cout<<"BMW Started"<<endl;
        }
        void stop() override
        {
            cout<<"BMW stopped"<<endl;
        }
};

int main()
{
Innova obj;
BMW b1;
car *base;
base=&obj;
    base->start();
    base->stop();
base=&b1;
base->start();
    base->stop();
}