#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
struct Node{
	int u;
	bool isdone;
};
vector<Node> a;
int t[N],ans[N];
int n,m;
int solve(int k){
	for(int i=0;i<a.size();i++) a[i].isdone = 0;
	for(int i=k;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(t[j]==a[i].u){
				for(int c=j;c<=n;c++) {
					t[c]=0;
					a[i].isdone = 0;
				}
				t[j] = a[i].u;
				break;
			}
		}
		t[i-k+1] = a[i].u;
	}
	for(int i=1;i<=n;i++){
		if(t[i]==k) ans[k]++;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int u;
		cin>>u;
		a.push_back({u,false});
	}
	
	for(int i=1;i<=m;i++){
		solve(i);
	} 
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	} 
	return 0;
} 
