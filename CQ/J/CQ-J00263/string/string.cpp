#include<bits/stdc++.h>
using namespace std;
int n;
long long st=1, nd, ans;
struct Node{
	long long s;
	char a;
}m[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>m[i].s>>m[i].a;
	nd=n;
	while(st<=nd){
		if(st==nd)break;
		else if(m[st].s==m[nd].s){
			if(m[st].a!=m[nd].a)ans+=m[st].s;
			st++;
			nd--;
		}
		else if(m[st].s!=m[nd].s){
			if(m[st].s>m[nd].s){
				if(m[st].a!=m[nd].a)ans+=m[nd].s;
			    m[st].s-=m[nd].s;
			    nd--;
		    }
		    else{
		    	if(m[st].a!=m[nd].a)ans+=m[st].s;
			    m[nd].s-=m[st].s;
			    st++;
			}
		}
	}
	cout<<ans;
	return 0;
}
