#include <iostream>
#include <fstream>
#include <string>
//I know this shouldn't really be here but it makes coding a bit easier and faster
using namespace std;

//I'm gonna use different functions for each task
int powerof(int x, int y)
{
    for(int i=0; i<=y; i++)
    {
        x*=x;
        return x;
    }
    return 1;
}
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
    int x,y;
    cout << "Please input an integer number: " <<endl;
    cin >> x;
    if (taskone(x)==true)cout << "Number's prime m8, goodon'ya" <<endl;
    else cout << "This number ain't prime m8, sorry" <<endl;
    cout << "Please input another number " <<endl;
    cin >> y;
    cout << "The first number to the power of the second number is "<< powerof(x,y)<<endl;
    ofstream text;
    text.open("text.txt");
    text << "Wuss poppin B";
    text.close();
    ifstream itext;
    itext.open("text.txt");
    if (itext.is_open())
    {
        string line;
        while (getline(itext, line))
        {
            cout << line <<endl;
        }
    }
    itext.close();


    return 0;
}
