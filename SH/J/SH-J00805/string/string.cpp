#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<set>
#include<map>
#include<cstdio>
#include<cmath>
#include<cctype>
using namespace std;
int w=0;
//// 
/// 全局变量/函数区
long long n;
long long a[200010],b[200010];
char c[200010],d[200010]; 
//// 
/// 主函数区 
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%d %c",a+i,c+i);
		b[n-i+1]=a[i];
		d[n-i+1]=c[i];
	}
	long long l1=1,l2=0,r1=1,r2=0;
	long long cnt=0;
	while (l1<n+1&&r1<n+1)
	{
		long long x=min(a[l1]-l2,b[r1]-r2);
		if (c[l1]!=d[r1])cnt+=x;
		l2+=x;
		r2+=x;
		while (l2>=a[l1])l2-=a[l1++];
		while (r2>=b[r1])r2-=b[r1++];
	}
	cout<<(cnt/2ll)<<endl;
	return (0>w<0);
}
