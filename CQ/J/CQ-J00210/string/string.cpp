#include <bits/stdc++.h>
#define int long long
#define debug(x) cout<<#x<<" = "<<x<<' '
#define N 400010
using namespace std;

struct Node{
	int cnt,val;
};

int n,len,tot;
Node a[N],nxt[N];
stack<Node> frt;

void init(){
	cin>>n;
	for(int i=1;i<=n;i++){
		char t;cin>>a[i].cnt>>t;
		a[i].val=(t-'a'+1),len+=a[i].cnt;
	}
	
	if(len %2 == 1){
		int nl=1,nr=0,p=(len+1)/2;
		for(int i=1;i<=n;i++){
			nr=nl+a[i].cnt-1;
			if(nl <= p && p <= nr){
				if(p-nl >= 1) nxt[++tot]={p-nl,a[i].val};
				if(nr-p >= 1) nxt[++tot]={nr-p,a[i].val};
			}else nxt[++tot]=a[i];
			
			nl=nr+1;
		}
		len--;
	}else{
		int nl=1,nr=0,p=len/2;
		for(int i=1;i<=n;i++){
			nr=nl+a[i].cnt-1;
			if(nl <= p && p <= nr){
				nxt[++tot]={p-nl+1,a[i].val};
				if(nr-p >= 1) nxt[++tot]={nr-p,a[i].val};
			}else nxt[++tot]=a[i];
			
			nl=nr+1;
		}
	}
	
//	debug(len)<<"Nxt = \n";
//	for(int i=1;i<=tot;i++) cout<<nxt[i].cnt<<' '<<nxt[i].val<<"\n";
}

int solve(){
	int ans=0,nlen=0,pos=1;
	for(;pos<=tot;pos++){
		frt.push(nxt[pos]),nlen+=nxt[pos].cnt;
		if(nlen == len/2) break;
	}pos++;
	
	for(;pos<=tot;pos++){
		int nw=nxt[pos].cnt,vl=nxt[pos].val;
		while(nw != 0){
			Node pre=frt.top();frt.pop();
			if(nw >= pre.cnt){
				nw-=pre.cnt;
				if(pre.val != nxt[pos].val) ans+=pre.cnt;
			}else{
				if(pre.val != nxt[pos].val) ans+=nw;
				pre.cnt-=nw,nw=0,frt.push(pre);
			}
		}
	}
	
	return ans;
}

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	
	init();
	cout<<solve();
	return 0;
}
