#include<iostream>
#include<algorithm>
using namespace std;
int n,m;
int a[200010],p[200010];
int ans[200010];
void check(){
	
}
int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int k=1;k<=m;k++){
			p[k]=1e9;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i!=1) p[a[i]]=min(p[a[i]],i-1);
		else p[a[i]]=0;
	}
	for(int i=1;i<=n;i++){
		int j=n;
		while(j>=i){
			ans[a[j]]++;
			j=p[a[j]];
		}
		
		p[a[i]]=1e9;
		a[i]=0;
		for(int k=i+1;k<=n;k++){
			p[a[k]]=min(p[a[k]],i-1);
		}
		
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	fclose(stdin);fclose(stdout);
}
