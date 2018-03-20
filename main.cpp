#include <iostream>
#include <vector>
#define number 100

using namespace std;

void get_div(int n, vector<int> & divs) {
	int dlim = sqrt(n);
	for (size_t d = 2; d <= dlim; d++) {
		if (n%d == 0) {
			divs.push_back(d);
			if (d != n / d)
				divs.push_back(n / d);
		}
	}
	divs.push_back(1);
	divs.push_back(n);
}

int main() {
	vector<int> v;
	get_div(number, v);
	cout << "Devisors: ";
	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	system("pause");
	return 0;
}