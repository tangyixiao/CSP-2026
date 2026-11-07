#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,a[N],ans[N],flag[N],p,cnt[N];
int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(m==1){
		cout<<n;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++)
			if(a[i]==a[n])
				cnt[a[n]]++;
			else{
				cnt[a[n]]++;
				cnt[a[i]]++;
			}
		cout<<cnt[1]<<" "<<cnt[2];
		return 0;
	}
	if(n<=500){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++)
				flag[j]=0;
			p=1;
			for(int j=i;j<=n;j++){
				if(flag[a[j]]!=0&&flag[a[j]]<p){
					p=flag[a[j]];
				}
				else{
					flag[a[j]]=p;
				}
				ans[p]=a[j];
				p++;
			}
			for(int j=1;j<=p-1;j++)
				cnt[ans[j]]++;
//			for(int j=1;j<=p-1;j++)
//				cout<<ans[j]<<" ";
//			cout<<endl; 
		}
		for(int i=1;i<=m;i++)
		cout<<cnt[i]<<" ";
	}
	if(n>500){
		for(int i=1;i<=n;i++){
			if(a[i+1]!=a[i])
			flag[a[i]]=i;
		}
		for(int i=1;i<=m;i++)
		cout<<flag[i]<<" ";
	}
	return 0;
} 



