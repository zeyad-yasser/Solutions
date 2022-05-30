#include <iostream>
#include <cmath>
using namespace std;
string a;
string b;
int long long  countr = 1;
int main()
{
    int t;cin >> t;
    int n;


 bool imp = false;
    int mod = 1000000007;

    for (int j = 0;j < t;j++)
    {
        cin >> n;
        cin >> a;
        cin >> b;

        for (int i = 0;i < n;i++)
        {




            if (a[i] == '1' && b[i] == '1')
            {
                countr =(( 2) * (countr%mod))%mod;

            }


            if (a[i] == '1' && b[i] == '0')
            {
                cout << "IMPOSSIBLE" << endl;
                imp = true;
                 break;
            }

        }
        if (imp==false)
        cout << countr << endl;
        countr = 1;
          imp = false;
    }







    return 0;
}

