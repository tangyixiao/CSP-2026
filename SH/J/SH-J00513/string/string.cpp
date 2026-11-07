#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,j[200005]={0};
	char c[200005];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>j[i]>>c[i];
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	int l=1,r=n;
	long long ans=0;
	while(true){
		if(c[l]!=c[r]){
			if(j[l]==j[r]){
				ans+=j[l];
				l++;
				r--;
			}else if(j[l]<j[r]){
				ans+=j[l];
				j[r]-=j[l];
				l++;
			}else{
				ans+=j[r];
				j[l]-=j[r];
				r--;
			}
		}else{
			if(j[l]==j[r]){
				l++;
				r--;
			}else if(j[l]<j[r]){
				j[r]-=j[l];
				l++;
			}else{
				j[l]-=j[r];
				r--;
			}
		}
		if(r<=l){
			break;
		} 
	}
	cout<<ans;
	return 0;
}
