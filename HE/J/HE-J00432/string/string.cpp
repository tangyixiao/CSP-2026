#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a[200005];
string c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	ll ans=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sort(c,c+n);
		if(c[i+1]==c[i-1])ans+=0;
		else if(c[i+1]!=c[i-1]){
			ans++;
		} 
	}
	cout<<ans<<endl;
	return 0;
}
