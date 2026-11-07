#include<bits/stdc++.h>
using namespace std;
char tua(int a)
{
	if(a==1) return '1';
	else return '0';
}
int tuan(char a)
{
	if(a=='1') return 1;
	else return 0;
}
string erj(int a)
{
	string s;
	while (a!=0)
	{
		s+=tua(a%2);
		a/=2;
	}
	string m;
	for (int i=s.size()-1;i>=0;i--)
	{
		m+=s[i];
	}
	return m;
}
string js(string a,string b)
{
	int maxx=max(a.size(),b.size());
	int minn=maxx-min(a.size(),b.size());
	string m;
	for (int i=minn;i<=maxx;i++)
	{
		if(a[i]!=b[i]) m+='0';
		else m+='1';
	}
	return m;
}
int twoten(string s)
{
	int leng=s.size();int sum=0;
	for (int i=leng;i>=0;i--)
	{
		int poso=1;
		for (int j=i;j>=1;j--)
		{
			poso*=2;
		}
		sum+=tuan(s[i])*poso;;
	}
	return sum;
}
int main()
{
	/*freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);*/
	int n,m;int a[100002];int s[100002];
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort (a+1,a+n+1);
	if(m==1)
	{
		cout<<a[n];return 0;
	}
	for (int i=1;i<=m;i++)
	{
		s[i]==a[n-i+1];
	}//找出最大值 
	string z=js(erj(s[1]),erj(s[2]));
	for (int i=3;i<=m;i++)
	{
		z=js(z,erj(s[i]));
	}
	int total=twoten(z);
	cout<<total;
	return 0;
	/*fclose(stdin);
	fclose(stdout);*/
}
