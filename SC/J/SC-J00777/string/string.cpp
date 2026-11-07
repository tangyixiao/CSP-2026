#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
struct node{
	int m;
	char c;
}s[200010];
int l=1,r;
int ans=0;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].m;
		cin>>s[i].c;
	}
	r=n;
	while(l!=r&&l<=n&&r>=1){
		int x=min(s[l].m,s[r].m);
		if(s[l].c!=s[r].c){
			ans+=x;
		}
		s[l].m-=x;
		s[r].m-=x;
		if(s[l].m==0){
			l++;
		}
		if(s[r].m==0){
			r--;
		}
	}
	cout<<ans;
	return 0;
}