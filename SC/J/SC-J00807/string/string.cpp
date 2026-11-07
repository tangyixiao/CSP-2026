#include<bits/stdc++.h>
#define LL long long
using namespace std;
int n;
struct node{
	int l,r;
	LL s;
	char c;
};
vector<node>vec;
LL sum,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	vec.resize(n);
	int l=1;
	LL s;
	for(int i=0;i<n&&cin>>s>>vec[i].c;i++)
		vec[i].l=l,l+=s,vec[i].r=l-1,sum+=s,vec[i].s=s;
	LL L=1,R=sum,zl=(L+R-1)/2,zr=(L+R+1)/2;
	int pl=0,pr=n-1;
	while(L<R){
		LL tmp=min({vec[pl].r-L+1,R-vec[pr].l+1,zl-L+1,R-zr+1});
		if(vec[pl].c!=vec[pr].c) ans+=tmp;
		L+=tmp,R-=tmp;
		if(vec[pl].r<L) pl++;
		if(vec[pr].l>R) pr--;
	}
	cout<<ans;
	return 0;
}