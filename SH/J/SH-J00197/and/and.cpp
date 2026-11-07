#include <bits/stdc++.h>
using namespace std;
int n,m,a[200010],cnt,maxn;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		if(maxn<a[i])
			maxn=a[i];
	}
	cnt=a[1];
	if(m==1){
		cout<<maxn;
		return 0;
	}else if(m==n){
		for(int i=2;i<=n;++i){
			cnt&=a[i];
		}
		cout<<cnt;
		return 0;
	}else if(m==2){
		maxn=0;
		for(int i=1;i<=n;++i){
			for(int j=i+1;j<=n;++j){
				cnt=a[i]&a[j];
				if(cnt>maxn)
					maxn=cnt;
			}
		}
		cout<<maxn;
		return 0;
	}else{
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
		return 0;
	}
}
