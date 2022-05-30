#include <iostream>

using namespace std;

int main()
{
    int n; cin>>n;
    int mat [n][n];
    int sumo =0;
   // int sumi=0;
    int sum=0;
    int round=0;

    for(int i=0 ;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }

     while(round<n/2)
     {

     for (int col =round;col<n-round;col++)
     {


        sum+=mat [round][col];
        sum+=mat [n-(round+1)][col];


     }




     for (int row =round+1;row<n-(round+1);row++)

     {
         sum+=mat [row][round];
         sum+=mat [row][n-(round+1)];
     }



    cout <<sum<<endl;
    sum=0;
    round++;
   }



cout<< mat[n/2][n/2];

    return 0;
}
