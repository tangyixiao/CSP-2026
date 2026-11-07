#include<bits/stdc++.h>
using namespace std;
int un[1000001];
bool sm[100001];
int ds[100001];
long long n,m;
stack<long long> a;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>un[i];
	for(int i=1;i<=n;i++){
		for(int o=1;o<=m;o++) sm[o]=false;
		for(int j=i;j<=n;j++) {
			if(sm[un[j]]==true) {
				while(a.top()!=un[j]) {
				 sm[a.top()]=false;
				 a.pop();
			    }
			}	
		    else a.push(un[j]);	
		    sm[un[j]]=true;
		}
		for(int j=1;j<=m;j++) if(sm[j]) ds[j]++;
		while(a.empty()) a.pop();
	}
	for(int i=1;i<=m;i++) cout<<ds[i]<<" ";
	return 0;
}
