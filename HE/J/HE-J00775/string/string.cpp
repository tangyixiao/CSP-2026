#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream fin("string.in");
	ofstream fout("string.out");
	int n,p=1;
	fin>>n;
	int a[n];
	char c[n];
	for(int i=1;i<=n;i++)
	{
		fin>>a[i]>>c[i];
	}
	string s;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=a[i];j++)
	    {
	    	s[p]=c[i];
	    	p++;
	    }
	}
	int b=0;
	for(int i=1;i<s.size();i++)
	{
		if(s[i]!=s[s.size()-i])
		{
			b++;
		}
	}
	fout<<b;
	fin.close();
	fout.close();
	return 0;
}
