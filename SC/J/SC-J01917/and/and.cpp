#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200005]={};
int del[200005]={};
int n=0,m=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=31;i>=0;i--){
		int num1=0;
		for(int j=0;j<n;j++){
			if(((a[j]>>i)&1) && del[j]==0){
				num1+=1;
			}
		}
		if(num1>=m){
			for(int j=0;j<n;j++){
				if((!((a[j]>>i)&1)) && del[j]==0){
					del[j]=1;
					
				}
			}
		}
	}
	ll ans=0;
	bool jz=false;
	int cnt=0;
	for(int i=0;i<n;i++){
		if(del[i]==0){
			if(!jz){
				ans=a[i];
				jz=true;
			}
			else{
				ans=ans&a[i];
			}
			cnt+=1;
		}
		if(cnt>=m) break;
	}
	cout<<ans;
	return 0;
}