#include<bits/stdc++.h>
using namespace std;
struct node{
	long long x;
	char y;
};
node a[300005];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i].x);
		cin>>a[i].y;
	}
	int l=n;
	for(int i=1;i<=n;i++){
		if(a[i].x==0 || i>l){
			continue;
		}
		if(a[i].x<a[l].x){
			if(a[i].y==a[l].y){
				a[l].x-=a[i].x;	
			}else{
				ans+=a[i].x;
				a[l].x-=a[i].x;
			}
		}else{
			while(a[i].x!=0 && l>i){
				if(l==i){
					break;
				}
				if(a[i].x>=a[l].x){
				
					if(a[i].y==a[l].y){
						a[i].x-=a[l].x;
						a[l].x=0;
					}else{
						ans+=a[l].x;
						a[i].x-=a[l].x;
						
					}
					l--;
				}else{
					if(a[i].y==a[l].y){
						a[l].x-=a[i].x;	
						a[i].x=0;
					}else{
						ans+=a[i].x;
						a[l].x-=a[i].x;
						a[i].x=0;
					}
				}	
				
			}
		}
		if(a[l].x==0){
			l--;
		} 
	}
	cout<<ans;
	return 0;
}
