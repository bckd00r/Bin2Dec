#include <iostream>
#include <cmath>

int convertBinaryToDecimal(long long);

using namespace std;

int main()
{
	int binary;
	cout << "Please enter binary: ";
	cin >> binary;
    	cout << "Converted from " << binary << " binary to " << convertBinaryToDecimal(binary) << " decimal";
	return 0;
}

int convertBinaryToDecimal(long long n)
{
    int decNum = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decNum += remainder*pow(2,i);
        ++i;
    }
    return decNum;
}
