#include <iostream>

using namespace std;

int main()
{

        long long int x,y,z;

        cin>>x>>y>>z;





        if(x<=y&&y<=z)
           {
               if ((z-y)%2==0)
               {
                    cout<<y+((z-y)/2);
               }
               else
               {
                    cout<<y+(((z-y)+1)/2);
               }

            return 0 ;
           }
          if (y<=x&&x<=z)
          {
              if (((z-x)%2==0))
              {
                   cout<<x+((z-x)/2);
              }
             else
                {
                 cout<<x+(((z-x)+1)/2);
                }
               return 0 ;
          }



         if(z<=y&&y<=x)
            {
                if (((x-y)%2==0))
                {
                    cout<<y+((x-y)/2);
                }
                 else
                {
                 cout<<y+(((x-y)+1)/2);
                }

               return 0 ;
           }


           if(y<=z&&z<=x)
           {

                if (((x-z)%2==0))
                {
                     cout<<z+((x-z)/2);
                }
              else
              {
                   cout<<z+(((x-z)+1)/2);
              }
               return 0 ;
           }



        if (x<=z&&z<=y)
            {
                if (((y-z)%2==0))
                {
                     cout<<z+((y-z)/2);
                }
                else
                {
                     cout<<z+(((y-z)+1)/2);
                }

            return 0 ;
           }

          if (z<=x&&x<=y)
           {
                if (((y-x)%2==0))
                {
                     cout<<x+((y-x)/2);
                }
                else
                {
                     cout<<x+(((y-x)+1)/2);
                }

            return 0 ;
           }


    return 0;
}
