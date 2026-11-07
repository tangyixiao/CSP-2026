#include<bits/stdc++.h>
using namespace std;
using ll=long long;
struct qj{
	ll l;
	char c;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,k=0;ll ans=0,t;char c1;
	scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%lld %c",&t,&c1);
			if(k>0&&a[k-1].c==c1)a[k-1].l+=t;
			else a[k++]={t,c1};
		}if(k==1)printf("0\n");
		else{
			for(int i=0;i<=((k-1)>>1);i++){
				ll m=k-i-1;
				if(a[i].l==a[m].l&&a[i].c!=a[m].c){
					ans+=a[i].l;
					a[i].c=a[m].c;
				}else if(a[i].l>a[m].l){
					a[i+1].l+=a[i].l-a[m].l;
					if(a[i].c==a[m].c)ans+=a[i].l-a[m].l;
					else{
						ans+=a[i].l;
						a[m].c=a[i].c;
					}a[i].l=a[m].l;
				}else if(a[i].l<a[m].l){
					a[m-1].l+=a[m].l-a[i].l;
					if(a[i].c==a[m].c)ans+=a[m].l-a[i].l;
					else{
						ans+=a[m].l;
						a[i].c=a[m].c;
					}a[m].l=a[i].l;
				}
			}printf("%lld\n",ans);
		}
	return 0;
}
