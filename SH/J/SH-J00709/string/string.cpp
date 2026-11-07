#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ull unsigned long long
#define pii pair<int,int>
//#define popcnt __builtin_popcount
//#define ls (rt<<1)
//#define rs (rt<<1|1) 
const int N=2e5+5;
int a[N],n;
int L[N],R[N];
char c[N];
struct node{
	pii p;
	int idx;
	bool friend operator<(node l,node r){
		return l.p<r.p;
	}
	bool friend operator>(node l,node r){
		return l.p.second>r.p.second;
	}
};
//set<pair<pii,int> >s[27]; 
void solve(){
	cin>>n;
	int len=0;
	R[0]=0;
//	for(int i=1;i<=n;i++)cin>>a[i]>>c[i],len+=a[i],L[i]=R[i-1]+1,R[i]=R[i-1]+a[i];
//	int cen=(len+1)/2;
//	//L是单调的
//	int pos=upper_bound(R+1,R+n+1,cen)-R;
//	int ans=0;
////	cout<<pos<<endl;
////	cout<<cen<<endl;
////	for(int i=0;i<=25;i++){
////		cout<<(static_cast<char>(i+'a'))<<':';
////		for(auto j:s[i])cout<<j.p.first<<" "<<j.p.second<<endl; 
////	}
//	for(int i=1;i<=pos;i++){
//		int rr=len-L[i]+1;
//		int rl=len-R[i]+1;
//		int res=rr-rl+1;
/////		cout<<rl<<" "<<rr<<endl; 
//		int p1=lower_bound(L+1,L+n+1,rl)-L;
//		if(p1==0)p1=n+2;
//		int p2=upper_bound(R+1,R+n+1,rr)-R;
//		cout<<p1<<" "<<p2<<endl;
//		for(int j=p1;j<=p2;j++){ 
//			if(c[i]==c[j])
//			res-=(R[j]-L[j]+1);
//		}
//		ans+=res;
//	}	 
	string s="";
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i],s.append(a[i],c[i]);
//	cout<<s<<endl;
	int ctr=(s.size()+1)/2;
	int ans=0;
	for(int i=0;i<ctr;i++){
		if(s[s.size()-i-1]!=s[i])ans++;
	}
	cout<<ans<<endl;
} 
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int T=1;
	//cin>>T;
	while(T--)solve();
	return 0;
}
/*

*/
