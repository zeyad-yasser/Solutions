#include <iostream>
#include <string >
#include <algorithm>
#include <Windows.h>
using namespace std;

int main()
{
    int s;
    char name[110] ;
    int count = 0;
    cin >> name;

    s =strlen( name);
   // cout << s << endl;
    sort(name, name + (s));
   // cout << name << endl;
    for (int i = 0;i < s;i++)
    {
       if ( name[i] == name[i + 1])
        count++;
    }
    //cout << count;
  // cout << s-count;
    if ((s -count) % 2 != 0)
        cout << "IGNORE HIM!";
    else
    {
        cout << "CHAT WITH HER!";
    }





    return 0;
}

