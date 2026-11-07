#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],b[200010],ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	for(int i=1;i<=n;i++){
		long long m;
		char x;
		cin>>m>>x;
		a[i]=m;
		b[i]=x;
	}
	for(int i=1;i<=n;i++){
		if(a[i&&i>1]!=0)i--;
		if(a[n-i+1]==0)n--;
		if(b[i]!=b[n-i+1]){
			if(a[i]>a[n-i+1]){
				a[i]-=a[n-i+1];
				ans+=a[n-i+1];
				a[n-i+1]=0;
			}else if(a[i]<a[n-i+1]){
				a[n-i+1]-=a[i];
				ans+=a[i];
				a[i]=0;
			}else{
				a[i]=a[n-i+1]=0;
				ans+=a[i];
			}
		}else {
			if(a[i]>a[n-i+1]){
				a[i]-=a[n-i+1];
				a[n-i+1]=0;
			}else if(a[i]<a[n-i+1]){
				a[n-i+1]-=a[i];
				a[i]=0;
			}else{
				a[i]=a[n-i+1]=0;
				ans+=a[i];
			}
		}
	}
	cout<<ans;
	return 0;
}

