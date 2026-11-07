#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
long long a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,l=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(c[i]==c[i-1]){
			a[i-1]=a[i-1]+a[i];
			i--;
			n--;
		}
	}
	long long ans=0;
	int j=n;
	for(int i=1;i<n/2*2;i++){
		if(c[i]!=c[j]){
			if(a[i]>a[j]) {
				a[i]-=a[j];
				ans+=a[j];
				a[j]=0;
				i--;	
			}else if(a[i]<a[j]){
				a[j]-=a[i];
				ans+=a[i];
				a[i]=0;
				j--;	
			}else{
				ans+=a[i];
			}
			j++;
		}else{
			if(a[i]>a[j]) {
				a[i]-=a[j];
				ans+=a[j];
				a[j]=0;	
			}else if(a[i]<a[j]){
				a[j]-=a[i];
				ans+=a[i];
				a[i]=0;	
			}
			j++;
		}
	}
	cout<<ans;
    return 0;
}

