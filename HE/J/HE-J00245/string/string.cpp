#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
int n;
cin>>n;
vector<int>a(n+10);
vector<char>b(n+10);
for(int x=1;x<=n;x++){
	cin>>a[x];
	cin>>b[x];
}
int l=1;
int r=n;
long long ans=0;
while(l<r){
	if(a[l]>a[r]){
		if(b[l]!=b[r]){
			ans+=a[r];
			a[l]-=a[r];
			r--;
		}
		else{
			a[l]-=a[r];
			r--;
		}
	}
	else if(a[l]==a[r]){
		if(b[l]!=b[r])ans+=a[l];
		l++;
		r--;
	}
	else {
		if(b[l]!=b[r]){
			ans+=a[l];
			a[r]-=a[l];
			l++;
		}
		else{
			a[r]-=a[l];
			l++;
		}
	}
	if(a[l]==0)l++;
	if(a[r]==0)r--;
}
cout<<ans;
	return 0;
}
