#include<bits/stdc++.h>;
using namespace std;
long long n,a[200010];
char c[200010];
long long ans,l;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	//if(n%2!=0)c1=c[n/2+1];
	//else c1='0';
	for(int i=n/2;i>=1;i--){
		int j=n-i+1;
		if(i!=n/2)l+=a[i+1]+a[j-1];
		else if(n%2!=0)l+=a[n/2+1];
		//if(c[i]!=c1&&c[i]!=cn&&c[j]!=c1&&c[j]!=cn){
			if(a[i]==a[j]&&c[i]!=c[j])ans+=a[i];
			if(a[i]!=a[j]&&c[i]==c[j]&&j-i!=1)ans+=min(max(a[i],a[j])-min(a[i],a[j]),l);
			if(a[i]!=a[j]&&c[i]!=c[j]&&j-i!=1)ans+=min(max(a[i],a[j]),l+a[j]);
			if(a[i]!=a[j]&&c[i]!=c[j]&&j-i==1)ans+=min(a[i],a[j]);
		//}else{
			
		//}
		//if(a[i]>a[j])c1=c[i];
		//else if(a[i]<a[j])c1=c[j];
		//if(a[i]==a[j]&&c[i]==c[j])c1=c[i];
		//if(a[i]==a[j]&&c[i]!=c[j]){
			//c1=c[i];
			//cn=c[j];
		//}
	}
	cout<<ans;
	return 0;
} 
