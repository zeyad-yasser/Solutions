#include <iostream>

using namespace std;

int main()
{
    int w = 0;
        char s[3];
    cin>>s;
    for (int i = 0;i <3;i++)
    {

        if (s[i] == 'W')
            w++;
    }
    if (w >= 2)
        cout << "Qualified!";
    else
    {
        cout << "Probably Not.";
    }
    return 0;
}
