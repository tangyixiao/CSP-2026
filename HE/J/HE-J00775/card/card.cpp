#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream fin("card.in");
	ofstream fout("card.out");
	string c1,c2,s2;
	int s1;
	fin>>c1>>s1>>c2>>s2;
	int a=int(c1);
	for(int i=1;i<=s1;i++)
	{
		fout<<a;
		a=a/2+9;
	}
	fin.close();
	fout.close();
	return 0;
}
