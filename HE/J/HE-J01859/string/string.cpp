#include<bits/stdc++.h>
using namespace std;
long long a[200001];
char x[200001];
int l,r;
long long ans=0;
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	l=1;
	r=n;
	for(int i=1;i<=n;i++){
    	cin>>a[i]>>x[i];
	}
	while(l<r){
		if(a[l]==a[r]){
			if(x[l]==x[r]){
				l++;
				r--;
			}
			else{
				ans+=a[l];
				l++;
				r--;
			}
		}
		else{
			if(x[l]==x[r]){
				if(a[l]>a[r]){
					a[l]-=a[r];
					r--;
				}
				else{
					a[r]-=a[l];
					l++;
				}
			}
			else{
				ans+=min(a[l],a[r]);
				if(a[l]>a[r]){
					a[l]-=a[r];
					r--;
				}
				else{
					a[r]-=a[l];
					l++;
				}
			}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
