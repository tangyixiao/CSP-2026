#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char c[10005];
ll a[10005];
ll m=0,ans=0;;
char s[10005];
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	ll n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
		m+=a[i];
		for(int j=1;j<=a[i];j++){
			s[j]=a[i];
		}
	}
	
	for(int i=1;i<=m/2;i++){
		for(int j=1;j>=m/2;j--){
			if(s[i]!=s[j])ans++;
		}
	}
	for(int i=1;i<=n-1;i++){
		if(c[i]==c[i+1]){
			cout<<0;
			cout<<c[i]<<" "<<c[i+1];
			return 0;
		}
	}
	
	cout<<ans;
	
	return 0;
}
