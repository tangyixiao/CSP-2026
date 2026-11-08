#include <iostream>
using namespace std;

long long len,ans;
int a[200005];
char c[200005];
int n;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	
	int l=1,r=n,llen=a[1],rlen=a[n];
	for(int i=1;i<=(len+1)/2;i++){
		if(i>rlen) r--,rlen+=a[r];
		if(i>llen) l++,llen+=a[l];
		int t=len-i+1;
		if(c[l]!=c[r]) ans++;
	}
	
	cout<<ans;
	return 0;
}
