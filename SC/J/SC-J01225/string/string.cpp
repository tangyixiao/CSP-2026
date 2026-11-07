#include<bits/stdc++.h>
using namespace std;
long long a[200010];
char c[200010];
long long s[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(long long i=1;i<=n;i++){
		long long x;
		cin>>x;
		char y;
		cin>>y;
		if(y==c[i-1]){
			i--;n--;
			a[i]+=x; 
		}else{
			a[i]=x;
			c[i]=y;
		}
		s[i]=s[i-1]+a[i];
	}
	long long ans=0;
	for(int i=1,j=n;i<j;){
		if(a[i]<a[j]){
			if(c[i]!=c[j]){
				ans+=a[i];
				a[j]-=a[i];
				i++;
			}else{
				a[j]-=a[i];
				i++;
			}
		}else
		if(a[i]>a[j]){
			if(c[i]!=c[j]){
				ans+=a[j];
				a[i]-=a[j];
				j--;
			}else{
				a[i]-=a[j];
				j--;
			}
		}else{
			if(c[i]!=c[j]){
				ans+=a[i];
				i++;
				j--;
			}else{
				i++;
				j--;
			}	
		}
	}
	cout<<ans;
	return 0;
}
