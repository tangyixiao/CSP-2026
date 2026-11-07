#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
#define int long long
#define pa pair 
#define L first
#define s second
signed main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ans=0;
	cin>>n;
	vector<pa<int,char> >A(n);
	for(int i=0;i<n;i++)cin>>A[i].L>>A[i].s;
	for(int l=0,r=n-1;l<r;){
		if(A[l].L==A[r].L){
			if(A[l].s!=A[r].s)ans+=A[l].L;
			l++,r--;
		}
		else if(A[l].L>A[r].L){
			if(A[l].s!=A[r].s)ans+=A[r].L;
			A[l].L-=A[r].L,r--;
		}
		else if(A[l].L<A[r].L){
			if(A[l].s!=A[r].s)ans+=A[l].L;
			A[r].L-=A[l].L,l++;
		}
	}
	cout<<ans;
	return 0;
}