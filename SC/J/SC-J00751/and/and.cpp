#include <bits/stdc++.h>
using namespace std;
int an1[200005],an2[200005],an3[200005],n,m,sum1,sum2,sum3;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>an1[i];
		an2[i]=an1[i];
		an3[i]=an1[i];
	}
	sort(an1,an1+n,greater<int>());
	sum1=an1[0]&an1[1];
	for(int i=2;i<m;i++)
	{
		sum1=sum1&an1[i];
	}
	sort(an2,an2+n); 
	sum2=an2[0]&an2[1];
	for(int i=2;i<m;i++)
	{
		sum2=sum2&an2[i];
	}
	sum3=an3[0]&an3[1];
	for(int i=2;i<m;i++)
	{
		sum3=sum3&an3[i];
	}
	cout<<max(sum1,max(sum2,sum3));
	return 0;
} 