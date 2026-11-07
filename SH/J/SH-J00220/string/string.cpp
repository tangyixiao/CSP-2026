#include<bits/stdc++.h>
using namespace std;
long long a[200001],l[200001];
char c[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		l[i]=l[i-1]+a[i];
	}
	int cnt=lower_bound(l+1,l+n+1,l[n]/2)-l;
	long long ans=0;
	for(int i=1;i<=cnt;i++){
		long long st=l[n]+1-l[i],edd=l[n]-l[i-1];
		if(st<=n-n/2) st=n-n/2+1;
		int pst=lower_bound(l+1,l+n+1,st)-l;
		int pedd=lower_bound(l+1,l+n+1,edd)-l;
		if(pst==pedd&&c[pst]!=c[i]) ans+=edd-st+1;
		else if(pst!=pedd){
			if(c[pst]!=c[i]) ans+=l[pst]-st+1;
			if(c[pedd]!=c[i]) ans+=edd-l[pedd-1];
			for(int j=pst+1;j<=pedd-1;j++){
				if(c[j]==c[i]) continue;
				ans+=l[j]-l[j-1];
			}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
}
