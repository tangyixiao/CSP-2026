#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200009;
string s;
int a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	ll l=0,ans=0;
	scanf("%d",&n);
	
	for(ll i=0;i<n;i++){
		scanf("%d%s",&a[i],&c[i]);
		l+=a[i];
	}
	int cnt=0;
	while(a[cnt]>=0&&cnt<=n){
		if(a[cnt]==0) cnt++;
		s+=c[cnt];
		a[cnt]--;
	}
	
	for(ll i=0,j=l-1;i<l/2||j>=l/2;i++,j--){
		if(s[i]!=s[j]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
