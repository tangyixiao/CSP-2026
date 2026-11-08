#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n;
pair<long long,long long> q[N];
char c[N];
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	long long s=0;
	for(int i=1;i<=n;++i){
		long long x;
		cin>>x>>c[i];
		q[i].first=s+1;
		q[i].second=(s+=(x*1ll));
	}
	for(int i=1;i<=n && q[i].first<=s/2+(s%2);++i){
		int l=1,r=n;
		int id_r=n;
		while(l<=r){
			int mid=(l+r)/2;
			if(q[mid].first<=(s-q[i].first+1) && mid>i-1) id_r=mid,l=mid+1;
			else r=mid-1;
		}
//		while(q[id_r].first>(s-q[i].first+1) && id_r>i-1) id_r--;
//		int id_l=id_r;
		int id_l=n;
		l=1,r=n;
		while(l<=r){
			int mid=(l+r)/2;
			if(q[mid].second>=(s-q[i].second+1) && mid>i-1) id_l=mid,r=mid-1;
			else l=mid+1;
		}
//		while(q[id_l].second>=(s-q[i].second+1) && id_l>i-1) id_l--;
//		id_l++;
		long long cnt=0;
		for(int j=id_l;j<=id_r;++j)
			if(c[j]!=c[i])
				cnt+=(min(q[j].second,s-q[i].first+1ll)-max(q[j].first,s-q[i].second+1ll))+1ll;
		ans+=(cnt*1ll);
//		cout<<"cnt:"<<cnt<<" i:"<<i<<" id_l:"<<id_l<<" id_r:"<<id_r<<endl;
	}
	cout<<ans;
//	cout<<endl;
//	cout<<"s:"<<s<<endl;
//	cout<<"q:"<<endl;
//	for(int i=1;i<=n;++i) cout<<q[i].first<<" "<<q[i].second<<endl;
	return 0;
}
/*
3
2 a
2 b
1 c
*/

