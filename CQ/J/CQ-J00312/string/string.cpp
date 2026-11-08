#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,m,sum,ans;
struct node{
	int num;
	int l,r;
	char z;
}a[N];
int reans(){
	int mid=sum/2+1,ll,rr,lp=0,rp=0,re=0;
	if(sum%2){
		ll=mid-1;rr=mid+1;
	}
	else{
		ll=mid-1;rr=mid;
	}
	while(!(a[lp].l<=ll&&a[lp].r>=ll)){lp++;}
	rp=lp;
	while(!(a[rp].l<=rr&&a[rp].r>=rr)){rp++;}
	while(ll>=1){
		if(a[lp].z!=a[rp].z){
			if(sum-a[lp].l+1<a[rp].r){
				re+=ll-a[lp].l+1;
				rr+=ll-a[lp].l+1;
				ll=a[lp].l-1;
				lp--;
			}
			else if(sum-a[lp].l+1>a[rp].r){
				re+=a[rp].r-rr+1;
				ll-=a[rp].r-rr+1;
				rr=a[rp].r+1;
				rp++;
			}
			else{
				re+=a[rp].r-rr+1;
				ll-=a[rp].r-rr+1;
				rr=a[rp].r+1;
				rp++;
				lp--;
			}
		}
		else{
			if(sum-a[lp].l+1<a[rp].r){
				rr+=ll-a[lp].l+1;
				ll=a[lp].l-1;
				lp--;
			}
			else if(sum-a[lp].l+1>a[rp].r){
				ll-=a[rp].r-rr+1;
				rr=a[rp].r+1;
				rp++;
			}
			else{
				ll-=a[rp].r-rr+1;
				rr=a[rp].r+1;
				rp++;
				lp--;
			}
		}
	}
	return re;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	a[m].num=0;a[m].z=0;a[m].l=0;a[m].r=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		char ch;
		cin>>x>>ch;
		sum+=x;
		if(ch==a[m].z){
			a[m].num+=x;
		} 
		else{
			m++;
			a[m].l=a[m-1].r+1;
			a[m].num=x;
			a[m].z=ch;
		}
		a[m].r=a[m].l+a[m].num-1; 
	}
	cout<<reans();
	return 0;
}
/*
4
2 a
3 b
3 c
4 d
aabbbc ccdddd

*/
