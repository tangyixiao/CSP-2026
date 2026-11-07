#include<bits/stdc++.h>
using namespace std;
const int maxn=3e5+10;
const int maxm=5e5+10;
bool book[maxn];
int next[maxn];
int a[maxm],ans[maxm];
int n,m,top;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	ans[0]=0;
	top=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(book[a[i]]==0){
			book[a[i]]=1;
			next[a[i]]=++top;
			ans[i]=ans[i-1]+1;
		}else{
			top=next[a[i]];
			ans[i]=top;
			next[a[i]]=top;
		}
	}
	for(int i=1;i<=n;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}