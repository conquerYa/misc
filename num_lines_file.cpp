#include <fstream>
#include <iostream>
#include <string>
using namespace std;
/*
	this app will help you to number lines in some file
	output: "out.cpp"
*/

int main()
{
	cout << "Enter the whole filename"<<endl;
	string fname;
	cin >> fname;
	ifstream file(fname);
	ofstream fs("out.cpp");
	string str;
	int c = 0;
	while (getline(file, str))
	{
		if (!fs){
			cerr << "Cannot open the output file." << std::endl;
			return 1;
		}
		fs << ++c << ": " << str<<'\n';
	}
	fs.close();
	cout << "the commented file of '"<<fname;
	cout << "' is 'out.cpp'"<<endl;
	system("pause");
	return 0;
}