#include<bits/stdc++.h>
using namespace std;
long long n,ans,now,tot;
long long a[200005];
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		tot+=a[i];
	}
	int to2=(tot+1)/2;
	for(int i=1,j=n;i<=n&&j>=1;){
		if(c[i]==c[j]){
			if(a[i]>a[j]){
				now+=a[j];
				a[i]-=a[j];
				a[j]=0;
				j--;
			}
			else if(a[i]==a[j]){
				now+=a[i];
				a[i]=a[j]=0;
				i++,j--;
			}
			else{
				now+=a[i];
				a[j]-=a[i];
				a[i]=0;
				i++;
			}
		}
		else{
//			cout<<i<<' '<<j<<' '<<c[i]<<' '<<c[j]<<'\n';
			if(a[i]>a[j]){
				now+=a[j];
				ans+=a[j];
				a[i]-=a[j];
				a[j]=0;
				j--;
			}
			else if(a[i]==a[j]){
				now+=a[i];
				ans+=a[i];
				a[i]=a[j]=0;
				i++,j--;
			}
			else{
				now+=a[i];
				ans+=a[i];
				a[j]-=a[i];
				a[i]=0;
				i++;
			}
		}
	}
	cout<<ans;
	return 0;
}
