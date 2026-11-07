#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
struct node{
	char ch;
	long long l,r;
} a[200010];
int n;
long long cnt=0;
long long chongdie(long long l1,long long r1,long long l2,long long r2){
	if(r1<l2||r2<l1){
		return 0;
	}
	return (r1-l1+1)+(r2-l2+1)-(max(r1,r2)-min(l1,l2)+1);
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	a[1].l=1;
	cin>>a[1].r>>a[1].ch;
	for(int i=2;i<=n;i++){
		int x;
		char c;
		cin>>x>>c;
		a[i].ch=c;
		a[i].l=a[i-1].r+1;
		a[i].r=a[i].l+x-1;
	}
	long long left=1,right=n;
	while(left<right){
		if(a[left].ch!=a[right].ch){
			cnt+=chongdie(a[left].l,a[left].r,a[n].r-a[right].r+1,a[n].r-a[right].l+1);
		}
		if(a[n].r-a[right].l+1>a[left].r){
			left++;
		}
		else {
			right--;
		}
	}
	cout<<cnt;
	return 0;
} 
