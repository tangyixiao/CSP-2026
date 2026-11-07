#include <bits/stdc++.h>
using namespace std;
struct para{
	long long a;char c;
}p[200020];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,h=0,ans=0,l=0,r=0;cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>p[i].a>>p[i].c;
		h+=p[i].a;
	}
	r=h;
	for(long long i=1,j=n;i<=n&&j>=1;){
		if(i>j) break;
		if(p[i].c!=p[j].c){
			if(p[i].a>p[j].a){
				ans+=p[j].a;
				p[i].a-=p[j].a;
				j--;
			}
			else if(p[j].a>p[i].a){
				ans+=p[i].a;
				p[j].a-=p[i].a;
				i++;
			}
			else{
				ans+=p[i].a;
				i++;j--;
			}
		}
		else{
			if(p[i].a>p[j].a){
				p[i].a-=p[j].a;
				j--;
			}
			else if(p[j].a>p[i].a){
				p[j].a-=p[i].a;
				i++;
			}
			else{
				i++;j--;
			}
		}
	}
	cout<<ans;
	return 0;
}
