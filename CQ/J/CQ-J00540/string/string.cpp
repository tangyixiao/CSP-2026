#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],s;
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	int i=1,j=n;
	while(i<=j){
		int l=a[i],r=a[j];
		char lc=c[i],rc=c[j];
		if(l==r){
			if(lc!=rc) s+=l;
			i++,j--;
		}else if(l<r){
			if(lc!=rc) s+=l;
			a[j]-=a[i];
			i++;			
		}else{
			if(lc!=rc) s+=r;
			a[i]-=a[j];
			j--;
		}
	}
	cout<<s;
	return 0;
}
