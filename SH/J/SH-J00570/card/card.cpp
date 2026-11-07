#include<bits/stdc++.h>
using namespace std;
int n,m,a[5000005],q[5000005],top,pos[5000005],cnt[5000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		top=0;
		for(int j=1;j<=m;j++)pos[j]=0;
		for(int j=i;j<=n;j++){
			if(pos[a[j]]){
				for(int k=pos[a[j]]+1;k<=top;k++)pos[q[k]]=0;
				top=pos[a[j]];
			}
			else{
				
			q[++top]=a[j];
			pos[a[j]]=top;
			}
//			for(int k=1;k<=top;k++)cout<<q[k]<<" ";
//			cout<<endl;
//			for(int k=1;k<=m;k++)cout<<pos[k]<<" ";
//			cout<<endl;
//			cout<<endl;
		}
		for(int j=1;j<=top;j++)cnt[q[j]]++;
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<" ";
}
