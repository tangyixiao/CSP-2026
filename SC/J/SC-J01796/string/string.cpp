#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
long long a[MAXN];
char c[MAXN];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);cout.tie(nullptr);
	int n;
	cin>>n;
	long long cnt=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		cnt+=a[i];
	}
	long long l=1,r=n,sum1=a[1],sum2=a[n],y=a[1],b=a[n];
	long long ans=0;
	while(l<=r){
		int mini=min(y,b);
		if(c[l]!=c[r]){
			ans+=mini;
		}
		y-=mini;
		b-=mini;
		if(y==0){
			l++;
			y=a[l];
			sum1+=a[l];
		}
		if(b==0){
			r--;
			b=a[r];
			sum2+=a[r];
		}
		if(sum1>cnt/2){
			if(sum1-a[l]>cnt/2)break;
			y-=sum1-cnt/2;
			sum1=cnt/2+1;
		}
		if(sum2>cnt/2){
			if(sum2-a[r]>cnt/2)break;
			b-=sum2-cnt/2;
			sum2=cnt/2+1;
		}
	}
	cout<<ans;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/