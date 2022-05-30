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
   vector<pair<int ,int >>vp;

  int n; cin>>n;
   for(int i=0;i<n;i++)
   {
       int x,y; cin>>x>>y;
       vp.pb(make_pair(x,y));

   }

int ans=0;
 for(int i=0;i<n;i++){
     int f1=0, f2=0, f3=0, f4=0, cnt=0;
      for(int ii=0;ii<n;ii++){
         if (vp[i].first >vp[ii].first && vp[i].second==vp[ii].second && f1==0){ cnt++; f1=1;}

         if (vp[i].first <vp[ii].first && vp[i].second==vp[ii].second && f2==0){ cnt++; f2=1;}

         if (vp[i].first==vp[ii].first && vp[i].second<vp[ii].second  && f3==0){ cnt++; f3=1;}

         if (vp[i].first==vp[ii].first && vp[i].second>vp[ii].second  && f4==0){ cnt++; f4=1;}
      }
       if(cnt==4)ans++;
   }


cout<<ans;



    return 0;
}
