#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[500005];
char c[500005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	int ans=0;
	for(int i=0,j=n-1;i<j;){
		if(c[i]==c[j]){
			if(a[i]<a[j]){
				a[j]-=a[i];
				i++;
			}
			else if(a[i]>a[j]){
				a[i]-=a[j];
				j--;
			}
			else{
				i++;
				j--;
			}
		}
		else{
			if(a[i]<a[j]){
				ans+=a[i];
				a[j]-=a[i];
				i++;
			}
			else if(a[i]>a[j]){
				ans+=a[j];
				a[i]-=a[j];
				j--;
			}
			else{
				ans+=a[i];
				i++;
				j--;
			}
		}
	}
	cout<<ans;
	return 0;
} 
