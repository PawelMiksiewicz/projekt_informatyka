#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include "matematyka.h"

using namespace std;

int main()
{
    unsigned int n1;

	cout<<"Write number: ";
	cin>>n1;
	cout<<"Double factorial from "<<n1<<" is "<<doublefactorial(n1)<<endl;
    //
    //
    //
    int z, binaryNumber;
    cout << "Enter a decimal number: ";
    cin >> z;
    binaryNumber = convertDecimalToBinary(z);
    cout << z << " in decimal = " << binaryNumber << " in binary" << endl;
    //
    //
    //
    int n;
    cout<<"Write number to show n-number of prime numbers : ";
    cin>>n;
    cout<<"It is: "<<primeNumber(n)<<endl;
    //
    //
    //
    long int x1,x2,x3,y1,y2,y3,a,b,c;
    cout << "Write points: " << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    a = getquadraticfunctioncoefficientAfrom3points (x1, x2, x3, y1, y2, y3);
    b = getquadraticfunctioncoefficientBfrom3points (x1, x2, x3, y1, y2, y3);
    c = getquadraticfunctioncoefficientCfrom3points (x1, x2, x3, y1, y2, y3);
    cout << "f(x) = " << a << "*x^2 + " << b << "*x + " << c << endl;
    //
    //
    //
    int k;
    cout << "Write number: ";
    cin >> k;
    vector<int>tab = factorysation(k);
    for(int i=0; i<tab.size(); i++)
    {
        cout << tab[i] <<" ";
    }
    //
    //
    //

    return 0;
}

