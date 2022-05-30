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
   int t;cin>>t;
   for (int i=0;i<t;i++)
   {
       int n;cin>>n;
       string bks;
       cin>>bks;
       stack<char>st={};
       bool flag=0;
    int z=0;
       for (int i=0;i<n;i++)
       {
           if (bks[i]=='('){st.push('(');z++;}
           else
           {
               //if (i==0){z++;}
               if (st.size()>0){st.pop();z--;}
                else{z++;}


           }

       }
       if (z==0){cout<<"0\n";}
       else{cout<<bks.size()-(bks.size()-(z))<<"\n";}


   }





    return 0;
}
