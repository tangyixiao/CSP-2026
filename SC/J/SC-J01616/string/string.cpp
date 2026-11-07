#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[200005]={},ans=0,p=0,q=0,sum=0,k=0,l=0,ph=0,qh=0;
char c[200005]={},p1,q1;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	sum/=2;
	p=a[0];q=a[n-1];p1=c[0];q1=c[n-1];k=0;l=n-1;ph=a[0];qh=a[n-1];
	if(ph>sum){
		ph=sum;
		p=sum;
	}
	if(qh>sum){
		qh=sum;
		q=sum;
	}
	while(ph<=sum && qh<=sum){
		if(p>q){
			if(p1!=q1) ans+=q;
			p-=q;
			l--;
			q=a[l];
			q1=c[l];
			if(qh==sum) break;
			if(qh+q>sum){
				q=sum-qh;
				qh=sum;
			}else qh+=q;
		}else if(p==q){
			if(p1!=q1) ans+=p;
			k++;
			l--;
			p=a[k];
			p1=c[k];
			q=a[l];
			q1=c[l];
			if(qh==sum) break;
			if(qh+q>sum){
				q=sum-qh;
				qh=sum;
			}else qh+=q;
			if(ph==sum) break;
			if(ph+p>sum){
				p=sum-p;
				ph=sum;
			}else ph+=p;
		}else{
			if(p1!=q1) ans+=p;
			q-=p;
			k++;
			p=a[k];
			p1=c[k];
			if(ph==sum) break;
			if(ph+p>sum){
				p=sum-p;
				ph=sum;
			}else ph+=p;
		}
	}
	cout<<ans;
	return 0;
}