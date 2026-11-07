#include<bits/stdc++.h>
using namespace std;
long long n,x[200010],ans=0;
char y[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i]>>y[i];
	}
	long long l=1,r=n;
	while(l<r){
		if(x[l]==x[r]){
			if(y[l]==y[r]){
				l++;
				r--;
			}else{
				ans+=x[l];
				l++;
				r--;
			}
		}else if(x[l]>x[r]){
			if(y[l]==y[r]){
				x[l]-=x[r];
				r--;
			}else{
				ans+=x[r];
				x[l]-=x[r];
				r--;
			}
		}else{
			if(y[l]==y[r]){
				x[r]-=x[l];
				l++;
			}else{
				ans+=x[l];
				x[r]-=x[l];
				l++;
			}
		} 
	}
	cout<<ans;
	return 0;
} 
