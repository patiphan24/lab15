#include <iostream>
using namespace std;

int main(){
    int a = 5;
    char b = 'A';
    char &c = b;
    int *x = &a;
    char *y = &b;
    int **z = &x;
    cout << a << " " << b << " " << c << " " << x << " " << &y << " " << z << "\n";
    cout << &a << " " << (int *)&b << " " << (int *)&c << " " << x << " " << &y << " " << z << "\n";
    c = 'F';
    cout << a << " " << b << " " << c << " " << x << " " << &y << " " << z << "\n";
    c = 'W';
    cout << a << " " << b << " " << c << " " << x << " " << &y << " " << z << "\n";
    a = 6;
    cout << a << " " << b << " " << c << " " << x << " " << &y << " " << z << "\n";
    a = 7;
    cout << a << " " << b << " " << c << " " << x << " " << &y << " " << z << "\n";
	
	return 0;
}