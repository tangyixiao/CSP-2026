#include<bits/stdc++.h>
using namespace std;
int n,m,a[300010],x[500010],b[300010];
bool f[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int cnt=1;
	for(int i=1;i<=n;i++) cin>>x[i];
	while(1){
		stack<int> s;
		int mn=INT_MAX;
		for(int i=cnt;i<=n;i++){
			if(f[x[i]]==0){
				s.push(x[i]);
				f[x[i]]=1;
			}else{
				while(1){
					if(s.top()==x[i]){
						s.pop();
						f[x[i]]=0;
						break;
					}
					s.pop();
				}
				s.push(x[i]);
			}
			for(int j=1;j<=m;j++) mn=min(a[j],mn);
			if(f[x[i]]==1) b[x[i]]=a[x[i]]=cnt;
			cnt++;
		}
		if(mn!=0) break;
	}
	for(int i=1;i<=m;i++) cout<<a[i]<<" ";
	return 0;
}