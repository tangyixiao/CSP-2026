#include <bits/stdc++.h>
using namespace std;
const int N=200005;
int n,m;
int a[N],b[N],cnt;
int pre[N],top; 
int q[N];
int use[N];
bool check2(){
	for(int i=1;i<=n;i++)
		if(a[i-1]>a[i])
			return false;
	return true;
}
void solve1(){
	for(int i=1;i<=n;i++){
		memset(pre,0,sizeof(pre));
		top=0;
		for(int j=i;j<=n;j++){
			if(pre[a[j]]!=0&&top>=pre[a[j]]&&q[pre[a[j]]]==a[j])
				top=pre[a[j]]-1;
			q[++top]=a[j];
			pre[a[j]]=top;
		}
		for(int j=1;j<=top;j++){
			use[q[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
		cout<<use[i]<<" ";
	return;
} 
void solve2(){
	for(int i=1;i<=n;i++)
		use[a[i]]++;
	for(int i=1;i<=m;i++){
		use[i]+=use[i-1];
		cout<<use[i]<<' ';
	}
	return;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(check2())
		solve2();
	else
		solve1();
	return 0;
} 
