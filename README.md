# EXP6
## AIM:
To study and implement C++ decision making statements Loops
### THEORY:
## FOR LOOP
The for loop is a control flow statement used to repeat a block of code a specified number of times. It is commonly used when the number of iterations is known beforehand.

### CODE 1:
```
//Saanvi Mohapatra
//23070123110

#include<iostream>
using namespace std;
int main()
{
    int i;
    for (i=0;i<10;i++)
    {
        cout<<"Hello sir"<<endl;
    }
    return 0;
}
```
## Output:
```
Hello sir
Hello sir
Hello sir
Hello sir
Hello sir
Hello sir
Hello sir
Hello sir
Hello sir
Hello sir
```
## WHILE LOOP:
The while loop is a control flow statement that executes a block of code as long as a specified condition is true. It is used when the number of iterations is not known beforehand and depends on dynamic conditions.
### CODE 2:
```
//Saanvi Mohapatra
//23070123110
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 10) {
        cout << i << " ";
        ++i;
    }
    cout << endl; // Print a newline after the loop

    return 0;
}
```
## Output:
```
1 2 3 4 5 6 7 8 9 10
```
### DO-WHILE
The do-while loop is similar to the while loop, but it guarantees that the loop body executes at least once. The condition is checked after the execution of the loop body.
### CODE 3:

```
//Saanvi Mohapatra
//23070123110
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    do
    {
       cout<<i<<endl;
       i++;
    } while (i<=10);
    return 0;
}
```
## Output:
```
1
2
3
4
5
6
7
8
9
10

```
### NESTED FOR LOOPS
Nested for loops involve placing one for loop inside another. This is useful for iterating over multi-dimensional data structures, like matrices.
### CODE 4:
```
//Saanvi Mohapatra
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
```
## Output:
```
Enter any number for index number: 002
Enter any number for index number: 013
Enter any number for index number: 025
Enter any number for index number: 104
Enter any number for index number: 117
Enter any number for index number: 126
Enter any number for index number: 2012
Enter any number for index number: 2134
Enter any number for index number: 2278
The sum of elements of matrix is:151
```
### NESTED WHILE LOOPS
Nested while loops involve placing one while loop inside another. This structure is useful for more complex data traversal and processing.
### CODE 5:
```
//Saanvi Mohapatra
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
```
## Output:
```
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
```
### NESTED DO WHILE LOOPS
Nested do-while loops involve placing one do-while loop inside another. They ensure that the inner loop executes at least once per outer loop iteration.

### CODE 6:
```
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
        } while (j <= 5);
        cout << endl;
        ++i;
    } while (i <= 5);

    return 0;
}
```
## Output:
```
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
```
### NESTED FOR WITH A WHILE LOOP
Combining for loops with while loops can be useful for more complex iteration scenarios, allowing for flexible loop control within a nested structure.

### CODE 7:
```
//Saanvi Mohapatra
//23070123110
#include <iostream>
using namespace std;

int main() {
    int rows;

    // Get the number of rows from the user
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for each row
    for (int i = 1; i <= rows; ++i) {
        // Inner loop for printing spaces
        for (int j = i; j < rows; ++j) {
            cout << " ";
        }

        // While loop for printing asterisks
        int k = 0;
        while (k != 2 * i - 1) {
            cout << "*";
            ++k;
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}

```
## Output:
```
Enter number of rows: 7
           * 
         *  *  * 
       *  *  *  *  * 
     *  *  *  *  *  *  * 
   *  *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  *  *  * 
* *  *  *  *  *  *  *  *  *  *  *  *  

```
## Conclusion

- *For Loops*: Ideal for counting and iterating over a known number of iterations, offering a compact and readable syntax.
- *While Loops*: Best used when the number of iterations is not predetermined, with the loop executing as long as a condition remains true.
- *Do-While Loops*: Ensures that the loop body executes at least once, useful for scenarios where the initial execution is necessary regardless of the condition.
- *Nested Loops*: Provides powerful mechanisms for handling complex data structures, such as multi-dimensional arrays, by nesting one loop inside another.
