#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m,sum=0;;
	int a[n];
	for(int i=0;i<=n-1;i++){
		cin>>a[i];
	}
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=i-1;j++){
			for(int x=0;x<=n-1;x++){
				int l=0,r=n;
				mid=(l+r)/2;
				for(int y=0;y<=n-1;y++){
					if(m==i){
						mid-l;
					}
					if(m==n){
						sum++;
					}
				}
			}
		{
		r--;		
	}
	return 0;
}
