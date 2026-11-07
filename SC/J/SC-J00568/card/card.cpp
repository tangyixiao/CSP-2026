#include<bits/stdc++.h>
#define pii pair<int,int>
#define int long long
#define endl '\n'
using namespace std;
const int maxn=500000+10;
const int maxm=300000+10;
int n,m,a[maxn];
int last[maxm];
int pos;
int c[maxn],sum;
int t[maxm];
struct node{
	int l,r;
};
vector<node> s;
bool cmp(node &x,node &y){
	return x.l<y.l;
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(last[a[i]]!=0) s.push_back({last[a[i]],i});
		last[a[i]]=i;
	}
	sort(s.begin(),s.end(),cmp);
	for(int i=1;i<=n;i++){
		pos=i;
		memset(c,0,sizeof c);
		for(int j=0;j<s.size();j++){
			if(s[j].l<pos) continue;
			c[s[j].l]++;
			c[s[j].r]--;
			pos=s[j].r;
		}
		sum=0;
		for(int j=i;j<=n;j++){
			sum+=c[j];
			if(sum==0) t[a[j]]++;
		}
	}
	for(int j=1;j<=m;j++) cout<<t[j]<<" ";
	cout<<endl;
	return 0;
}
//不辨真伪，勿论虚实