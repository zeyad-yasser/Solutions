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
      ll arr_n[n+5];

     for(int i=0 ;i<n;i++){cin>>arr_n[i];}

     int q; cin>>q;

     for(int i=0;i<q;i++)
     {
        bool flag =1; ll y,z; cin>>y>>z;
        int start=0,ed= n; int mid =(start+ed)/2; ll ans=-1;
         while (start<=ed)
         {
              mid =(start+ed)/2;

             if (arr_n[mid]*arr_n[mid]>=y+z)
            {
                        ed =mid-1;  flag =0; ans=arr_n[mid];

                   while(start>=ed){

                    if (arr_n[mid]*arr_n[mid]>=y+z){ans =arr_n[mid];break; }

                      else
                       {
                          ed=mid-1;
                       }

                   }

             }

             else
                {
                    start=mid+1;

                }

         }
         if(ans!=-1){cout<<ans<<el;}
         if (flag) {cout<<"-1\n";}

     }




    return 0;
}
