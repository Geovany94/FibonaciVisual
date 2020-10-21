#include <iostream>
using namespace std;





int Fibonacci(int n) {
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else if (n > 1) {
		//return Fibonacci (4 - 1)
		//return 1 + Fibonacci (3-2)
		//retunr 1+0
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
	return 0;
}
// recursivo significa llamar a la funcion.
int main()
{
	int n;
	cout << "Ingrese n:";
	cin >> n;
	cout << "EL resultado es:" << Fibonacci(n);

}