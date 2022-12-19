#include <iostream>
using namespace std;

int main()
{
    int x = 34;

    if (x > 36)
    {
        cout << "X er større enn 36" << "\n";
    }
    else if (x < 36)
    {
        cout << "X er mindre enn 36" << "\n";
    }
    else
    {
        cout << "X er lik 36" << "\n";
    }


    for (int i = 0; i < 3; i++)
    {
        cout << "I = " << i << "\n";
    }


    bool isRunning = true;
    count = 0;
    while(isRunning)
    {
        count++;
        if (count > 3)
        {
            isRunning = false;
        }
    }
}