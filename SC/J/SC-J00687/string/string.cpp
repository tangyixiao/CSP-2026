#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n;
int a[N];
char b[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.ans","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	int i=1,j=n,ans=0;
	while(i<=j-1){
		if(b[i]!=b[j]){
			if(a[i]>a[j]){
				a[i]-=a[j];
				ans+=a[j];
				j--;
			}else if(a[i]<a[j]){
				a[j]-=a[i];
				ans+=a[i];
				i++;
			}else{
				ans+=a[i];
				i++;
				j--;
			}
		}else{
			if(a[i]>a[j]){
				a[i]-=a[j];
				j--;
			}else if(a[i]<a[j]){
				a[j]-=a[i];
				i++;
			}else {
				i++;
				j--;
			}
		}
	}
	cout<<ans;
	return 0;
}