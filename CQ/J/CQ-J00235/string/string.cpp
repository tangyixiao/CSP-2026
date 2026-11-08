#include<bits/stdc++.h>
using namespace std;
long long n,a[200010];
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}long long l=1,r=n,x=0,y=0,ans=0;
	for(int i=1;l<r;i++){
		if(x==0&&y==0){
			if(c[l]==c[r]){
				if(a[l]==a[r]){
					l++;r--;continue;
				}else{
					if(a[l]>a[r]){
						x=a[l]-a[r];r--;continue;
					}else{
						y=a[r]-a[l];l++;continue;
					}
				}
			}else{
				if(a[l]==a[r]){
					ans+=a[l];l++;r--;continue;
				}else{
					if(a[l]>a[r]){
						ans+=a[r];x=a[l]-a[r];r--;continue;
					}else{
						ans+=a[l];y=a[r]-a[l];l++;continue;
					}
				}
			}
		}else{
			if(c[l]==c[r]){
				if(x!=0){
					if(x>a[r]){
						x-=a[r];r--;continue;
					}else if(x<a[r]){
						y=a[r]-x;l++;x=0;continue;
					}else{
						l++;r--;x=0;continue;
					}				
				}if(y!=0){
					if(y>a[l]){
						y-=a[l];l++;continue;
					}else if(x<a[r]){
						x=y-a[l];y=0;r--;continue;
					}else{
						l++;r--;y=0;continue;
					}				
				}			
			}else{
				if(x!=0){
					if(x>a[r]){
						ans+=a[r];x-=a[r];r--;continue;
					}else if(x<a[r]){
						ans+=x;y=a[r]-x;l++;x=0;continue;
					}else{
						l++;r--;x=0;continue;
					}				
				}if(y!=0){
					if(y>a[l]){
						ans+=a[l];y-=a[l];l++;continue;
					}else if(y<a[l]){
						ans+=y;x=a[l]-y;y=0;r--;continue;
					}else{
						l++;r--;y=0;continue;
					}				
				}			
			}
		}
	}cout<<ans<<endl;
	return 0;
} 
