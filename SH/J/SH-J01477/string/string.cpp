#include<bits/stdc++.h>
using namespace std;
#define MAXN 200005
using ll=long long;
using i128=__int128;
ll n;
ll a[MAXN];
ll fi[MAXN];
char c[MAXN];
ll L;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>c[i];
		fi[i]=L;
		L+=a[i];
	}
		fi[n]=L;
//	for(int i=0;i<n;i++){
//		cout<<fi[i]<<" ";
//	}
	ll ans=0;
	ll lptr=0,rptr=n-1;
	while(lptr<rptr)
	{
		ll llen=fi[lptr+1]-fi[lptr];
		ll rlen=fi[rptr+1]-fi[rptr];
		char lchar=c[lptr];
		char rchar=c[rptr];
//		cout<<lptr<<" "<<rptr<<"\n";
//		cout<<lchar<<" "<<rchar<<"\n";
//		cout<<llen<<" "<<rlen<<"\n";
		if(lchar!=rchar){
			ans+=
				min(fi[lptr+1],L-fi[rptr])-max(fi[lptr],L-fi[rptr+1]);
		}
//		cout<<max(fi[lptr],L-fi[rptr+1])<<" "<<min(fi[lptr+1],L-fi[rptr]-1);
		//updata ptr
		if(L-fi[rptr]<fi[lptr]+llen){
			rptr--;
//			cout<<"1\n\n";
		} else if(L-fi[rptr]>fi[lptr]+llen){
			lptr++;
//			cout<<"2\n\n";
		} else{
			rptr--;
			lptr++;
//			cout<<"3\n\n";
		}
	}
	cout<<ans;
	return 0;
}
/*
6
2 a
1 b
2 c
1 b
2 a
3 b

4
2 a
1 b
3 c
2 a
*/
