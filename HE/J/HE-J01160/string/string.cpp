#include<bits/stdc++.h>
using namespace std;
const int N=3e5+7;
long long a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,i,j,ans=0;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	i=1;j=n;
	while(i<j){
		if(c[i]!=c[j]){
			ans+=min(a[i],a[j]);
		}
		if(a[i]<a[j]){
			a[j]-=a[i];
			i++;
		}
		else if(a[i]>a[j]){
			a[i]-=a[j];
			j--;
		}
		else{
			i++,j--;
		}
	}
	cout<<ans;
	return 0;
}

