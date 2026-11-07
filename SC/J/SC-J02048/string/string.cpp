#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[1000000];
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	char c;
	int l=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c;
		for(int j=1;j<=a[i];j++){
			s+=c;
		}
		l+=a[i];
	}
	int ans=0;
	if(l%2==0){
		for(int i=0;i<l/2;i++){
			if(s[i]!=s[l/2+(l/2-i)-1]){
				ans++;
			}
		}
	}
	else if(l%2!=0){
		for(int i=0;i<l/2;i++){
			if(s[i]!=s[l/2+(l/2-i)]){
				ans++;
			}
		}
	}
	cout<<ans;
}