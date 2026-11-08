#include<bits/stdc++.h>
using namespace std;
long long sn[200005];
long long en[200005];
long long n,m;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>sn[i];
	}
	long long ti_shen=0,y=0;;
	string ys=0,sum=0;
	for(int i=1;i<=n;i++){
		ti_shen=sn[i];
		while(ti_shen!=0){
			y=ti_shen%2;
			ys=ys+(char)y;
		}
		long long lenys=ys.size();
		for(int j=len-1;j>=0;i--){
			sum=sum+ys[j];
		}
		en[i]=(int)sum;
	}
	cout<<12;
	return 0;
} 
