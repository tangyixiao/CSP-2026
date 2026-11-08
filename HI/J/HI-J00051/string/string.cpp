#include<bits/stdc++.h>
using namespace std;

int n;
struct node{
	int sz;
	char zm;
}a[200005];

long long ans;

int main(){
	 
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d%s",&a[i].sz,&a[i].zm);
	}
	int l=1,r=n;
	node lp,rp;
	lp.sz=a[l].sz;
	lp.zm=a[l].zm;
	rp.sz=a[r].sz;
	rp.zm=a[r].zm;
	while(l!=r){
		if(lp.zm==rp.zm){
			if(lp.sz>rp.sz){
				lp.sz-=rp.sz;
				r--;
				rp.sz=a[r].sz;
				rp.zm=a[r].zm;
			}else if(lp.sz<rp.sz){
				rp.sz-=lp.sz;
				l++;
				lp.sz=a[l].sz;
				lp.zm=a[l].zm;
			}else{
				if(l+1<r-1){
					r--;
					rp.sz=a[r].sz;
					rp.zm=a[r].zm;
					l++;
					lp.sz=a[l].sz;
					lp.zm=a[l].zm;
				}else{
					break;
				}
			}
		}else{
			if(lp.sz>rp.sz){
				ans+=rp.sz;
				lp.sz-=rp.sz;
				r--;
				rp.sz=a[r].sz;
				rp.zm=a[r].zm;
			}else if(lp.sz<rp.sz){
				ans+=lp.sz;
				rp.sz-=lp.sz;
				l++;
				lp.sz=a[l].sz;
				lp.zm=a[l].zm;
			}else{
				ans+=rp.sz;
				if(l+1<r-1){
					r--;
					rp.sz=a[r].sz;
					rp.zm=a[r].zm;
					l++;
					lp.sz=a[l].sz;
					lp.zm=a[l].zm;
				}else{
					break;
				}
			}
		}
	}
	printf("%lld",ans);
	return 0;
}
