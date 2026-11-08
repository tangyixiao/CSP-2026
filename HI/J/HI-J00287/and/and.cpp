#include<bits/stdc++.h>
using namespace std;
long long a[200005],b[200005];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,sum=1;
	cin>>n>>m;
	for(long long i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		sort(a+1,a+n+1,cmp);
		cout<<a[1];
		return 0;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				long long ans=a[i],sum=a[j];
				sum=ans&sum;
				b[i]=max(sum,b[i]);
			}
		}
		sort(b+1,b+n+1,cmp);
		cout<<b[1];
		return 0;
	}
	else if(n==m){
		long long s=a[1];
		for(int i=2;i<=n;i++) s=s&a[i];
		cout<<s;
		return 0;
	}
	else cout<<a[1];
	return 0;
}
 
