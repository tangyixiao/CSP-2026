#include<bits/stdc++.h>
using namespace std;
long long m,n;
long long j[200005],o[200005];
bool cmp(const long long a,const long long b)
{
	return a>b;
 } 
int main()//找奇数，奇数没了找偶数 
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
    long long sum;
    long long t;
    long long f1=0,f2=0,j1,o1;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		if(t%2==0)
		{
			o[f2]=t;
			f2++;
		}
		else
		{
			j[f1]=t;
			f1++;
		}
	}
	sort(j,j+f1,cmp);
	sort(o,o+f2,cmp);
	sum=j[0];
	j1=1;
	o1=0;
	for(int i=1;i<=m;i++)
	{
		if(j[j1]>o[o1])
		{
			sum=(sum and j[j1]);
			j1++;
		}
		else
		{
			sum=(sum and o[o1]);
			o1++;
		}
	}
	fclose(stdin);
	fclose(stdout);
    cout<<sum;
	return 0;
 }