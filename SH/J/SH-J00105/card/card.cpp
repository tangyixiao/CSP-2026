#include<bits/stdc++.h>
using namespace std;
const int N=5e5+9;
const int M=3e5+9;
int n,m,len;
int a[N],cnt[M],b[N],pos[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		len=0;
		fill(pos,pos+m+1,-1);
		for(int j=i;j<=n;j++){
			if(pos[a[j]]==-1){
				b[++len]=a[j];
				pos[a[j]]=len;
			}
			else{
				len=pos[a[j]];
			}
		}
		for(int j=1;j<=len;j++){
			cnt[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	cout<<endl;
	return 0;
}
