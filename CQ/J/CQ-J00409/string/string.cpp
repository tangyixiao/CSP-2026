#include<bits/stdc++.h>
using namespace std;
long long n,a[200020],l,ans;
char c[200020];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
	}
	long long i=1,j=n;
	while(i<j){
		if(c[i]!=c[j]){
			ans+=min(a[i],a[j]);
		}
		if(a[i]>a[j]){
			a[i]-=a[j];
			a[j]=0;
			j--;
		}else if(a[i]<a[j]){
			a[j]-=a[i];
			a[i]=0;
			i++;
		}else{
			a[i]=a[j]=0;
			i++;j--;
		}
	}cout<<ans;
	return 0;
}
