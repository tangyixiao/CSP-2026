#include <bits/stdc++.h>
using namespace std;
int a[200005];
char c[200005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false); 
	int t=0;
	int ans=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){ 
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++){
			s[t]=c[i];
			t++;
		}
	}
	t--;
	for(int i=0;i<=t;i++){
		if(s[i]!=s[t]){
			ans++;
			t--;
		}
	}
	cout<<ans;
	return 0;
}
