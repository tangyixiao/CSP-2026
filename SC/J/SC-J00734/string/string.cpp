#include<bits/stdc++.h>
using namespace std;
char a[100];
int s[100];
int main()
{
	ifstream fin("in.txt");
	ofstream fout("out.txt");
	int b,s=0,s1=0;
	char c;
	fin>>b;
	for(int i=0;i<b;i++)
	{
		fin>>s[i];
		fscanf(fin,"%c",&c);
		for(int j=0;j<s[i];j++)
		{
			a[s]=c;
			s++;
		}
	}
	for(int i=0;i<=s/2;i++)
	{
		if(a[i]!=a[s-1-i])
		{
			a[i]==a[s-1-i];
			s1++;
		}
	}
	fout>>s1;
	return 0;
} 