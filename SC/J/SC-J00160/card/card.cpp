#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,p[500005],z[500005]={0},t[300005]={0},st[300005]={0},top=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>p[i];
		for(int j=1;j<=top;j++){
			if(st[j]==p[i]){
				for(int p=1;p<=top-j-1;){
					z[st[top]]--;
					top--;
				}
			}
		}
		st[++top]=p[i];
		z[p[i]++];
		for(int j=1;j<=m;j++){
			if(z[j]==1){
				t[j]++;
			}
		}
	}for(int i=1;i<=m;i++){
		cout<<t[i];
	}
	return 0;
}