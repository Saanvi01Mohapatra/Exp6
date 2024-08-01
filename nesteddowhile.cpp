//Saanvi Mohapatra
//23070123110
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        int j = 1;
        do {
            cout << "* ";
            ++j;
        } while (j <= 6);
        cout << endl;
        ++i;
    } while (i <= 6);

    return 0;
}
//PS C:\Users\asus\Desktop\cds> cd "c:\Users\asus\Desktop\cds\" ; if ($?) { g++ nesteddowhile.cpp -o nesteddowhile } ; if ($?) { .\nesteddowhile }
//* * * * * *
//* * * * * *
//* * * * * * 
//* * * * * *
//* * * * * *