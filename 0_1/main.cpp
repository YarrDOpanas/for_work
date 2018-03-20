#include <iostream>
#include <fstream>
#include <string>
#define max 100

using namespace std;

int main() {
	ifstream fin("INPUT.txt");
	if (fin) {
		string s;
		getline(fin, s);
		int size = s.size();
		{
		int amount = 0, count = 0;
		for (size_t i = 0; i < size; i++)
		{
			if (s[i] == '1')
			{
				count++;
			}
			else
			{
				count = 0;
			}
			if (count > amount) amount = count;
		}
		ofstream fout("OUTPUT.txt");
		if (fout) {
			fout << amount;
			fout.close();
		}
		else
		{
			return 0;
		}
	}
	fin.close();
	}
	else {
		return 0;
	}
	system("pause");
	return 0;
}