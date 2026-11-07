#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a[500005]={};
	int n,m,max=0,maxi=0,x=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		int sum=0;
		int q=a[i];
		while(x<=n){
			max=1;
			maxi=1;
			for(int i=x;i<=n;i++){
				for(int j=x;j<=i;j++){
					if(a[i]==a[j] && i-j>max) {
						max=i-j;
						maxi=i;
					}
				}
			}
			if(max==1 && maxi==1){
				for(int i=x;i<=n;i++){
					if(q==a[i]) sum++;
				}
			}
			else{
				for(int i=maxi;i<=n;i++){
					if(q==a[i]) sum++;
				}
			}
			x++;
		}	
		cout<<sum<<endl;
	}
		
	return 0;
}
