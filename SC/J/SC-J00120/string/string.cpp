#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200001];
char c[200001];
int ans=0;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
	}
	for(int i=1,j=n;i<j;){
		if(c[i]!=c[j]){
			if(a[i]==a[j]){
				ans+=a[i];
				i++;
				j--;
			}else if(a[i]>a[j]){
				ans+=a[j];
				a[i]-=a[j];
				j--;
			}else if(a[i]<a[j]){
				ans+=a[i];
				a[j]-=a[i];
				i++;
			}
		}else{
			if(a[i]==a[j]){
				i++;j--;
			}else if(a[i]>a[j]){
				a[i]-=a[j];
				j--;
			}else if(a[i]<a[j]){
				a[j]-=a[i];
				i++;
			}
		}
	}
	cout<<ans;
	return 0;
}//wangyuekesz