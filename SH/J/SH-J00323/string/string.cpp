#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	unsigned long long n,a[200005],ans=0,l[200005],len=1;
	char c[200005];
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		l[i]=len;
		len+=a[i];
	}
	long long left=1,right=n;
	long long ln=a[1],rn=a[n];
	for(long long i=1;i<=n;i++){
		if(left>=right) break;
		if(ln==rn){
			if(c[left]!=c[right]) ans+=rn;
			left++;
			right--;
			ln=a[left];
			rn=a[right];
		}else if(ln>rn){
			if(c[left]!=c[right]) ans+=rn;
			right--;
			ln-=rn;
			rn=a[right];
		}
		else if(ln<rn){
			if(c[left]!=c[right]) ans+=ln;
			left++;
			rn-=ln;
			ln=a[left];
		}
	}cout<<ans;
	return 0;
} 
