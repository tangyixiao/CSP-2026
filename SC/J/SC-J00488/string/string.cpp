#include <bits/stdc++.h>
using namespace std;
long long a[200064],n,z1=1,z2,ans=0;
char b[200064];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	z2=n;
	while(z1<z2){
		if(a[z1]>a[z2]){
			if(b[z1]!=b[z2]){
				ans+=a[z2];
				a[z1]-=a[z2];
				z2--;
			}
			else{
				a[z1]-=a[z2];
				z2--;
			}
		}
		else{
			if(b[z1]!=b[z2]){
				ans+=a[z1];
				a[z2]-=a[z1];
				z1++;
			}
			else{
				a[z2]-=a[z1];
				z1++;
			}
		}
		if(a[z1]==0){
			z1++;
		}
		if(a[z2]==0){
			z2--;
		}
	}
	cout<<ans;
	return 0;
}
