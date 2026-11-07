#include<iostream>
#include<string>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s;
	int sl=0;
	for(int i=0;i<n;i++)
	{
		int l;
		char c;
		cin>>l;
		cin>>c;
		for(int i=0;i<l;i++)
		{
			
			s[sl]=c;
			sl++;
		}
	}

	int d=0,dl=0;
	for(int i=0;i<(sl/2);i++)
	{
		if(s[i]!=s[sl-1-i])
		{
			d++;
		}
	}
	cout<<d;
	return 0;
}