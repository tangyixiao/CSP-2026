#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn=5e5+10,maxm=3e5+10;
int c[maxn],cnt[maxm];
bool in[maxm];
int n,m;
stack<int> s;
void Sol(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i) scanf("%d",&c[i]);
	for(int i=1;i<=n;++i){
		for(int j=i;j<=n;++j){
			if(in[c[j]]==1){
				bool f=0;
				while(!s.empty()&&!f){
					int x=s.top();
					in[x]=0;
					if(x==c[j]) f=1;
					s.pop();
				}
				s.push(c[j]);
				in[c[j]]=1;
			}
			else{
				s.push(c[j]);
				in[c[j]]=1;
			}
		}
		while(!s.empty()){
			int x=s.top();
			cnt[x]++;
			in[x]=0;
			s.pop();
		}
	}
	for(int i=1;i<=m;++i) printf("%d ",cnt[i]);
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out ","w",stdout);
	Sol();
	return 0;
}