/*Write a C++ program that uses a while structure and the tab escape sequence \ t to print
the following table of values :
N	1 0 * N		100 * N		1000 * N
1	10			100			1000
2	20			200			2000
3	30			300			3000
4	40			400			4000
5	50			500			5000*/

#include <iostream>

int main() {
	int N{ 1 };
	
	std::cout << "N" << "\t" << "10*N" << "\t" << "100*N" << "\t" << "1000*N" << std::endl;
	std::cout << std::endl;
	while (N <= 5) {
		std::cout << N <<
			"\t" << 10 * N <<
			"\t" << 100 * N <<
			"\t" << 1000 * N << std::endl;
		N++;
	}
}