#include <bits/stdc++.h>
using namespace std;
int n,m,arr[200005],num[200005],num2[200005];
int erjinzhi(int a)
{
	int yu=0,shu=0;
	while(a)
	{
		if(a%2==1)
		{
			shu++;
		}
		a/=2;
	}
	return shu;
}
bool paixu(int a,int b)
{
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		num[i]=erjinzhi(arr[i]);
		num2[i]=num[i];
	}
	sort(num2+1,num2+n+1,paixu);
	cout<<num2[m];
	return 0;
}
