#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e6+6;
struct Q{
	int number;
	char c;
}p[N];

int n,len;

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	
	cin>>n;
	for(int i=1;i<=n;i++) cin>>p[i].number>>p[i].c,len+=p[i].number;
	
	int l=1,r=n,ans=0;
	while(l<r){
		int mn=min(p[l].number,p[r].number);
		if(p[l].c!=p[r].c){
			p[l].number-=mn;
			p[r].number-=mn;
			ans+=mn;
		}
		else if(p[l].c==p[r].c){
			p[l].number-=mn;
			p[r].number-=mn;
		}
		if(p[l].number==0) l++;
		if(p[r].number==0) r--;
	}
	cout<<ans;
	
	return 0;
}