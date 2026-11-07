#include<bits/stdc++.h>
using namespace std;
int n,m;
long long ans,dp[200010][2];
struct node{
	int bu;
	long long num;
}a[200010];
bool cmp(node a,node b){
	return a.bu>b.bu;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].num;
	}
	if(m==1){
		long long maxx=-1;
		for(int i=1;i<=n;i++){
			maxx=max(maxx,a[i].num);
		}
		cout<<maxx;
		return 0;
	}if(m==n){
		long long maxx=a[1].num;
		for(int i=1;i<=n;i++){
			maxx&=a[i].num;
		}
		cout<<maxx;
		return 0;
	}/*else if(m==n-1){
		for(int i=1;i<=n;i++){
			
		}
	}*/else if(m==2&&n<=2000){
		long long maxx=-1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j){
					maxx=max(maxx,a[i].num&a[j].num);
				}
			}
		}
		cout<<maxx;
		return 0;
	}
	for(int i=1;i<=n;i++){
		long long x=a[i].num;
		while(x){
			a[i].bu+=(x&1);
			x>>=1;
		}
	}
	sort(a+1,a+n+1,cmp);
	long long maxx=a[1].num;
	for(int i=1;i<=m;i++){
		maxx&=a[i].num;
	}
	cout<<maxx<<" "<<endl;
	return 0;
}
