#include<bits/stdc++.h>
using namespace std;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> a(n+1,0),to(m+1,0);
	queue<int> v[m+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	
		v[a[i]].push(i);
	}
	for(int i=1;i<=n;i++){
		 
		 int l=i;
		 if(l!=1)
		 v[a[l-1]].pop();
		 queue<int> ve[m+1]=v;
		 while(l<n+1){
		//== cout<<1<<endl;
		 ve[a[l]].pop();
		 if(ve[a[l]].size()>0){
		 	l=ve[a[l]].front();
		 }else{
		 	to[a[l]]++;
		 	l++;
		 	
		 }
	}
	}
	for(int i=1;i<=m;i++) cout<<to[i]<<" ";
	return 0;
}
