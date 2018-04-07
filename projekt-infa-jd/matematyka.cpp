#include <vector>
#include <cmath>
long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
int primeNumber(int n)
{
    int j=1;
    int result=2;
    for (int i=2;j<n;i++) {
        for (int k=2;k<i;k++) {
            if (i%k == 0) {
                break;
            }
            if (k == i-1) {
                j++;
            }
        }
        result=i;
    }
    return result;
}
std::vector<int> factorysation (unsigned int k)
{
    unsigned long x,y;
    x = k;
    y = x+2;
    std::vector<int>dividors;
    dividors.push_back(1);
    while (x%2==0)
    {
        dividors.push_back(2);
        x/=2;
    }
    while (x%3==0)
    {
        dividors.push_back(3);
        x/=3;
    }
    for(int i=6; i<y; i+=6)
    {
        while (x%(i-1)==0)
    {
        dividors.push_back(i-1);
        x/=i-1;
    }
    while (x%(i+1)==0)
    {
        dividors.push_back(i+1);
        x/=i+1;
    }
    }
    return dividors;
}
long long doublefactorial(unsigned int n)
{
	long long ds = 1;

	for(;n>1;n-=2)
		ds*=n;

	return ds;
}
long long getquadraticfunctioncoefficientAfrom3points (int x1, int x2, int x3, int y1, int y2, int y3)
{
    int a  = (x3 * (y2 - y1) + x2 * (y1 - y3) + x1 * (y3 - y2));
return a;
}
long long getquadraticfunctioncoefficientBfrom3points (int x1, int x2, int x3, int y1, int y2, int y3)
{
    int b = (x3*x3 * (y1 - y2) + x2*x2 * (y3 - y1) + x1*x1 * (y2 - y3));
return b;
}
long long getquadraticfunctioncoefficientCfrom3points (int x1, int x2, int x3, int y1, int y2, int y3)
{
    int c =  (x2 * x3 * (x2 - x3) * y1 + x3 * x1 * (x3 - x1) * y2 + x1 * x2 * (x1 - x2) * y3);
    return c;
}






