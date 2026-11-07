#include <bits/stdc++.h>
using namespace std;
#define ll long long
queue<ll>A;
stack<ll>B;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ll n,a,m;
	cin>>n>>m;
	ll e[m+1],C[n+1];
	for(int i = 1;i<=m;i++){
		e[i] = 0;
	}
	for(int i = 1;i<=n;i++){
		cin>>a;
		C[i]=a;
	}
	int BL[n+1];
	for(int k = 1;k<=n;k++){
		for(int i = k;i<=n;i++){
			A.push(C[i]);
		}
		for(int i = 1;i<n+1;i++){
			BL[i]=0;
		}
		while(!A.empty()){
			ll w =A.front();
			BL[w]+=1;
			A.pop();
			if(BL[w]>1){
				while(B.top()!=w){
					B.pop();
				}
				BL[w] = 1;
			}
			else{
				B.push(w);
			}
		}
		while(!B.empty()){
			for(int i = 1;i<=n;i++){
				if(B.top()==i){
					e[i]++;
					break;
				}
			}
			B.pop();
		}
	}
	for(int i = 1;i<=m;i++){
		cout<<e[i]<<" ";
	}
	return 0;
} 
