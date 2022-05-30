#include <iostream>

using namespace std;

int main()
{

    int n; cin>>n;
    int arr [n][3];
    int count =0;

    for (int i =0 ;i<n;i++)
    {
         for (int j =0 ;j<3;j++)
            {
                cin>>arr[i][j];
            }

    }




         for (int j =0 ;j<n;j++)
            {
                if (arr [j][0]&&arr[j][0+1]==1||arr [j][0]&&arr[j][0+2]==1||
                    arr [j][0+1]&&arr[j][0+2]==1)
                count ++;
            }



    cout <<count;






    return 0;
}
