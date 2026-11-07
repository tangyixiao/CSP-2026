#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200010];
char b[200010];
vector<char>jr;
long long fl;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(long long j=1;j<=a[i];j++)
		{
			jr.push_back(b[i]);
		}
	}
	
	for(int i=0;i<jr.size();i++)
	{
		cout<<jr[i]<<" "<<jr[jr.size()-1-i]<<endl;
		if(jr[i]!=jr[jr.size()-1-i])
		{
			fl++;
		}
	}
	
	cout<<fl/2;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
