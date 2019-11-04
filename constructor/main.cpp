#include <iostream>
#include<string>
using namespace std;

class noell
{
public:
    noell(string z)
    {
        setName(z);
    }

    void setName(string x)
    {
        name=x;
    }

    string getName()
    {
        return name;
    }
private:
    string name;

};
int main()
{
    noell n("constructor is nice to understand");

    cout << n.getName();
    return 0;
}
