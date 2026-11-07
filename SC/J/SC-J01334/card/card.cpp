#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[500005],ans[300005],bj[300005],x;
inline int read(){
	int x=0,f=1;
	char ch=getchar();
	while(ch<'0' || ch>'9'){
		if(ch=='-'){
			f=-1;
		}
		ch=getchar();
	}
	while(ch>='0' && ch<='9'){
		x=x*10+ch-'0';
		ch=getchar();
	}
	return x*f;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read();
	m=read();
	for(int i=1;i<=n;i++) a[i]=read();
	for(int i=1;i<=n;i++){
		stack<int> p;
		memset(bj,0,sizeof(bj));
		for(int j=i;j<=n;j++){
			if(!bj[a[j]]){
				bj[a[j]]++;
				p.push(a[j]);
			}else{
				while(p.top()!=a[j]){
					x=p.top();
					bj[x]--;
					p.pop();
				}
			}
		}
		while(!p.empty()){
			x=p.top();
			ans[x]++;
			p.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}