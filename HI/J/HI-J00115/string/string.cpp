#include<bits/stdc++.h>
using namespace std;
struct node{
	long long int t;
	char c;
} a[200010];
long long int sum=1,n,lsum,rsum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].t>>a[i].c;
		sum+=a[i].t;
	}
	long long js=0;
	for(long long cnt=0,lmax=0,rmax=0,li=0,rj=n-1,lc,rc;lmax<=sum/2,rmax<=sum/2;){
		if(lmax==rmax){
			lmax=min(sum/2,lmax+a[li].t);
			rmax=min(sum/2,rmax+a[rj].t);
			lc=a[li].c;
			rc=a[rj].c;
			li++;rj--;
		}else if(lmax>rmax){
			rmax=min(sum/2,rmax+a[rj].t);
			rc=a[rj].c;rj--;
		}else{
			lmax=min(sum/2,lmax+a[li].t);
			lc=a[li].c;li++;
		}
		if(lc==rc){
			cnt=min(lmax,rmax);
		}else{
			js+=(min(lmax,rmax)-cnt);
			cnt=min(lmax,rmax);
		}
		if(cnt==sum/2){
			break;
		}
	}
	cout<<js;
	return 0;
}
