#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,t;
    cin>>n>>t;
    int arr [n];
   for (int i=0 ;i<n;i++)
{
    cin>>arr[i];
}




        int  l =0 , r =0  , sum =0 , ans  =0 ;
     while( r < n)
        {
         sum += arr[r] ;
         if(sum <= t)
        {
             ans = max( ans , (r-l +1 )) ;
         }
         while(sum> t)

        {
            sum-=arr[l] ;
            l++;
         }

         r++ ;
     }

     cout<<ans ;

    return 0;
}
