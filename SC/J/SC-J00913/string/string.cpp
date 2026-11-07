#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],ans=0;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long sum=0;
	int flag=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	for(int i=1;i<n;i++){
		if(c[i]==c[i+1])
			flag=1;
		else{
			flag=0;
			break;
		}
	}
	if(flag){
		cout<<0;
		return 0;
	} else{
		ans=sum/2;
		int j=ceil(n/2.0);
		for(int i=1;i<=j;i++){
			int k=n;
			if(c[i]==c[k]){
				ans-=min(a[i],a[j]);
			}
		}
	}
	cout<<ans;
	return 0;
}