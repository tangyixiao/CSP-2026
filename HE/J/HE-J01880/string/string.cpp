#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,sum=0,ans=0,a[200005];
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int ch;
		char zf;
		cin>>ch>>zf;
		sum+=ch;
		a[i]=ch;
		c[i]=zf;
	}
	int i=1,j=n;
	while(sum>0){
		if(c[i]!=c[j]){
			ans+=min(a[i],a[j]);
			sum-=min(a[i],a[j])*2;
			if(a[i]>a[j]){
				a[i]-=a[j];
				j--;
			}
			else if(a[i]<a[j]){
				a[j]-=a[i];
				i++;
			}
			else {
				i++;
				j--;
			}
		}
		else if(i==j){
			sum-=a[i];
		}
		else{
			sum-=min(a[i],a[j])*2;
			if(a[i]>a[j]){
				a[i]-=a[j];
				j--;
			}
			else if(a[i]<a[j]){
				a[j]-=a[i];
				i++;
			}
			else {
				i++;
				j--;
			}
		}
	}
//	cout<<sum<<endl;
	cout<<ans;
	return 0;
} 
//3
//2 a
//2 b
//1 c
