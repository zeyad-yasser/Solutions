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
void c_p_c()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    c_p_c();

  int n; cin>>n;

  vector <int> h(n);
for(int i=0;i<n;i++){cin>>h[i];}
ll drs,erg=0; drs=h[0];

for(int i=0;i<n-1;i++){
    if (h[i]>=h[i+1]){erg+=h[i]-h[i+1];}

    else{


        if(erg>=(h[i+1]-h[i])){erg-=(h[i+1]-h[i]);}
        else{
           drs+=(h[i+1]-h[i])-erg;
           erg=0;
        }


    }
}

   cout<<drs;

    return 0;
}
