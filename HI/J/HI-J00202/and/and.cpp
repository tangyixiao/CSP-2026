#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010];
int x[10],y[10],z[10];
int biao[10]={0,1,2,4,8,16,32,64,128,256};
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	if(m==1){
		cout<<a[n];
		return 0;
	}
	int d=a[1],zm=1;
	while(d){
		if(d%2==0) x[zm]=0;
		else x[zm]=1;
		d/=2;
		zm++;
	}
	for(int i=2;i<=n;i++){
		int e=a[i],dm=1;
		while(e){
			if(e%2==0) y[dm]=0; 
			else y[dm]=1;
			e/=2;
			dm++;
		}
		for(int j=1;j<=10;j++){
			if(x[j]==1&&y[j]==1) z[j]=1;
			else z[j]=0;
		}
		for(int j=1;j<=10;j++){
			x[j]=z[j];
		}
	}
	int cnt=0;
	for(int i=1;i<=10;i++){
		if(x[i]==1) cnt+=biao[i];
	}
	cout<<cnt;
	return 0;
}
