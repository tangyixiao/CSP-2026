#include<bits/stdc++.h>
using namespace std;
int n,m,sum,maxn=0,a[100005],cnt[2005][2005],maxn2;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==1){
		for(int i=1;i<=n;i++){
			cin>>a[i];
			maxn=max(maxn,a[i]);
		}
		cout<<maxn;
		return 0;
	}
	if(m==n){
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sum=a[1];
		for(int i=1;i<=n;i++){
			sum&&a[i];
		}
		cout<<sum;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cnt[i][j]=(a[i]&a[j]);
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j) continue;
				maxn=max(maxn,cnt[i][j]);
			}
		}
		cout<<maxn;
		return 0;
	}
	else{
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+1+n,cmp);
		cout<<a[m];
		return 0;
	}
}
