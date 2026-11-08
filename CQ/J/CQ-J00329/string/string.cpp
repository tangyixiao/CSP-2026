#include<bits/stdc++.h>
using namespace std;
struct st{
	long long a;
	char c;
};
st q[200005];
long long all=0,ls,ans;
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>q[i].a>>q[i].c;
		all+=q[i].a;
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	
	long long l=0,r=0;
	long long la=1,ra=n;
	char lc=q[1].c,rc=q[n].c;
	l=q[la].a;
	r=q[ra].a;
	while(la<ra){
		lc=q[la].c;
		rc=q[ra].c;
		if(la==ra)break;
		if(lc!=rc)ans+=min(l,r);
		if(l>r){
			l=l-r;
			r=0;
			ls+=2*r;
		}
		else {
			r=r-l;
			l=0;
			ls+=2*l;
		}
		if(l==0){
		    la++;
			l=q[la].a;	
		}
		if(r==0){
			ra--;
			r=q[ra].a;
		}
	}
	cout<<ans;
	return 0;
}

