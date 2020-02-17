/*
	Nguyen, Alexander

	February 12, 2020

	CS G262 Discrete Structures
	Project 1 Q15: Euclid's Algorithm
*/

#include <iostream>

using namespace std;

//This function accepts a, and b and finds the GCD between them
int beginCalc(int a, int b)
{
	int x = a;
	int y = b;
	int r = a % b;

	while (r > 0)
	{
		x = b;
		y = r;
		r = x % y;
	}
	return y;
}

//This fuction prints GCD
int printGCD(int GCD)
{
	std::cout << "The GCD is: " << GCD << std::endl;
	return GCD;
}

int main()
{
	const int N = 7252938;
	const int K = 91;

	//Euclid's Algorithm GCD(N, K)
	beginCalc(N, K);
	printGCD(beginCalc(N,K));

	//Euclid's Algorithm GCD(N, K + 1)
	beginCalc(N, K + 1);
	printGCD(beginCalc(N, K + 1));

	//Euclid's Algorithm GCD(N, K + 2)
	beginCalc(N, K + 2);
	printGCD(beginCalc(N, K + 2));
}