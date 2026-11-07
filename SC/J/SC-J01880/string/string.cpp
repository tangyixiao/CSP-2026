#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
struct node{
	long long a;
	char c;
}s[N];
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int l=1,r=n;
	for(int i=1;i<=n;i++){
		cin>>s[i].a>>s[i].c;
	}
	while(l<r){
		if(s[l].a>s[r].a){
			if(s[l].c==s[r].c) s[l].a-=s[r].a,r--;
			else s[l].a-=s[r].a,ans+=s[r].a,r--;
		}
		else if(s[l].a==s[r].a){
			if(s[l].c!=s[r].c) ans+=s[l].a;
			l++,r--;
		}
		else{
			if(s[l].c==s[r].c) s[r].a-=s[l].a,l++;
			else s[r].a-=s[l].a,ans+=s[l].a,l++;
		}
	}
	cout<<ans;
	return 0;
} 