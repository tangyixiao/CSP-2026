#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e5+5,MAXM=3e5+5;
int stk[MAXN],top,used[MAXM],a[MAXN],turns[MAXM];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int j=1;j<=n;j++){
		top=0;
		for(int i=j;i<=n;i++){
			stk[++top]=a[i];
			if(!used[a[i]]) used[a[i]]=1;
			else{
				top--;
				while(1){
					if(stk[top]==a[i]) break;
					used[stk[top--]]=0;
				}
			}
		}
		for(int i=1;i<=m;i++){
			turns[i]+=used[i];
			used[i]=0;
		}
	}
	for(int i=1;i<=m;i++) cout<<turns[i]<<' ';
	return 0;
}