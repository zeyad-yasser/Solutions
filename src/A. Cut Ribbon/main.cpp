#include <bits/stdc++.h>

using namespace std;
#define ff  first
#define ss second
#define mod  1000000007
#define MAX  9999999999
#define el '\n'
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define p push

#define reed   freopen ("input.txt","r",stdin);
#define write  freopen ("output.txt","w",stdout);


#define mk(arr,n,type)  type *arr=new type[n];
void MOLLTO()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    MOLLTO();

  int n, a,b,c,d=-1; cin>>n>>a>>b>>c ;

 for (int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
        int z=n-(i*a+j*b);
            if (z%c==0 && z>=0){
                    d=max(d,i+j+(z/c));
        }
    }
 }
cout<<d;
    return 0;
}
