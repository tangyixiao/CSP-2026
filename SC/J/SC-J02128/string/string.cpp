#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6+5;
struct node{
	int num;
	char p;
}a[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int k;
		char c;
		cin>>k>>c;
		a[i].num=k,a[i].p=c;
	}int l=1,r=n;
	while(l<r){
		if(a[l].num<a[r].num){
			if(a[l].p!=a[r].p)sum+=a[l].num;
			a[r].num-=a[l].num;l++;
		}else if(a[l].num>a[r].num){
			if(a[l].p!=a[r].p)sum+=a[r].num;
			a[l].num-=a[r].num;r--;
		}else{
			if(a[l].p!=a[r].p)sum+=a[r].num;
			l++,r--;
		}
	}cout<<sum;
	return 0;
}