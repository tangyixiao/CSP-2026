#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500000],b[500000],l[500000],ans,as,d,t;
void dfs(long long x){
	int u=0;
	for(int i=1;i<=t;i++){
		if(b[i]==x){
			t=i;
			b[t]=x;
			u=1;
			break;
		}
	}
	if(u==0){
		t++;
		b[t]=x;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
for(int i=1;i<=n;i++)cin>>a[i],b[i]=a[i];
t=n;
for(int i=1;i<=n;i++){
	if(i!=1)
	t=0;
	for(int j=i;j<=n;j++){
		dfs(a[j]);
    }
    for(int p=1;p<=m;p++){
	for(int k=1;k<=t;k++){
    	if(b[k]==p){
    	l[p]++;
		break;	
		}
	}
	}
    
	for(int j=1;j<=n;j++)b[j]=a[j];
}
for(int i=1;i<=m;i++){
	cout<<l[i]<<" ";
}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
