#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
int a[200100];
map<int,int> mp;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	if(m==1) cout<<*max_element(a,a+n);
	if(m==n){
		ans=a[0];
		for(int i=1;i<n;i++) ans=ans&a[i];
		cout<<ans;
	}
	if(m==2){
		ans=-1;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++) ans=max(ans,a[i]&a[j]);
		}
		cout<<ans;
	}
	if(m==n-1){
		ans=-1;
		int sum=0;
		for(int i=0;i<n;i++){
			if(i==0) sum=a[1];
			else sum=a[0];
			for(int j=0;j<n;j++){
				if(i!=j) sum=sum&a[j];
			}
			ans=max(ans,sum);
		}
		cout<<ans;
	}
	if(*max_element(a,a+n)<4){
		for(int i=0;i<n;i++) mp[a[i]]++;
		if(mp[3]>=m) cout<<3;
		else if(mp[2]+mp[3]>=m) cout<<2;
		else if(mp[1]+mp[3]>=m) cout<<1;
		else cout<<0;
	}
	int p=1;
	for(int i=0;i<n;i++){
		if(a[i]&(a[i]+1)!=0) p=0;
	}
	sort(a,a+n);
	if(p) cout<<a[n-m];
	return 0;
}









