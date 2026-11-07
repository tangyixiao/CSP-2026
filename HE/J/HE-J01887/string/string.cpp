#include<bits/stdc++.h>
using namespace std;
void huiwen(string s)
{
	int h=0,l=s.size();
	for(int j=0;j<l;j++)
	if(s[l-j-1]!=s[j]) h++;
	cout<<h/2;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a,k;
	char f;
	string q="";
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		cin>>k>>f;
		for(int j=1;j<=k;j++)
		q+=f;
	}
	huiwen(q);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
