#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	unsigned long long ans=0;
	int n;cin>>n;
	struct Seg{
		ll l,r;
		char c;};
	vector<Seg> A(n+1);
	ll p=1;
	for(int i=1;i<=n;i++){
		int x;char t;cin>>x>>t;
		A[i].l=p;
		A[i].r=p+x-1;
		A[i].c=t;
		p+=x;}
	int i=1,j=n;
	while(i<j){
		ll L=A[i].r-A[i].l+1;char a=A[i].c;
		ll R=A[j].r-A[j].l+1;char b=A[j].c;
		if(a!=b){
			if(L<R){
				i++;
				ans+=L;
				A[j].r=A[j].r-L;
			}
			else if(L==R)i++,j--,ans+=L;
			else{
				j--;
				ans+=R;
				A[i].l=A[i].l+R;
			}
		}
		else{
			if(L<R){
				i++;
				A[j].r=A[j].r-L;
			}
			else if(L==R)i++,j--;
			else{
				j--;
				A[i].l=A[i].l+R;
			}
		}
	}
	cout<<ans;
	return 0;}