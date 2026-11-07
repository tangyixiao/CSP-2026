#include<bits/stdc++.h>
using namespace std;
long long a[200010],a2[200010];
char c[200010],c2[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		a2[n-i+1]=a[i];
		c2[n-i+1]=c[i];
	}
	long long ans=0;
	for(int i=1,j=1;i<=n; ){
		if(c[i]!=c2[j]){
			ans+=min(a[i],a2[j]);
			if(a[i]<a2[j]){
				a2[j]-=a[i];
				i++;
			}
			else{
				a[i]-=a2[j];
				j++; 
			}
		}
		else{
			if(a[i]<a2[j]){
				a2[j]-=a[i];
				i++;
			}
			else{
				a[i]-=a2[j];
				j++; 
			}
		}
	}
	cout<<ans/2;
	return 0;
} 
