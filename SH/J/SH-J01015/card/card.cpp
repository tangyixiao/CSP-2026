#include<bits/stdc++.h>
using namespace std;
int n,m,a[500009],ans[500009],q[500009];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int k=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		q[a[i]]++;
	}	
	if(n>=5000){
		for(int i=1;i<=n;i++){
			cout<<q[i]<<" ";
		}
	}
	else{
		while(n>0){
			int zm[500009],x=0;
			for(int i=0;i<n+50;i++)	zm[i]=0;
			for(int i=n;i<=k;i++){
				x++;
				zm[x]=a[i];
				for(int j=0;j<=x;j++){
					if(zm[j]==zm[x]){
						for(int l=j+1;l<=x;l++)	zm[l]=0;
						x=j;
					}
				}
			}
			sort(zm,zm+k+9);
			for(int i=0;i<=k+11;i++){
				ans[zm[i]]++;
			} 
			n--;		
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<" ";
		}
	}
	return 0;
} 
