#include <iostream>

using namespace std;

int main()
{

    int count = 0;
    int n; cin >> n;
    int simpol[100010];
    for (int i = 0;i < n;i++)
    {

        cin >> simpol[i];

    }
    for (int i = 0;i < n;i ++ )

    {
        if (simpol[i] != simpol[i + 1 ])
        {
            count++;
        }

    }


    cout<< count;








    return 0;
}
