#include<bits/stdc++.h>
using namespace std;
struct Node{
	long long cnt;
	char let;
};
Node st[200003];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>st[i].cnt>>st[i].let;
	int l=1,r=n;
	long long ans=0;
	while(l<r){
		int tag=0;
		if(st[l].let!=st[r].let) tag=1;
		
		if(st[l].cnt<st[r].cnt){
			st[r].cnt-=st[l].cnt,ans+=tag*1ll*st[l].cnt;
			st[l].cnt=0,l++;
		}
		else if(st[l].cnt==st[r].cnt){
			ans+=tag*1ll*st[l].cnt;
			st[r].cnt=st[l].cnt=0,l++,r--;
		}
		else{
			st[l].cnt-=st[r].cnt,ans+=tag*1ll*st[r].cnt;
			st[r].cnt=0,r--;	
		}
	}
	cout<<ans<<"\n";
	return 0;
}