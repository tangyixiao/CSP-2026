#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=1e5+1;
int a[5*N],e[3*N];
deque<int> p;
bool find(int i){
	for(int y:p){
		if(y==i)
		return 1;
	}
	return 0;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(n==m)
			e[a[i]]=i;
	}
	if(n==m){
		for(int i=1;i<=m;i++){
			cout<<e[i];
		}
		return 0;
	}
	if(m==1){
		cout<<m;
		return 0;
	}
	for(int i=n;i>=1;i--){
		if(!e[a[i]]){
			e[a[i]]=i;
		}
	}
	for(int i=1;i<=n;i++){
		if(find(a[i])){
			for(int y:p){
				p.pop_front();
				if(y==a[i]){
					break;
				}
				if(e[y]<i)
					e[y]--;
			}
		}
		p.push_front(a[i]);
	}
	for(int i=1;i<=m;i++){
		cout<<e[i]<<" ";
	}
	return 0;
} 
