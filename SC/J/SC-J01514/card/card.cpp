#include<bits/stdc++.h>
using namespace std;
int n,m,ans[500005],b[500005],a[500005];
stack<int>p;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			b[j]=0;
		}
		for(int j=i;j<=n;j++){
			b[a[j]]++;
			if(b[a[j]]==2){
				for(int e=1;e<p.size();e++){
					int x=p.top();
					if(x==a[j]){
						break;
					}	
					p.pop();
					
				}
				if(p.top()==a[j]){
					p.pop();
				}
				b[a[j]]--;
			}
			p.push(a[j]);
		}
		while(p.size()){
			ans[p.top()]++;
			p.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}


	return 0;
}

