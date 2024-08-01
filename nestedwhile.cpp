//SAANVI MOHAPATRA
//23070123110
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 5) {
        int j = 1;
        while (j <= 5) {
            cout << "* ";
            ++j;
        }
        cout << endl;
        ++i;
    }

    return 0;
}
//PS C:\Users\asus\Desktop\cds> cd "c:\Users\asus\Desktop\cds\" ; if ($?) { g++ nestedwhile.cpp -o nestedwhile } ; if ($?) { .\nestedwhile }
//* * * * * 
//* * * * *
//* * * * *
//* * * * *
//* * * * *