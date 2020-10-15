#include <iostream>

//I know this shouldn't really be here but it makes coding a bit easier and faster
using namespace std;

//I'm gonna use different functions for each task
bool taskone()
{
    int x;
    cout << "Please inout an integer number: ";
    cin >> x;
    for (int i=2; i<x; i++)
    {
        if (x%i==0)
        {
            cout <<"Sorry, number's not prime m8";
            return false;
        }
    cout << "Number's prime m8, goodon'ya";
    return true;
    }

}


int main()
{

    return 0;
}
