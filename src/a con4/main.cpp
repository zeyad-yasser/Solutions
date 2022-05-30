
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define z ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    z
    int n;cin>>n;
    bool found=false;

    for (int i=0;i<1000000;i++)
    {
        if (n==pow(2,i+1)-1)
        {
            found=true;
            cout<<"Valid ";

            break;
        }

    }
if (!found){cout<<"Invalid";  }



    return 0;
}
