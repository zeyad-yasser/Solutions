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

int main()
{
    c_p_c();

ll n;cin>>n;


if (n % 4 == 0 || n % 7 == 0 || n % 44 == 0 || n % 47 == 0 ||
    n % 74 == 0 || n % 77 == 0 || n % 444 == 0 || n % 447 == 0 ||
    n % 474 == 0 || n % 477 == 0 || n % 744 == 0 ||n % 747 == 0 ||
    n % 774 == 0 || n % 777 == 0) {  cout << "YES";}

     else {cout << "NO";}

return 0;
}
















