#include<bits/stdc++.h>
using namespace std;
long long n,m,a[50000],ans[50000],s[50000];
int main(){
freopen("card.in","r",stdin);
freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int k=1;
		for(int j=i;j<=n;j++){
			long long p=a[j],q=0;
			for(int x=1;x<=k;x++){
				if(a[x]==p){
					q=x;
					break;
				}
			}
			if(q==0){
				s[k]=q;
				k++;
			}
			else{
				long long h=k;
				for(int x=q+1;x<=h;x++){
					s[x]=0;
					k--;
				}
			}
		}
		for(int j=1;j<=k;j++){
			ans[s[j]]++;
		}
		for(int j=1;j<=k;j++){
			s[i]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
