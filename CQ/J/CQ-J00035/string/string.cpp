#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a[200000];
	char c[200000];
	long long n,b=1,ans=0;
	cin>>n>>a[0]>>c[0];
	for(int i=1;i<n;i++){
		cin>>a[i]>>c[i];
		if(c[i]!=c[i-1]){
			b=0;
		}
	}
	if(b){
		cout<<0;
		return 0;
	}
	int i=0,j=n-1;
	while(i<j){
		if(c[i]!=c[j]){
			ans+=max(a[i],a[j]);
		}else{
			ans+=abs(a[i]-a[j]);
		}
		if(a[j]<a[i]){
			a[j-1]-=abs(a[i]-a[j]);
		}else{
			a[i+1]-=abs(a[i]-a[j]);
		}
		i++;
		j--;
	}
	cout<<ans;
	return 0;
}

