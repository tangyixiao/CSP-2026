#include<bits/stdc++.h>
using namespace std;
long long mx=0,x;
int n,m,b[500009],ans[500009];
bool pd[500009];
stack<int>a;
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	a.push(0);
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			x=b[j];
			if(pd[x]){
				while(a.top()!=x){
					pd[a.top()]=0;
					a.pop();
				}
			}
			else{
			    a.push(x);
				pd[x]=1;
				mx=max(mx,x);
			} 
		}
		for(int j=1;j<=mx;j++){
			if(pd[j])ans[j]++;
		}
		while(a.top()!=0){
			pd[a.top()]=0;
			a.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}

