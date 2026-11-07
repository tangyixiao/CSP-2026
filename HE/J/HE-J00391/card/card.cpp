#include<bits/stdc++.h>
using namespace std;
const long long maxn=5e5+10;
int n,m;
long long a[maxn],b[maxn],ans[maxn];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++) b[i]=0;
		for(int i=k;i<=n;i++){
			bool flag=true;
			int cnt;
			for(int j=1;j<i;j++){
				if(a[i]==b[j]){
					flag=false;
					cnt=j;
					break;
				}
			}
			if(!flag){
				for(int j=cnt;j<=n;j++) b[j]=0;
				b[cnt]=a[i];
				continue;
			}
			b[i]=a[i];
		}
		for(int i=1;i<=n;i++){
			ans[b[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 
