#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int cnt=n,ans=0; 
	for(int i=1;i<cnt;i++){
		if(a[i]>a[cnt]){
			if(c[i]!=c[cnt]){
				ans+=a[cnt];
			}
			a[i]-=a[cnt];
			i--;
			cnt--;
		}
		else if(a[i]<a[cnt]){
			if(c[i]!=c[cnt]){
				ans+=a[i];
			}
			a[cnt]-=a[i];
		}
		else{
			if(c[i]!=c[cnt]){
				ans+=a[i];
			}
			cnt--;
		}
	}
	cout<<ans;
	return 0;
}
