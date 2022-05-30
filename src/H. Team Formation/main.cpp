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

int n ,k, x,r, cnt=0; ; cin>>n>>k;
int arr [n+5];

for (int i=1;i<=n;i++)
{
    cin>>arr[i];
}

sort(arr+1,arr+n+1);


for (int i=1;i<=n;i++)
{

 if (i%3==0)
    {
        r=-1;
        for (int j=i;j>=i-2;j--)
        {
            r=max(arr[i],r);
        }

        if (5-r>=k){cnt++;}

    }
}
     cout <<cnt;
    return 0;
}
