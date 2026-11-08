#include<bits/stdc++.h>
using namespace std;
int m,n,maxx;
int a[200001];
void ddfs(int q,int p,int res){
	int ress = res;
	if(p == m){
		maxx = max(maxx,res);
		
		return;
	}
	for(int i = q;i<n;i++){
		if(ress == -1){
			ress = a[i];
			
		}
		ress = ress&a[i];
		ddfs(q+1,p+1,ress&a[i]);
		ress = res;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	ddfs(0,0,-1);
	cout<<maxx;
	return 0;
}

