#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,a[N],c[N],e[N],m,l,l2,ans;char b[N],d[N],f[N];

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];m+=a[i];
	}
	int mid=ceil(m*1.0/2);
	
	int p=0;
	for(int i=1;i<=n;i++){
		p+=a[i];
		if(p>=mid){
			l=i,l2=i,a[l]-=p-mid+(m%2);c[1]=p-mid,d[1]=b[l];
			if(a[l]==0) l--;
			break;
		}
	}
	int t=(c[1]?1:0),o=t;
	for(int i=l2+1+t;i<=n+t;i++) c[i-l2]=a[i-t],d[i-l2]=b[i-t],o++;
	for(int i=1;i<=o;i++) e[i]=c[o-i+1],f[i]=d[o-i+1];
	int p2=1,p3=1,q=1,q2=1;
	if(m%2) mid--;
	int j=1,j2=1;
	while(j<=l && j2<=o){
		if(a[j]>e[j2]){
			if(b[j]!=f[j2]) ans+=e[j2];
			a[j]-=e[j2];j2++;
		}
		else if(a[j]==e[j2]){
			if(b[j]!=f[j2]) ans+=a[j];
			j++;j2++;
		}
		else{
			if(b[j]!=f[j2]) ans+=a[j];
			e[j2]-=a[j];j++;
		}
	}
	//1~l
	//1~n-l2+t
	
	cout<<ans;

    return 0;
}
