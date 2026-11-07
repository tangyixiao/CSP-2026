#include<bits/stdc++.h>
using namespace std;
string s;int n,l;long long ans,a[200005];char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];		
	}int i=1,j=n;
	for(;i<j;){
		if(a[i]==a[j]&&c[i]==c[j])i++,j--;
		else if(a[i]!=a[j]&&c[i]==c[j]){//c==  len!=
			if(a[i]>a[j])a[i]-=a[j],j--;
			else if(a[i]<a[j]){a[j]-=a[i],i++;}
		}else if(a[i]==a[j]&&c[i]!=c[j]){//len== c!=
			ans+=a[i];i++;j--;			
		}else if(a[i]!=a[j]&&c[i]!=c[j]){
			if(a[i]>a[j]){
				a[i]-=a[j];ans+=a[j],j--;
			}else{
				a[j]-=a[i];ans+=a[i],i++;
			}
		}
		
	}
	
//	cerr<<i<<j;
	cout<<ans;
}
