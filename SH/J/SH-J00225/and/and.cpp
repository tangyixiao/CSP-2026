#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll mm=(1<<31)-1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	ll n,mxm=1,m,sum=mm,t;
	cin>>n>>m;
	vector<ll> st,nst;
	for(int i=0;i<n;i++){
		cin>>t;
		st.push_back(t);
		while(t>mxm){
			mxm=(mxm<<1);
		}
	}
	int len=n;
	int cnt=0;
	for(int mask=mxm;mask>=1;mask=(mask>>1)){
//		for(int i=0;i<len;i++){
//			cout<<st[i]<<" ";
//		}
//		cout<<"\n";
		cnt=0;
		nst.assign(0,0);
		for(int i=0;i<len;i++){
			ll x=st[i];
			if((x&mask)==mask){
				cnt++;
				nst.push_back(x);
			}
		}
		if(cnt>=m){
			st.swap(nst);
			len=cnt;
		}
	}
//	cout<<sum<<"\n";
	for(int i=0;i<m;i++){
		ll x=st[i];
		sum=(sum&x);
	}
	cout<<sum;
	return 0;
}

