// Tanmay Upadhyay, PRN 24070123120, entc b2

#include<iostream>
#include<string>
using namespace std;
int main() 
{
    int a;
    cout << "Enter an Integer Number: ";
    cin >> a;
    cout << "The Integer is "<< a <<" and its size is " << sizeof(a) << " bytes.\n";
    float b;
    cout << "Enter a Float Number: ";
    cin >> b; 
    cout << "The Float is " << b << " and its size is " << sizeof(b) << " bytes.\n";
    double c;
    cout << "Enter a Double Number: ";
    cin >> c;
    cout << "The Double is " << c << " and its size is " << sizeof(c) << " bytes.\n";
    char d; 
    cout << "Enter a Character: ";
    cin >> d;
    cout << "The Character is " << d << " and its size is " << sizeof(d) << " bytes.\n";
    string e;
    cout << "Enter a String: ";
    cin >> e;
    cout << "The String is " << e << " and its size is " << sizeof(e) << " bytes.\n";
    bool f; 
    cout << "Enter a Boolean Value(i.e True or False): ";
    cin >> f;
    cout << "The Boolean value is " << f << " and its size is " << sizeof(f) << " bytes.\n";
    short g; 
    cout << "Enter a short integer number: ";
    cin >> g;
    cout << "The shor integer number is " << g << " and its size is " << sizeof(g) << " bytes.\n";
    long h;
    cout << "Enter a long integer number: ";        
    cin >> h;
    cout << "The long integer number is " << h << " and i4ts size is " << sizeof(h) << " bytes.\n";
}


/* output for this code

Enter an Integer Number: 7
The Integer is 7 and its size is 4 bytes.
Enter a Float Number: 4.3
The Float is 4.3 and its size is 4 bytes.
Enter a Double Number: 234455345
The Double is 2.34455e+008 and its size is 8 bytes.
Enter a Character: t
The Character is t and its size is 1 bytes.
Enter a String: yash
The String is yash and its size is 24 bytes.
Enter a Boolean Value(i.e True or False): True
The Boolean value is 0 and its size is 1 bytes.
Enter a short integer number: The shor integer number is 7792 and its size is 2 bytes.
Enter a long integer number: The long integer number is 0 and i4ts size is 4 bytes.

*/
