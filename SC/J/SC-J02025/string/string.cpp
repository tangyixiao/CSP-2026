#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,a[N],len,ans;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c;
		for(int j=1;j<=a[i];j++){
			s+=c;
		}
		len+=a[i];
	}
	
	for(int i=0;i<=len/2-1;i++){
		if(s[i]!=s[len-i-1]){
			ans++;
		}
	}
	cout<<ans<<'\n';
	return 0;
}