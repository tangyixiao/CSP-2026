#include<bits/stdc++.h>
//#define int long long
//#define pii pair<int,int>
//#define pb push_back
//#define mr make_pair
//#define fi first
//#define se second
//#define grt greater
//#define p_queue priority_queue
//#define ep empty
//#define vec vector
//#define fr front
//#define pp pop_back
using namespace std;
int a[550000];
int b[510000];
int nt[550000];
int ans[510000];
bool pd[550000];
inline int ged(int x){
	pd[x]=true;
//	if(nt[x]!=0){
//		return nt[x]=ged(nt[x]);
//	}return x;
	return (nt[x]!=0?nt[x]=ged(nt[x]):x);
}signed main(){
	ios::sync_with_stdio(0);
	cout.tie(0);cout.tie(0);
//	freopen("card.in","r",stdin);
//	freopen("card.out","w",stdout);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	++n;++m;
	bool f=true;
	for(int i=1;i<n;++i){
		cin>>a[i];
		if(b[a[i]]!=0){
			nt[b[a[i]]]=i;
		}b[a[i]]=i;
		if(a[i-1]>a[i]){
			f=false;
		}
	}if(f==true){
		for(int i=1;i<n;++i){
			if(a[i]!=a[i+1]){
				ans[a[i]]+=i;
			}
		}for(int i=1;i<m;++i){
			cout<<ans[i]<<" ";
		}
		return 0;
	}
	for(int i=1;i<n;++i){
		if(pd[i]==false){
			ged(i);
		}
	}
	for(int i=1;i<n;++i){
		for(int j=i;j<n;++j){
			++ans[a[j]];//
			/*
			*/ 
			while(nt[j]!=0){
				j=nt[j];
			}
		}
	}
	for(int i=1;i<m;++i){
		cout<<ans[i]<<" ";
	}//cout<<"\n";
	return 0;
}/*
*/

