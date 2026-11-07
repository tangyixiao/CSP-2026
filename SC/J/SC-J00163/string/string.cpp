#include<bits/stdc++.h>
#define int long long
using namespace std;
struct Node{
	int a;
	char c;
}s[200005];
map<char,int> mp;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	//int cnt=0;
	for(int i=1;i<=n;i++){
		cin>>s[i].a>>s[i].c;	
		//cnt+=s[i].a;
	}
	int ans=0;
	int l=1,r=n;
	while(l<=r){
		if(s[l].a>=s[r].a){
			if(s[l].c!=s[r].c)ans+=s[r].a;
			s[l].a-=s[r].a;
			r--;
		}else{
			if(s[l].c!=s[r].c)ans+=s[l].a;
			s[r].a-=s[l].a;
			l++;	
		}
	}
	cout<<ans;
	return 0;
}