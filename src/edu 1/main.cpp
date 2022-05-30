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

  int n; cin>>n;
 while(n--){
 int ans=0;
 vector<int> arr(0),even ,odd;

      int sz; cin>>sz;
      for(int i=0;i<sz;i++){
        int x; cin>>x;

        if (x%2==0)even.pb(x);
        if (x%2!=0)odd.pb(x);
    }
for(int i=0; i<even.size() ;i++)arr.pb(even[i]);
for(int i=0; i<odd.size() ;i++)arr.pb(odd[i]);

for (int i=0; i<arr.size();i++){
    for (int j=i+1 ; j<arr.size();j++){
        if (__gcd(arr[i],2*arr[j])>1)
        {
            ans++;
        }
    }
}
cout<<ans<<el;
}


    return 0;
}
