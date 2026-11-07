#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(x) (x).begin(),(x).end()
using namespace std;
int cnt[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%lld%lld",&n,&m);
	vector<int> v(n+1);
	for(int i=0;i<n;i++)	scanf("%lld",&v[i]);
	for(int i=0;i<n;i++){
		int lst=-1,lstj;
		vector<int> cnta(300005,0);
		for(int j=i;j<n;j++){
			if(lst==-1){
				cnta[v[j]]++;
				lst=v[j];
			}
			else if(lst==v[j] && lst!=-1)	lst=-1;
			else{}
		}
		if(lst!=-1){
			for(int j=n-1;j>=0;j--){
				if(v[j]==lst)	break;
				cnta[v[j]]++;
			}
		}
		for(int j=1;j<=m;j++){
			if(cnta[j]>0)	cnt[j]++;
		}
	}
	for(int i=1;i<=m;i++)	printf("%lld ",cnt[i]);
	return 0;
}