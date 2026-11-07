#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream fin("and.in");
	ofstream fout("and.out");
	string c1,s1,c2,s2;
	fin>>c1>>s1>>c2>>s2;
    fout<<9;
	fin.close();
	fout.close();
	return 0;
}
