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
   int t;
   cin>>t;

   while (t--)

   {
       ll n; cin>>n; int cnt_2=0; ll res=2;
       for (int i=0; ;i++)
        {

            if (n%2==0)
            {
                n/=2;

               if (n%2==0){res==n;}
               else{res=2*n;}

            }
            else
            {
                  for (;i-1 >0;i--)
                  {
                    cout<<"2 ";

                  }
                cout<<res;
                break;
            }
        }




   }







    return 0;
}
