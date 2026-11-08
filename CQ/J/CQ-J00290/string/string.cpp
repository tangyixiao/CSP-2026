#include<bits/stdc++.h>
using namespace std;
struct abc{
	int a;
	char b;
};
abc k[200010];
long long n,m,i,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	m=n;i=1;
	for(int i=1;i<=n;i++) cin>>k[i].a>>k[i].b;
	while(i<m){
		if(k[i].a>k[m].a){
			if(k[i].b!=k[m].b) ans+=min(k[i].a,k[m].a);
			k[i].a-=k[m].a;
			k[m].a=0;
		}else{
			if(k[i].b!=k[m].b) ans+=min(k[i].a,k[m].a);
			k[m].a-=k[i].a;
			k[i].a=0;
		}
		if(k[m].a==0) m--;
		if(k[i].a==0) i++;
	}cout<<ans;
	return 0;
}
