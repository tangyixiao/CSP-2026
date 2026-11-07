#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,num[200009],ans;
char c[200009];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>num[i]>>c[i];
	}
	int l=1,r=n;
	while(l<r){
		if(num[r]==0) r--;
		while(l<r&&num[r]<num[l]){
			num[l]-=num[r];
			if(c[l]!=c[r]){
				ans+=num[r];
			}
			num[r]=0;
			r--;
		}
		num[r]-=num[l];
		if(c[l]!=c[r]){
			ans+=num[l];
		}
		l++;
	}
	cout<<ans;
	return 0;
}
