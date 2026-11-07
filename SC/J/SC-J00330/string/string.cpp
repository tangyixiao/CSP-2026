#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a[200001];
	char c[200001];
	long long ans=0;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	int l=1,r=n;
	while(l<r){
		if(a[l]!=a[r]){
			if(c[l]!=c[r]){
				if(a[l]<=a[r]){
					ans+=a[l];
					a[r]-=a[l];
					l++;
				}
				else{
					ans+=a[r];
					a[l]-=a[r];
					r--;
				}
			}
			else{
				if(a[l]<=a[r]){
					a[r]-=a[l];
					l++;
				}
				else{
					a[l]-=a[r];
					r--;
				}
			}
		}
		else{
			if(c[l]!=c[r]){
				ans+=a[l];
				l++;
				r--;
			}
			else{
				l++;
				r--;
			}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}