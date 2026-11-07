#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,cnt,a[200005];
string s;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		while(a[i]--) s+=c[i];
	}
	for(int l=0,r=s.size()-1;l<=s.size()/2;l++,r--){
		if(s[l]!=s[r]){
			cnt++;
			cout<<l;
		}
	}
	cout<<cnt;
	return 0;
}
