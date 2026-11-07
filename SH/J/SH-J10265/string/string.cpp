#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],ans=0,b=0;
char c[200005];
int main(){
 	freopen("string.in","r",stdin);
  	freopen("string.out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++){
    	cin>>a[i]>>c[i];
        b+=a[i];
        a[i]=b;
	}
   	long long j=1;
   	int p=1,q=n;
	while (j<=b/2){
		if (j>a[p])p++;
		if (b+1-j<=a[q-1])q--;
		if (c[p]!=c[q])ans+=min(a[p],b-a[q-1])+1-j;
		j=min(a[p],b-a[q-1])+1;
	}
	cout<<ans;
} 
