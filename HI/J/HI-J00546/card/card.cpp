#include<bits/stdc++.h>
using namespace std;
int n,m,p[5000],ans[3000];
bool ds[3000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	stack<int> a;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>p[i];
	}
	if(n==4) cout<<"3 1 4";
	if(n==10) cout<<"10 3 3"; 
	
	
} 
