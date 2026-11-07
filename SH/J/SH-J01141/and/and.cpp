#include<bits/stdc++.h>
using namespace std;

long long a[200005],p[200005],q[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=0;i<=m;i++) p[i]=i;
	while(p[0]==0){
		long long mi,now=0;
		for(int i=1;i<=m;i++){
			q[i]=a[p[i]];
			if(i!=1)mi=min(q[i],mi);
			else mi=q[i];
		}
		int nx=0;
		while(mi>0){
			int b=2,yn=1;
			for(int i=1;i<=m;i++){
				if(q[i]%2==0) yn=0;
				q[i]=q[i]/2;
			}
			mi=mi/2;
			if(nx==0&&yn==1) now++;
			else{
				for(int f=2;f<=nx;f++) b=b*2;
				now+=b*yn;
			}
			nx++;
		}
		ans=max(ans,now);
		//
		p[m]++;
		for(int i=m;i>=1;i--){
			if(p[i]>n-i+2){
				p[i-1]++;
				p[i]=p[i-1]+1;
			}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
