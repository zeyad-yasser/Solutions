#include <iostream>

using namespace std;

int main()
{
    int count=0;

   long long int n ,m;
  int arr[2000];
   cin>>n;cin>>m;
  long int num [2000];

  for( int i=0;i<m;i++)

  {
      cin>> num[i];
  }
for (int j=m-1;j>=0;j--)
  {
      if (num[j]%n==0)
      {
          count++;
        arr[j]=j+1;
      }
  }
  cout<<count<<endl;
  for ( int k=m-1;k>=0;k--)
  {
     if (num[k]%n==0){

      cout<<arr[k]<<" ";
     }
  }

    return 0;
}
