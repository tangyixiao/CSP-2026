#include<bits/stdc++.h>
using namespace std;
#define int long long
struct node{
	int l;
	char c;
};
void solve(){
	int n;
	cin>>n;
	vector<char> ch(n+5);
	vector<int> len(n+5);
	for(int i=1;i<=n;i++)	cin>>len[i]>>ch[i];
	
	int l=0,r=n+1,ans=0;
	int i=0;
	char pc;
	int pl=0,k=0;
	// k: 1 -> l
	// k：2 -> r
	
	while(l<=r){
		if(pl==0){
			l++;
			r--;
			if(r<l)	break;
			if(ch[l]!=ch[r]){
				ans+=min(len[l],len[r]);
				if(len[l]>len[r]){  // left longer
					pc=ch[l];
					pl=len[l]-len[r];
					k=1;
				}else{				// right longer
					pc=ch[r];
					pl=len[r]-len[l];
					k=2;
				}
			}else{
				if(len[l]>len[r]){  // left longer
					pc=ch[l];
					pl=len[l]-len[r];
					k=1;
				}else{				// right longer
					pc=ch[r];
					pl=len[r]-len[l];
					k=2;
				}
			}
		}else{
			if(k==1){	// left can not move
				r--;
				if(r<l)	break;
				if(ch[r]!=pc)	ans+=min(pl,len[r]);
				if(len[r]>pl){	// right enough ans longer
					pl=len[r]-pl;
					pc=ch[r];
					k=2;
				}else{			// not enough
					pl=pl-len[r];
				}
			}else{		// right can not move
				l++;
				if(r<l)	break;
				if(ch[l]!=pc)	ans+=min(pl,len[l]);
				if(len[l]>pl){	// left enough ans longer
					pl=len[l]-pl;
					pc=ch[l];
					k=1;
				}else{			// not enough
					pl=pl-len[l];
				}
			}
		}
//		cout<<"ans: "<<ans<<" k: "<<k<<" pl: "<<pl<<" pc: "<<pc<<" l,r: "<<l<<','<<r<<'\n';
	}
	cout<<ans;
	return ;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	solve();
	
	return 0;
}
