#include<bits/stdc++.h>
using namespace std;
int l,n,a[200005];
long long m,ans,s;
bool flag=0;
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=1;i<=n;i++){
		s+=a[i];
		if(b[i]!=b[i-1]&&i!=1){
			flag=1;
		}
	}
	if(flag==0){
		cout<<0;
		return 0;
	}
	for(int i=1;;i++){
		m+=a[i]-a[n-i+1];
		if(b[i]==b[n-i+1]){
			if(abs(m)<=abs(a[i]-a[n-i+1])){
				ans+=abs(m);
				break;
			}	
		}
		if(ans+max(a[i],a[n-i+1])>=s/2){
			ans=s/2-abs(a[i]-a[n-i+1]);
			break;
		}
		ans+=max(a[i],a[n-i+1]);
	}
	cout<<ans;
	return 0;
} 