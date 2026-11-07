#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long s=0,a[n+1],x,pp=0;
	char b[n+1],y;
	for(int i=1;i<=n-pp;i++){
		cin>>x>>y;
		if(i>=2 && y==b[i-1]){
			pp++;
			a[i-1]+=x;
		}
		else{
			a[i]=x;
			b[i-1]=y;
		}
	}
	n=n-pp;
	if(n==1){
		cout<<"0";
		return 0;
	}
	else if(n==2){
		long long pop=max(a[1],a[2]);
		if(pop%2==0) cout<<pop;
		else cout<<pop-1;
		return 0;
	}
	long long z=0,oz=0,dg=0;
	for(int i=1;i<=n;i++){
		if(n-z<i){
			z--;
			break;
		}
		if(b[i]==b[n-z]){
			if(a[i]>=a[n-z]){
				a[i]-=a[n-z];
				a[n-z]==0;
			}
			else{
				a[n-z]-=a[i];
				a[i]==0;
			}
		}
		z++;
	}
	if(n%2==1){
		n=n/2+1;
	}
	else n=n/2;
	long long k=0,r,lz[100001],pz[100001],l=0;
	char p[100001];
	pz[1]=0;
	for(int i=1;i<=n;i++){
		if(a[i]!=0){
			r=0;
			for(int j=1;j<=k;j++){
				if(b[i]==p[k]){
					pz[k]++;
					r=1;
					break;
				}
			}
			l+=a[i];
			if(r==0){
				k++;
				p[k]=b[i];
				pz[k]=a[i];
				lz[k]=max(l-n,n-l);
				lz[k]=max(lz[k],n-l+a[i]);
				lz[k]=max(lz[k],l-a[i]-n);
			}
		}
	}
	for(int i=1;i<=k;i++){
		oz+=pz[i]/2;
		if(pz[i]%2==1) dg=lz[k];
	}
	if(oz%2==1) oz=oz-1;
	cout<<oz+dg;
	return 0;
} 