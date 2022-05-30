#include <iostream>
#include <algorithm>
#include<string >
#include <windows.h>
#include<ctype.h>
#include <stdio.h>
using namespace std;

int main()
{
    int lower = 0;
    int upper = 0;

string word;
    cin >> word;
   // int s = strlen(word);
    for (int i = 0; word[i]!= '\0';i++)
    {
        if ( isupper(word[i]))
        {
            upper++;

        }
        else
        {

            lower++;
        }
    }



   // cout << upper << endl;

  //  cout << lower<< endl;

    if (upper > lower)
    {
        for (int i = 0; word[i] != '\0';i++)
     word[i] = toupper(word[i]);
    }
    else
    {
        for    (int i = 0; word[i] != '\0';i++)
            word[i]= tolower(word[i]);
    }
    cout << word;

    return 0;
}
