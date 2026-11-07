#include<bits/stdc++.h>
using namespace std;
int n;
int a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long ans=0;
	int i=1,j=n;
	while(i<j){
		if(c[i]!=c[j]){
			ans+=min(a[i],a[j]);
		}
		if(a[i]>a[j]){
			a[i]-=a[j];
			j--;
		}else if(a[i]<a[j]){
			a[j]-=a[i];
			i++;
		}else{
			i++;j--;
		}
	}
	cout<<ans;
	return 0;
} 
