#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;
int a[500010];
int st[500010],top=0;
int ans[300010],used[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		top=0;
		for(int j=i;j<=n;j++){
			if(used[a[j]]==0){
				used[a[j]]=1;
			}else{
				for(;;){
					if(st[top]==a[j]){
						top--;
						break;
					}else{
						top--;
					}
				}
			}
			st[++top]=a[j];
		}
		for(int j=1;j<=top;j++){
			ans[st[j]]++;
		}
		for(int j=1;j<=m;j++){
			used[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 