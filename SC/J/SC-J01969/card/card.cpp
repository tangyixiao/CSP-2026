#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=5e5+5; 
int n,m,a[N];
int len[N],bak[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=n;j>=1;j--){
			if(a[i]==a[j]){
				len[i]=j-i;
				break;
			}
		}
	}
	for(int i=1;i<=n;i++){
		int cnt=1,ans[N]={};
		for(int j=i;j<=n;j++){
			if(len[j]==0) ans[cnt++]=a[j];
			else j+=len[j]-1;
		}
		for(int j=1;j<=cnt;j++){
			bak[ans[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<bak[i]<<" ";
	}
	return 0;
}