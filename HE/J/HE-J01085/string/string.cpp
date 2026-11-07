#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
const int MAXN=200005;
int n;
int head=1,tail=0;
ll ans=0;
pii q[MAXN];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char ch;
		cin>>a>>ch;
		q[++tail]=(pii){a,(int)ch};
	}
	while(head<tail){
		//cout<<head<<' '<<tail<<'\n';
		int mn=min(q[head].first,q[tail].first);
		if(q[head].second!=q[tail].second)ans+=mn;
		q[head].first-=mn,q[tail].first-=mn;
		if(!q[head].first)head++;
		if(!q[tail].first)tail--; 
	}
	cout<<ans;
	return 0;
} 
