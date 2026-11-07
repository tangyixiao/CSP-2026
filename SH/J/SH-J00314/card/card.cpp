#include<bits/stdc++.h>
using namespace std;
//define ll long long
const int N=5e5+7;
int a[N],d[N],ans[N],n,m;

void f(int x){
	while(x<=n){
		ans[a[x]]+=1;
		x=d[a[x]]+1;
	}
}

int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		d[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		f(i);
}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";	
	

	return 0;
}
                 

