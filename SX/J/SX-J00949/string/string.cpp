#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],l[200010],r[200010],ll=0,lr=0,sum=0,s=0,f=0,s1=0,z,l1,r1,ans=0,ss=0;
char c[200010],lc[200010],rc[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	ss=sum;
	if(sum%2)sum++,f=1;
	sum=sum/2;
	for(int i=1;i<=n;i++){
		s+=a[i];
		if(s>=sum){
			ll=i;
			for(int j=1;j<=i-1;j++){
				l[j]=a[j],lc[j]=c[j];
				s1+=a[j];
			}
			if(s1+a[i]==sum){
				l[ll]=a[i],lc[ll]=c[i];
				z=i+1;
			}else{
				l[ll]=sum-s1,lc[ll]=c[ll];
				r[1]=a[i]-l[ll],rc[1]=c[ll];
				z=i+1;
				lr=1;
			}
			s1=0;
			for(int j=z;j<=n;j++){
				r[++lr]=a[j],rc[lr]=c[j];
			}
			break;
		}
	}
	l1=1,r1=lr;
	while(l1<=ll&&1<=r1){
		if(lc[l1]!=rc[r1]){
			ans+=min(l[l1],r[r1]);
		}
		if(l[l1]<r[r1]){
			r[r1]-=l[l1++];
		}else if(l[l1]>r[r1]){
			l[l1]-=r[r1--];
		}else l1++,r1--;
	}
	cout<<ans;
	return 0;
}