#include <iostream>
using namespace std;
long int bmm(long int a, long int b)
{
	for ( ; a!=b ; )
	{
		if (a > b)
			a -= b;
		else b -= a;
	}
	return a;
}
long int kmm(long int a, long int b, long int y)
{
	long int x;
	x = a * b / y;
	return x;
}
int main()
{
	long int m , n ,  x, t;
	cin >> m >> n;
	if ((m == 0) || (n == 0))
		return 0;
	if (m < n) {
		t = m;
		m = n;
		n = t;
	}
	    
	x = bmm(m, n);
	cout << x << " " << kmm(m, n , x);
	return 0;
}