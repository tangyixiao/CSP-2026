#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ull unsigned long long
#define pii pair<int,int>
//#define popcnt __builtin_popcount
//#define ls (rt<<1)
//#define rs (rt<<1|1) 
const int N=5e5+5;
const int M=3e5+5;
int n,m,a[N],b[N];
int cnt[M];
int tim[N]; 
stack<int>s;
bool in[N];
void solve(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)b[i]=a[n-i+1];
	if(n<=10000){
		for(int i=1;i<=n;i++){ 
			for(int j=i;j<=n;j++){
				if(in[a[j]]){
					while(!s.empty()&&a[j]!=s.top())in[s.top()]=0,s.pop();
				//	if(!s.empty())in[s.top()]=0,s.pop();
				
				}
				s.push(a[j]);
				in[a[j]]=1;
			}
			while(!s.empty())cnt[s.top()]++,s.pop();
		}
		for(int i=1;i<=m;i++)cout<<cnt[i]<<" ";
	}else{
		//	cout<<"gay\n";
	for(int i=1;i<=n;i++){
		if(in[b[i]]){
			int now=s.top();
			while(!s.empty()&&b[i]!=s.top()){
				cnt[s.top()]+=(i-tim[s.top()]);
				s.pop(); 
				in[s.top()]=0;	
			}
			if(!s.empty())cnt[s.top()]+=(i-tim[s.top()]),in[s.top()]=0,s.pop();
		}
		s.push(i);
		in[b[i]]=1;
		tim[b[i]]=i;
	}
	for(int i=1;i<=m;i++)if(in[i])cnt[i]+=(n-tim[i]);
	for(int i=1;i<=m;i++)cout<<cnt[i]<<" ";
	} 

}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card1.in","r",stdin);
//	freopen("card.out","w",stdout);
	int T=1;
	//cin>>T;
	while(T--)solve();
	return 0;
}
