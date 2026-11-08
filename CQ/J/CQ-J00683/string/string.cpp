#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
struct node{
	int n;
	char s;
};
node a[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	int lens=0;
	for(int i=1;i<=n;i++){
		cin>>a[i].n>>a[i].s;
		lens+=a[i].n;
	}
	int k=lens/2;
	int j=n,l=0,cnt=0;
	int sum=0,p=0;
	int sum1=0;
	for(int i=1;i<=n;i++){
		sum+=a[i].n;
		p=a[i].n;
		if(sum>=k){
		    p=p-sum+k;
			sum=k;
		}
		while(sum1<sum-1){
			if(l+p>=a[j].n){
			    if(sum1+p-l>sum){
			    	if(a[i].s!=a[j].s) cnt+=sum-sum1;
			    	l+=sum-sum1;
					sum1=sum;
				}else{
				    if(a[i].s!=a[j].s) cnt+=p-l;
					p-=a[j].n-l;
					j--;
					sum1+=p-l;
					l=0;
				}
			}else{
				l+=p;
				if(a[i].s!=a[j].s) cnt+=p;
				break;
			}
		}
		if(sum>=k) break;
	}
	cout<<cnt;
	return 0;
}
