#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
unordered_map<int,int>c[30];
int a[(int)2e5+10];
char b[(int)2e5+10];
int s[(int)2e5+10];
vector<int>g[(int)2e5+10];
int s2[(int)2e5+10][30];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	//freopen("C:\\Users\\user.42\\Documents\\string\\string6.in","r",stdin);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		s[i]=s[i-1]+a[i];
		g[b[i]].push_back(i);
		for(int j=0;j<=26;j++)s2[i][j]=s2[i-1][j];
		s2[i][b[i]-'a']+=a[i];
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		if(s[i-1]+1>=s[n]/2+1){
	//		cout<<i<<'\n';
			continue;
		} 
		int sx=s[i-1]+1,ex=min(s[i],s[n]/2);
		int ssx=s[n]-ex+1,eex=s[n]-sx+1;
		int l=0,r=g[b[i]].size()-1;
		int len=r;
//		cout<<sx<<' '<<ex<<' '<<ssx<<' '<<eex<<'\n';
		if(s[g[b[i]][r]]<ssx){
			ans+=eex-ssx+1;
		}else{
			while(l<r){
				int mid=(l+r+1)/2;
				if(s[g[b[i]][mid]-1]+1<ssx)l=mid;
				else r=mid-1;
			}
			int ll=0,rr=len;
			while(ll<rr){
				int mid=(ll+rr)/2;
				if(s[g[b[i]][mid]]>eex)rr=mid;
				else ll=mid+1;
			}
			int t=s2[max(g[b[i]][max(rr-1,0ll)],g[b[i]][l])][b[i]-'a'];
			if(s[g[b[i]][rr]]<=eex)t=s2[g[b[i]][len]][b[i]-'a'],rr=-1;
			int op=t-s2[g[b[i]][l]][b[i]-'a'];
			ans+=(eex-ssx+1)-op;
	//		cout<<l<<' '<<r<<' '<<g[b[i]][l]<<' '<<op<<' '<<rr<<' '<<t<<'\n';
			int tag=0;
			if((rr>=1)&&s[g[b[i]][rr]]>eex&&s[g[b[i]][rr]-1]+1<=eex){
				ans-=max(0ll,eex-max(s[g[b[i]][rr]-1]+1,ssx)+1);
				tag=1; 
			}
			if(((l!=rr)||(l==rr&&(tag==0)))&&s[g[b[i]][l]-1]<ssx&&s[g[b[i]][l]]>=ssx)ans-=max(0ll,min(s[g[b[i]][l]],eex)-ssx+1);
		}
	}
	cout<<ans;
	return 0;
} 