#include <iostream>
#include<string>
using namespace std;

class noell{
    private:
    string name;

    public:
        void setName(string a)
        {
            name=a;
        }

        string getName()
        {
            return name;
        }
};

int main()
{
    noell n;
    n.setName(" oh Yes i can do this ");

    cout<< n.getName() ;
}
