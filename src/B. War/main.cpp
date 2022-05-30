#include <iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;
     int arr[100010];
    double max=-1;
    int count =0;

    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 for (int i=0;i<n;i++){
     for (int j=0;j<n;j++){

    if (arr[j]<arr[i])
        {
        count++;
    }



     }
    cout<<count<<" ";
      count =0;
 }

    return 0;
}
