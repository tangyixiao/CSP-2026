#include<bits/stdc++.h>
using namespace std;
int n,m;
const int M=3e5+5;
const int N=5e5+5;
int a[N],front,rear,q[M],cnt[M],ans[N];
bool tot[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		tot[i]=true;
	for(int i=0;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(tot[a[j]]==true){
				rear++;
				q[rear]=a[j];
				tot[a[j]]=false;
				ans[a[j]]=j;
			}else{
				for(int k=ans[a[j]];k<=rear;k++)
					q[k]=0;
				rear=ans[a[j]];
				q[ans[a[j]]]=a[j];
			}
			for(int p=1;p<=m;p++)
				tot[p]=true;
			for(int k=1;k<=rear;k++)
				tot[q[k]]=false;
			for(int p=1;p<=m;p++)
				ans[p]=0;
			for(int k=1;k<=rear;k++)
				ans[q[k]]=k;
		}
//		for(int k=1;k<=rear;k++)
//			cout<<q[k]<<" ";
//		cout<<'\n'; 
		for(int k=1;k<=rear;k++)
			cnt[q[k]]++;
	}
	cout<<'\n';
	for(int i=1;i<=m;i++)
		cout<<cnt[i]<<" ";
	return 0;
}
