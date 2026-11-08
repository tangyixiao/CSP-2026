#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],b,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=29;i>=0;i--){
		b=0;
		for(int j=1;j<=n;j++){
			if(a[j]&(1<<i)){
				b++;
			}
		}
		if(b>=m){
			ans+=1<<i;
			for(int j=1;j<=n;j++){
				if((a[j]&(1<<i))==0){
					a[j]=0;
				}
			}
		}
	}
	cout<<ans;
	return 0;
} 
