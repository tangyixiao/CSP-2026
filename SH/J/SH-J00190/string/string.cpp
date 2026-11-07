#include<bits/stdc++.h>
using namespace std;
int n,a[200010];
long long len,ans,h;
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		h+=a[i];
	}
	if(h%2==1){
		long long h2=0;
		for(int i=1;i<=n;i++){
			h2+=a[i];
			if(h2>=h/2+1){
				a[i]--;
				break;
			}
		}
	}
	int j=n;
	for(int i=1;i<=j;){
		if(c[i]!=c[j]){
			if(a[i]<a[j]){
				ans+=a[i];
				a[j]-=a[i];
				i++;
			}else if(a[i]>a[j]){
				ans+=a[j];
				a[i]-=a[j];
				j--;
			}else{
				ans+=a[i];
				a[i]=a[j]=0;
				i++;j--;
			}
		}else{
			if(a[i]<a[j]){
				ans+=a[j]-a[i];
				i++;
			}else if(a[i]>a[j]){
				ans+=a[i]-a[j];
				j--;
			}else{
				a[i]=a[j]=0;
				i++;j--;
			}
		}
	}
	cout<<ans;
	return 0;
}
