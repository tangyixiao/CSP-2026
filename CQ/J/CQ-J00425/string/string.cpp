#include <bits/stdc++.h>
using namespace std; 
const int N=2e5+5;
int n,a[N];
long long ans;
string s[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
	}
	int l=1,r=n,x=0,y=0;
	while(l<r){
		int len=a[l]-x,lth=a[r]-y;
		if(s[l]!=s[r]){
			ans+=min(len,lth);
		}
		if(len>lth){
			r--;
			y=0;
			x+=lth;
		}
		else if(len<lth){
			l++;
			x=0;
			y+=len;
		}
		else{
			l++;
			r--;
			x=0;
			y=0;
		}
	}
	cout<<ans;
	return 0;
}
