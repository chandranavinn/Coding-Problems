#include <iostream>
using namespace std;

void reachHome(int src, int dest)
{
    // base case -->> Ruk jao
    if (src == dest)
    {
        cout << "pahuch gya mai to" << endl;
        return;
    }
    // processing - ek step aage badh jao
    src++;

    // recursive call
    reachHome(src, dest);
}

int main()
{

    int src = 1;
    int dest = 10;

    cout << endl;
    reachHome(src, dest);
    return 0;
}