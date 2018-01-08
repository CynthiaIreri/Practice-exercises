#include <iostream>
#include <cmath>
/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?

 * 1.	Prime factors
	a.	double numPrime = 2, division = 0, num = 12
	b.	Boolean function to check if is prime or not
		i.	We have
	c.	While division !=1
		i.	If numPrime is prime
			1.	Division= num/ numPrime
			2.	If division is whole and not 1
				a.	Num = division
			3.	Else If division is not whole
				a.	NumPrime += 1
			4.	Else If division =1
				a.	Print numPrime
		ii.	Else
			a.	NumPrime += 1

 */
using namespace std;

bool isPrime(int n)
{
    int i,count=0;
    if(n==1)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for(i=1;i<=n;i++)
        if(n%i==0) count++;
    if(count==2) // Why ?
        return true;
    else
        return false;
}

bool isInteger(double k)
{
    return floor(k) == k;
}

int main() {
   double numPrime =2, division= 0, num=600851475143 ;

    while (division!= 1)
    {
        if(isPrime(numPrime))
        {
            division= num/numPrime;
            if(division != 1 && isInteger(division))
            {
                num=division;
            }
            else if(!isInteger(division))
            {
                numPrime +=1;
            }
            else if(division==1)
            {
                cout << numPrime<<endl;
            }
        }
        else
        {
            numPrime+=1;
        }
    }

    return 0;
}
