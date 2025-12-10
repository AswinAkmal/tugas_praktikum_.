#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main() 
{
	int data[11] = { 12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19 };

	vector<int> Vector(data, data + 11);

	auto cetakvector = [](const vector<int> vec, const string& judul) 
		{
			cout << judul << "\n";
			for (int val : vec) 
			{
				cout << val << " | ";
			}
			cout << "\n===========================================================================================\n";
		};
	cetakvector(Vector, "Isi Vector awal");

	sort(Vector.begin(), Vector.end());
	cetakvector(Vector, "Isi Vector setelah sorting ASC");

	sort(Vector.rbegin(), Vector.rend());
	cetakvector(Vector, "Isi Vector setelah sorting DSC");
}