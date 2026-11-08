#include<bits/stdc++.h>
#define int long long
using namespace std;
int num[200005],t[200005];
struct n{
	int _and;
	int num;
}a[100000000];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxn=INT_MIN,maxindex;
	cin>>n>>m;
	if(m==n){
		int ans;
		for(int i=1;i<=n;i++){
			cin>>num[i];
			ans=(i==1?num[i]:ans&num[i]);
		}
		cout<<ans;
		return 0;
	}
	else if(m==1){
		for(int i=1;i<=n;i++){
			cin>>num[i];
			maxn=max(maxn,num[i]);
		}
		cout<<maxn;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>num[i];
		maxn=max(maxn,num[i]);
		maxindex=(num[i]>=maxn?i:maxindex);
	}
	int maxn2=INT_MIN,minn=INT_MAX;
	for(int i=1;i<=n;i++){
		if(i!=maxindex){
			t[i]=num[i]&maxn;
			a[t[i]]._and++;
			a[t[i]].num=num[i];
			maxn2=max(maxn2,t[i]);
			minn=min(minn,t[i]);
		}
	}
	vector<int>list;
	for(int i=maxn2;i>=minn;i--){
		while(a[i]._and&&m-1){
			--a[i]._and;
			--m;
			list.push_back(a[i].num);
		}
	}
	int ans=maxn;
	for(int i=0;i<list.size();i++){
		ans&=list[i];
	}
	cout<<ans;
}

