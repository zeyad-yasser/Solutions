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
int a, b, y , x,  no_a=0, no_b=0;
 cin>>a>>b;

   x=a;  y=b;

while (x>0)
{
    x/=10;
    no_a++;
}

while (y>0)
{
    y/=10;
    no_b++;
}
//cout<< no_a<<" " <<no_b;

if (no_b>=no_a){cout<<b; return 0;}

else {
    for (int i=0;i<no_b;i++)
    {
        a/=10;
    }
    cout<<a<<b; return 0;
}








    return 0;
}
