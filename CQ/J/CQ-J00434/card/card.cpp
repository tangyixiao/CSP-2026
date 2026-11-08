#include<iostream>
#include<cstring>
using namespace std;
const int N=5e5+10,M=3e5+10;
int a[N],n,m;
int cnt[N];
int pos[N];
int st[N],top=0;
int main(){
	freopen("card.in","r",stdin);freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(pos,0,sizeof pos);
		memset(st,0,sizeof st);
		top=0;
		for(int j=i;j<=n;j++){
			if(pos[a[j]]){
				top=pos[a[j]]-1;
			}
			st[++top]=a[j];
			pos[a[j]]=top;
		}
		for(int j=1;j<=top;j++){
			cnt[st[j]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<' ';
} 
