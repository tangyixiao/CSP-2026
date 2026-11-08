#include<bits/stdc++.h>
using namespace std;
long long a,s,d[200005],h;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>a>>s;
	for(long long i=1;i<=a;i++){
		cin>>d[i];
	}
	while(a!=s-1){
		long long q=s,e=d[a],t=0,y;
		bool p[a];
		for(long long i=0;i<a;i++){
			p[i]=0;
		}
		while(q!=1){
			t=0;
			for(long long i=a-1;i>=1;i--){
				if(p[i]==1){
					continue;
				}
				if(t<e&d[i]){
					y=i;
				}
				t=max(t,e&d[i]);
			}
			p[y]=1;
			e=t;
			q--;
		}
		h=max(h,t);
		a--;
	}
	cout<<h;
	return 0;
}
