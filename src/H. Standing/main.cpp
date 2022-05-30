#include <iostream>
#include <cmath>

using namespace std;
int tab[501][11001] = {};
int main()
{

    int  n; cin >> n;

    int  element[501] = {};
    int sum = 0;
    int x;
    for (int i = 0;i < n;i++)
    {
        sum = 0;
        for (int ii = 0;ii < 5;ii++)
        {
            cin >> x;
            sum += x;
        }
        tab[sum][element[sum]] = i + 1;
        element[sum]++;

    }




    bool started = 0;
    for (int i = 500;i >= 0;i--)

    {
        for (int ii = 0;ii<element [i];ii++)
        {


            if (started)
                cout << " " << tab[i][ii];
            else
            {
                cout << tab[i][ii];
                started = 1;
            }



        }




    }







    return 0;
}
