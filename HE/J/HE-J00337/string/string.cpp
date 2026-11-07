#include<bits/stdc++.h>
using namespace std;
int n,a[200010];
char s[200010];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>s[i];
	if(n==1){
		cout<<"0";
		return 0;
	}
	if(n==2){
		if(s[1]==s[2]){
			cout<<"0";
			return 0;
		}
		else{
			cout<<min(a[1],a[2]);
			return 0;
		}
	}
	for(int i=1;i<=n;i++){
		if(n%2==1&&i==n-i+1) break;
		if(s[i]!=s[n-i+1]){
			if(a[i]<a[n-i+1]){
				ans+=a[n-i+1];
				s[i]=s[n-i+1];
				int m=a[n-i+1]-a[i];
				a[i]=a[n-i+1];
				a[i+1]-=m;
			}
			else{
				ans+=a[i];
				s[n-i+1]=s[i];
				int m=a[i]-a[n-i+1];
				a[n-i+1]=a[i];
				a[n-i]-=m;
			}
		}
		if(n%2==0&&i==n/2) break;
	}
	cout<<ans;
	return 0;
}
