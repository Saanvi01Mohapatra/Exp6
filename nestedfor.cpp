//SAANVI MOHAPATRA
//23070123110
#include<iostream>
using namespace std;
int main()
{
    int a[3][3],s=0,i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter any number for index number: "<<i<<j;
            cin>>a[i][j];
            s=s+a[i][j];
        }
    }
    cout<<"The sum of elements of matrix is:"<<s;
    return 0;
}
//PS C:\Users\asus\Desktop\cds> cd "c:\Users\asus\Desktop\cds\" ; if ($?) { g++ nestedfor.cpp -o nestedfor } ; if ($?) { .\nestedfor }
//Enter any number for index number: 005
//Enter any number for index number: 016
//Enter any number for index number: 028
//Enter any number for index number: 106
//Enter any number for index number: 115
//Enter any number for index number: 124
//Enter any number for index number: 202
//Enter any number for index number: 218
//Enter any number for index number: 228
//The sum of elements of matrix is:52