#include <iostream>

//I know this shouldn't really be here but it makes coding a bit easier and faster
using namespace std;

//I'm gonna use different functions for each task
bool taskone(int x)
{
   for (int i=2; i<x; i++)
    {
        if (x%i==0)
        {
            return false;
        }
    return true;
    }

}


int main()
{
    int x;
    cout << "Please input an integer number: ";
    cin >> x;
    if (taskone(x)==true)cout << "Number's prime m8, goodon'ya";
    else cout << "This number ain't prime m8, sorry";
    return 0;
}
