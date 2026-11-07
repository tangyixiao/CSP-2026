#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
const int M=3e5+5;
int n,m;
int a[N];
int A=1;//a[i]>=a[i-1]
int vis[M];
int last[M];
set <int> s;
int cnt[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]){
			A=0;
		}
	}
	if(A==1){
		for(int i=1;i<=n;i++){
			vis[a[i]]=i;//记录最后一个 
		}
		for(int i=1;i<=m;i++){
			cout<<vis[i]<<" ";
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		memset(last,0,sizeof(last));
		for(int j=1;j<=m;j++){
			s.erase(j);
		}
		for(int j=i;j<=n;j++){
			if(last[a[j]]==0){
				s.insert(a[j]);
			}else{
				for(int k=last[a[j]]+1;k<j;k++){
					s.erase(a[k]);
					last[a[k]]=0;
				}
			}
			last[a[j]]=j;
			
		}
		for(int k=1;k<=m;k++){
			if(s.find(k)!=s.end()){
				cnt[k]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}