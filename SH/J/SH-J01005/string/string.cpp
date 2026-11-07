#include<bits/stdc++.h>
using namespace std;
pair<long long,char>a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].first>>a[i].second;
	}long long x1=1,x2=n,ans=0,side=1;
	pair<long long,char>lft=a[1];
	while(x1!=x2){
		pair<long long,char>cmp;
		if(side==1)cmp=a[x2];
		if(side==-1)cmp=a[x1];
		if(cmp.second!=lft.second)ans+=min(cmp.first,lft.first);
		if(cmp.first>=lft.first){
			side*=-1;
			if(side==1)x2--;
			if(side==-1)x1++;
			lft={cmp.first-lft.first,cmp.second};
		}else{
			if(side==1)x2--;
			if(side==-1)x1++;
			lft={lft.first-cmp.first,lft.second};
		}
	}cout<<ans;
	return 0;
}
