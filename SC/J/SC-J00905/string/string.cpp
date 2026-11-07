#include<bits/stdc++.h>
using namespace std;
using ll=long long;
struct node{
	ll l,r;
	char c;
};
int n;
vector<node> A;
vector<node> B;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin>>n;
	ll q1,cnt=0;char c2;
	cin>>q1>>c2;
	node qo;
	qo.l=1,qo.r=q1,qo.c=c2;
	A.push_back(qo);
	cnt+=q1;
	for(ll i=1;i<n;i++){
		ll a;
		char awa;
		cin>>a>>awa;
		node pus;
		pus.l=A[i-1].r+1;
		pus.r=pus.l+a-1;
		pus.c=awa;
		A.push_back(pus);
		cnt+=a; 
	}
	B=A;
	reverse(B.begin(),B.end());
	ll mid=cnt/2+1,ans=0;
	ll sizeA=A.size();
	for(ll i=0;i<sizeA;i++){
		B[i].r=cnt-B[i].r+1;
		B[i].l=cnt-B[i].l+1;
		swap(B[i].l,B[i].r);
	}
	//for(auto adad:A) cout<<adad.r<<' ';
	ll L=1e18,R=1e18,i=0,j=0;
	L=min(B[0].l,A[0].l);
	R=min(B[0].r,A[0].r);
	//cout<<'\n';
	ll tot=0;
	while(R<=mid){
		if(L<mid && R>mid){
			ans+=mid-L+1;
		}
		if(i>=n) break;
		if(j>=n) break; 
		char a1=B[j].c;
		char a2=A[i].c;
		//cout<<i<<' '<<j<<'\n';
		if(a1-'A'==a2-'A'){
			//cout<<1;
			if(A[i].r>=R){
				L=B[j].r+1;
				R=A[i].r;
				if(j<n) j++;
			}
			else {
				L=A[i].r+1;
				R=B[j].r; 
				if(i<n) i++;
			}
		}else{
			if(A[i].r>R){
				ans+=R-L+1;
				L=B[j+1].l;
				R=A[i].r;
				if(j<n) j++;
			}
			else {
				ans+=R-L+1;
				L=A[i+1].l;
				R=B[j].r;
				if(i<n) i++;
			}
		}
//		tot++;
//		cout<<L<<' '<<R<<'\n';
	}
	cout<<ans;
    return 0;
}

