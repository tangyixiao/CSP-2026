#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],vis[M],len,ans[M],num_list;
string s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	s+=' ';
	char c;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		num_list=max(a[i],num_list);
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			c=a[j]+'0';
		    if(vis[a[j]]!=0){
		    	for(int k=a[j];k<=len;k++) vis[s[k]-'0']=0;
		    	s.erase(vis[a[j]],s.size()-1);
			}
		    s+=c;
			len=s.size()-1;
		    vis[a[j]]=len;
		}
		for(int j=1;j<=len;j++) ans[s[j]-'0']++;
		s=' ';
		memset(vis,0,sizeof vis);
	}
	for(int i=1;i<=num_list;i++) printf("%d ",ans[i]);
	return 0;
}
