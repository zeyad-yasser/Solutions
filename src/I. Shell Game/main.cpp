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
 freopen ("input.txt","r",stdin);
 freopen ("output.txt","w",stdout);



   int n,a,b;

   cin>>n;

   for(int i=1;i<=3;i++)
    {
          cin>>a>>b;

            if (n == a){ n = b;}

            else if (n == b){n = a;}

    }


   cout <<n;


    return 0;
}
