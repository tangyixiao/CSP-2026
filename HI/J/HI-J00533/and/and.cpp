#include<bits/stdc++.h>
using namespace std;
struct st{
	int id;
	int sum;
};
int  a[200005];
int t[200005];
int h;
int n,m;
int maxx=0;
int ji=0;
void dfs(int x){
		h=a[t[1]];	
		for(int i=2;i<=m;i++){
			h=h&a[t[i]];
		}
		maxx=max(maxx,h);
		
	    if(t[m]==n){
		for(int i=m;i>=3;i--){
		if(t[i]==n){
			t[i-1]++;
			t[i]=t[i-1]+1;
		}
		else {
			break;
		}
	}
		for(int i=3;i<=m;i++){
	    t[i]=t[i-1]+1;
		}
	}
	else {
		t[m]++;
	}
	if(t[m]>n){
     	return;	
	}
}
int main(){
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);	

cin>>n>>m;
for(int i=1;i<=n;i++){
	cin>>a[i];
}
for(int i=1;i<=n;i++){
	t[1]=i;
	for(int j=2;j<=m;j++){
		t[j]=t[i]+1;
	}
	ji=m;
	dfs(i);
}

cout<<maxx;
	return 0;
}
