#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
int m,n;
int a[1200000];
int rem[300010],ans[300010];		
int b[300010];

int main(){
freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
		a[i+n]=a[i];
	}
	for(int t=0;t<=m-1;t++){
		int rem[300010];
		memset(rem,0,sizeof(rem));
		for(int i=t+1;i<=n+t;i++){
			b[i]=a[i];
			
		}
		for(int i=t+1;i<=n+t;i++){
			if(rem[a[i]]!=0){
				for(int j=i-1;j>=rem[a[i]];j--){
					b[j]=0;
				}
			}
			rem[a[i]]=i;
		}
		for(int i=t+1;i<=n+t;i++) cout<<b[i]<<"* ";
		cout<<endl;
		for(int i=t+1;i<=n+t;i++){
			ans[b[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}