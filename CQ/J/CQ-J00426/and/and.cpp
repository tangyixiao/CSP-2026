#include<bits/stdc++.h>
using namespace std;
long long val[700005];
long long bit[100];
bool vis[700005]; 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>val[i];
		int x=val[i];
		for(int j=0;j<=33;j++){
			if(x&(1LL<<j)){
				bit[j]++;
			}
		}
	}
	long long ans=0;
	for(int i=33;i>=0;i--){
		if(bit[i]>=m){
			ans+=(1<<i);
			for(int j=1;j<=n;j++){
				if(!vis[j]&&!(val[j]&(1LL<<i))){
					vis[j]=true;
					for(int p=i-1;p>=0;p--){
						if(val[j]&(1LL<<p)){
							bit[p]--;
						}
					} 
				}
			} 
		}
	}
	cout<<ans;
	//system("FC.exe XXX.out XXX.ans");
	return 0;
}

