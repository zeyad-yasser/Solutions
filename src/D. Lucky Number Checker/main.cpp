#include <iostream>

using namespace std;

int main()
{
    int n;cin >>n;
    char arr[n];

     cin>> arr;


 bool lucky=false;
    for (int j=0;j<n;j++)
    {
        bool lucky=false;
        if (arr[j]=='3'||arr[j]=='6'||arr[j]=='9' ){
            lucky=true;
        }

       // else if (arr[j]!='3'||arr[j]!='6'||arr[j]!='9' ){
           // lucky=false;
       // }

    }

    if   (lucky==true){
        cout<<"YES";
    }
    else{
       cout<<"NO";
    }
    return 0;
}
