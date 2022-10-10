#include <iostream>

using namespace std;

void recursion(int x)
{
	cout << x << endl;
	if (x > 0)
		recursion(x -1);
}

int main()
{
	recursion(10);
}