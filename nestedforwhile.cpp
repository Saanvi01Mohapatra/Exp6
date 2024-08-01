//SAANVI MOHAPATRA
//23070123110
#include<iostream>
using namespace std;
int main()
{
   int i,j,k=0,n;
   cout<<"Enter number of rows: ";
   cin>>n;
   for(i=1;i<=n;i++)
   {
    for(j=1;j<(n-i);j++)
    {
        cout<<"  ";
    }
    while (k!=(2*i-1))
    {
        cout<<" * ";
        k++;
    }
    k=0;
    cout<<endl;
   } 
   return 0;

}
//Enter number of rows: 5
//       *
//     *  *  *
//   *  *  *  *  *
// *  *  *  *  *  *  *
// *  *  *  *  *  *  *  *  *