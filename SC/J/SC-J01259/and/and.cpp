#include<bits/stdc++.h>
using namespace std;
const int N=2000010; 
long long n,m,tot;
long long a[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++)
		cin>>a[i];	
	sort(a+1,a+1+n);
	do{
		tot=a[n];
		for(long long i=n-1;i>=n-m+1;i--)
		{
			tot&=a[i];	
		}
		n--;
	}while(tot==0);
	cout<<tot;
} 
//olD-mOwOn;
/*沃一个，只。四房休，尼补扎了。马
  队。英改师*/ 
/*1939工作室快让美芬死一死，不然我就曼哈顿你的工作室！！*/ 