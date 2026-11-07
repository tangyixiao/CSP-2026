#include<iostream>
using namespace std;
typedef long long ll;
const int N=5e5+10,M=3e5+10;
int n,m;
int a[N],cnt[M];
struct aox{
	char c;
	int id;
}vis[N];
void kp(int j){
	int x=a[j];
	if(j>m+1){
		for(int i=1;i<=m;i++){
			if(vis[i].c){
				cnt[i]++;
				vis[i].c=0;
			}
		}
		return;
	}
	if(vis[x].c){
		for(int i=vis[x].id;i<j;i++){
			vis[a[i]].c=0;
		}
	}
	vis[a[j]].c=1;
	vis[a[j]].id=j;
	kp(j+1);
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		kp(i);
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}