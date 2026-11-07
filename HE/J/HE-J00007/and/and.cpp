#include<bits/stdc++.h>
using namespace std;
long long a[10005],n,m;
int s(int x,int k){
	int b,maxx=0;
	if(k==1){
		for(int i=1;i<=n;i++){
		if(a[i]!=-1)maxx=max(maxx,x&b);
		return maxx;
	}
	}
	for(int i=1;i<=n;i++){
			if(a[i]!=-1){
				b=a[i];
				a[i]=-1;
				maxx=max(maxx,s(x&b,k-1));
				a[i]=b;
			}
	}return maxx;
}
int main(){
	//freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==n){
		int sum=a[1];
		for(int i=2;i<=n;i++){
			sum=sum&a[i];
		}cout<<sum;
	}
	else if(m==1){
		long long maxx=0;
		for(int i=1;i<=n;i++){
			maxx=max(maxx,a[i]);
		}
		cout<<maxx;
	}
	else if(m==2){
		long long maxx=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				maxx=max(maxx,a[i]&a[j]);
			}
		}
		cout<<maxx;
	}
	else cout<<s(pow(2,31)-1,m);
	return 0;
}
