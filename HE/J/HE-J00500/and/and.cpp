#include<bits/stdc++.h>
using namespace std;

const int N=2e5+10;
int n,m,ans;
int a[N],pd[N];

/*4 2
3 15 12 12*/
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=30;i>=0;i--){
		int tot=0;
		for(int j=1;j<=n;j++){
			if(pd[j]==0&&((a[j]>>i)&1)){
				tot++;
			}
		}
//		if(i==2)cout<<tot<<endl;
		if(tot>=m){
			for(int j=1;j<=n;j++){
				if(pd[j]==0&&((a[j]>>i)&1)!=1){
					pd[j]=1;
				}
			}
			ans+=(1<<i);
		}
	}
	cout<<ans;
	return 0;
}
