#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200050],b[200050];
long long sum,ma=-1,mm=1000000000;
void dfs(int x,int id){
	if(id==m+1){
	
			sum=b[1];
			for(int j=1;j<=m;j++){
			sum&=b[j];
			}
			
			ma=max(ma,sum);
			return;
		}
	for(int i=x;i+m-id<=n;i++){
		b[id]=a[i];
		dfs(i+1,id+1);
	
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
      cin>>n>>m;
      for(int i=1;i<=n;i++) cin>>a[i],mm=min(mm,a[i]);
      if(n>=50000) {
      	cout<<mm<<endl;return 0;
	  }
	  dfs(1,1);
	  cout<<ma<<endl;
	  return 0;
}
