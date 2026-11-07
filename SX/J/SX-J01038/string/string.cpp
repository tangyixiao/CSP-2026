#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	long long n=-0,a=0,ans=0;
	string s="";
	long long i[200005]={};
	char c;
	cin>>n;
	for(int k=0;k<n;k++){
		cin>>i[k]>>c;
		a+=i[k];
		s+=c;
	}
	long l=0,r=n-1;
	while((l!=r)){
		if(i[l]==i[r]){
			if(s[l]!=s[r]) ans+=i[l];
		}else{
			if(s[l]!=s[r]) ans+=min(i[l],i[r]);
		}
		if(i[l]>i[r]){
		    i[l]-=i[r];
			i[r]=0;
		}else{
            i[r]-=i[l];
			i[l]=0;
		}
		if(i[l]==0) l++;
		if(i[r]==0) r--;
		if(l>=r) break;
	}

	cout<<ans;
	return 0;
}