#include <bits/stdc++.h>
using namespace std;
#define ff  first
#define ss second
#define mod  1000000007
#define MAX  9999999999
#define endl '\n'
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define p push


#define mk(arr,n,type)  type *arr=new type[n];
void c_p_c()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

bool isPrime(int n)
{

    if (n <= 1){return false;}

    if (n <= 3){return true;}

    if (n % 2 == 0 || n % 3 == 0){return false;}

    for (int i = 5; i * i <= n; i = i + 6)
        {
     if (n % i == 0 || n % (i + 2) == 0){ return false;}
        }

    return true;
}


bool Has_3(long long n)
{

    int sq = (int)sqrt(n);


    if (1LL * sq * sq != n)
        return false;


    return isPrime(sq) ? true : false;
}

int main()
{
    c_p_c();
    int n;cin>>n;
for (int i=0;i<n;i++)
{
    long long num ;cin>>num;
    if (Has_3(num))
        cout << "YES\n";
    else
        cout << "NO\n";
}



    return 0;
}
