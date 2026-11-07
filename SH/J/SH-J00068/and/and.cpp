#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int b[35][200005];
int c[35];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int t=a[i],pos=0;
		while(t>0){
			if(t&1){
				b[pos][i]++;
				c[pos]++;
			}
			t/=2;
		    pos++;
		}
	}
	int st=32,fl=0,cnt=n;
	while(st>0){
		fl=0;
	for(int i=st-1;i>=0;i--){
		if(c[i]>=m){
			st=i;fl=1;break;
		}
	}
	if(fl==0)break;
	for(int i=1;i<=n;i++){
		if(((a[i]>>st)&1)==0){
		a[i]=0;
	    for(int j=31;j>=0;j--){
		if(b[j][i]==1) c[j]--,b[j][i]=0;
	}
		}
	}
	}
	long long ans=0;
	for(int i=30;i>=0;i--){
		if(c[i]>=m){
			ans+=(1<<i);
		}
	}
	cout<<ans;
	return 0;
}
//4 2 3 15 12 12
