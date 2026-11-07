#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
long long n,m,a[200005],cnt,maxn=-1e9;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			if(maxn<a[i]) maxn=a[i];
		}
		cout<<maxn;
		return 0;
	}
	else if(m==n){
		cnt=a[1];
		for(int i=2;i<=n;i++){
			cnt=cnt&a[i];
		}
		cout<<cnt;
		return 0;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[i]&a[j]>maxn) maxn=a[i]&a[j];
			}
		}
		cout<<maxn;
		return 0;
	}
	else{
		sort(a+1,a+1+n,cmp);
		int sum=a[1];
		for(int i=2;i<=m;i++){
			sum=sum&a[i];
		}
		cout<<sum;
		return 0;
	}
	return 0;
}