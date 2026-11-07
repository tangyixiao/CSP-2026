#include<bits/stdc++.h>
using namespace std;
int n,num[200005];
char zf[200005];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>num[i]>>zf[i];
	int l=1,r=n;
	while(l<r){
		if(num[l]==num[r]){ans+=num[l]*(zf[l]!=zf[r]);l++,r--;continue;}
		if(num[l]>num[r]){
			if(zf[l]==zf[r]){num[l]-=num[r],r--;continue;}
			else{ans+=num[r],num[l]-=num[r];r--;continue;}
		}
		if(zf[l]==zf[r]){num[r]-=num[l],l++;}
		else{ans+=num[l],num[r]-=num[l];l++;}
	}
	cout<<ans;
	return 0;
}
