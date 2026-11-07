#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
long long n,a[N],ans,q;
//Trick||Treat!
char b[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long sum=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		q+=a[i];
	}
	for(int i=1;i<=sum;i++){
		for(int j=sum;j>=1;j--){
			if(b[i]==b[j]){
				if(a[i]>a[j]){
					a[i]=a[i]-a[j];
					sum--;
				}else{
					a[j]=a[j]-a[i];
					break;
				}
			}else{
				ans+=min(a[i],a[j]);
				if(a[i]>a[j]){
					a[i]=a[i]-a[j];
					sum--;
				}else{
					a[j]=a[j]-a[i];
					break;
				}
			}
		}
	}	

	cout<<ans;
	return 0;
} 