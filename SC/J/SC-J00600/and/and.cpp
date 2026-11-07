#include<bits/stdc++.h>
using namespace std;
int n;
int a[200005];
int m;
int ans;
bool cmp(int a,int b){
	return a>b;
}
int c[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	int idx=n;
	for(int i=30;i>=0;--i){
		int tot=0;
		for(int j=1;j<=idx;++j){
			if((a[j]>>i)%2==1){
				tot++;
			}
		}
		if(tot<m){
			continue;
		}else{
			ans+=(1<<i);
			int num=0;
			for(int j=1;j<=idx;++j){
				if((a[j]>>i)%2==1){
					c[++num]=a[j];
				}
			}
			for(int j=1;j<=num;++j){
				a[j]=c[j];
			}
			idx=num;
		}
	}
	cout<<ans;
}