#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],lst[500005],ap[500005],ans[500005];
stack<int> s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;bool ty=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i>1&&a[i]<a[i-1]) ty=0;
	}
	if(ty){
		for(int i=n;i>=1;i--) lst[a[i]]=i;
		for(int i=1;i<=m;i++) cout<<lst[i]<<" ";
		return 0;
	}
	for(int t=1;t<=n;t++){
		for(int i=1;i<=m;i++) ap[i]=0;
		for(int i=t;i<=n;i++){
			if(ap[a[i]])
				while(!s.empty()){
					int now=s.top();s.pop();
					if(a[now]==a[i]) break;
					ap[a[now]]=0;
				}
			ap[a[i]]=i;
			s.push(i);
		}while(!s.empty()){
			ans[a[s.top()]]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
