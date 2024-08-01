//name:Saanvi Mohapatra
//23070123110
//entc b2 
#include <iostream>
using namespace std;

int main() {
    int m2,cds;
    
    cout << "Enter the score for m2: ";
    cin >> m2;
    cout << "Enter the score for cds: ";
    cin >> cds;
    if (m2 >= 45) {
       if (cds >= 45) {
        cout << "Pass in both " << endl;
        } 

        else {
            cout << "Pass in m2 but fail in cds." << endl;
        }
    } else {
       
        if (cds >= 45) {
            cout << "Fail in M2 but pass in cds" << endl;
        } else {
            cout << "Fail in all" << endl;
        }
    }

    return 0;
}
//PS C:\Users\asus\Desktop\cds> cd "c:\Users\asus\Desktop\cds\" ; if ($?) { g++ nestedif.cpp -o nestedif } ; if ($?) { .\nestedif }
//Enter the score for m2: 25
//Enter the score for cds: 45
//Fail in M2 but pass in cds