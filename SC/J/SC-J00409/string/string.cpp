#include<bits/stdc++.h>
using namespace std;
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
long long n,m=0,a[200005],ans=0;
string c[200005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n-1;i++){
		if(c[i]==c[n]){
			if(a[i]>a[n]){
				a[i]-=a[n];
				n--;
				i--;
			}else if(a[i]<=a[n])
			{
				a[n]-=a[i];
			}
			else if(a[i]>a[n]){
				a[i]-=a[n];
				n--;
				i--;
			}
		}else{
			if(a[i]>a[n]){
				ans+=a[n]; 
				a[i]-=a[n];
				n--;
				i--;
			}else{
				if(a[i]<a[n]){
					ans+=a[i]; 
					a[n]-=a[i];
				}else if(a[i]==a[n]){
					ans+=a[i]; 
					n--;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}