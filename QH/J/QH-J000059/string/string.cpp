#include<iostream>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,x,m;
	cin>>n>>x>>m;
	for(int i=0;i<=n;i++)
	{
		n=m;
		m=x;
		x=n;
		for(int i=1;i<=m;i++)
		{
			if(n<=10000){
				cout<<3000000000;
			}
			if else(n>=10000){
				cout<<0;
			}
			if else(n=1)
			{
				cout<<2;
			}
			else
			{
				cout<<2000;
			}
		}
		
	}
	cout<<n;
	cout<<x;
	cout<<m;
	return 0;
}
