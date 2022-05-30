#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int w;cin >> w;
    int n;cin >> n;
    int arr[n];
    char word[n];
    cin >> word;
    char word2[n];
    for (int i = 0;i < n;i++)
    {
        cin >> arr[i];

        word2[i] = word[arr[i] - 1];

    }
   // cout << word2;
    for (int i = 0;i < n;i++)
    {
        if (word2[i] == 'E')
        {
            w = w + 2;
            cout << w<<" ";
           // break;
        }

        else
        {
            w = w - 1;
            cout << w<<" ";
        }

    }






    return 0;
}
