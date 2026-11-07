#include<bits/stdc++.h>
using namespace std;
long long n,m,k,cnt,cnt2,z,r;
bool l[200005][32],x[200005],y[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>k;
	for(int i=1;i<=n;i++,cnt=0){
		cin>>m;
		while(m){
			l[i][cnt++]=m%2;
			m/=2;
		}
	}
	for(int i=31;i>=0;i--,cnt2=0){
		for(int j=1;j<=n;j++)
			y[j]=x[j];
		for(int j=1;j<=n;j++){
			if(x[j]==1) continue;
			if(l[j][i]==1) cnt2++;
			else y[j]=1;
		}
		if(k<=cnt2){
			r=1;
			for(int g=1;g<=i;g++)
				r*=2;
			z+=r;
			for(int j=1;j<=n;j++)
				x[j]=y[j];
		}
	}
	cout<<z;
	return 0;
}
