#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;
bool prost(int n)
{

	for (int i = 2; i <= (n + 1) / 2; i++)
		if (n % i == 0)
			return false; //
	return true;
}

int main()
{
	ofstream fout("in.txt");
	int n;
	cin >> n;
	fout << n; // 
	fout.close();
	ofstream fail("out.txt");
	for (int i = 1; i < n; i++)
		if (prost(i)) {

			fail << i << endl;
			std::cout << i << " ";

		}
	fail.close();
	system("pause");
	return 0;
}