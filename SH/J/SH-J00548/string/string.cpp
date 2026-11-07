#include<bits/stdc++.h>
using namespace std;
struct node{
	int a;
	char c;
}g[200005],b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>g[i].a>>g[i].c;
		b[n-i+1].a=g[i].a,b[n-i+1].c=g[i].c;
	}
	long long ans=0;
	int cur1=1,cur2=1;
	while(cur1+cur2<=n){
		if(g[cur1].c!=b[cur2].c){
			if(g[cur1].a>=b[cur2].a){
				g[cur1].a-=b[cur2].a;
				ans+=b[cur2].a;
				cur2++;
			}else{
				b[cur2].a-=g[cur1].a;
				ans+=g[cur1].a;
				cur1++;
			}
		}else{
			if(g[cur1].a>=b[cur2].a){
				g[cur1].a-=b[cur2].a;
				cur2++;
			}else{
				b[cur2].a-=g[cur1].a;
				cur1++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
