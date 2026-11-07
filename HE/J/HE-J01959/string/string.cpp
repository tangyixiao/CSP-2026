#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
struct node{
	long long num;
	char cchar;
}a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].cchar;
	}
	int l=1,r=n;
	long long sum=0;
	while(l<=r){
		long long len=min(a[l].num,a[r].num);
		if(a[l].cchar==a[r].cchar){
			if(a[l].num==a[r].num)l++,r--;
			else
			if(a[l].num>a[r].num){
				a[l].num-=len;
				r--;
			}else{
				a[r].num-=len;
				l++;
			}
		}else{
			if(a[l].num==a[r].num){
				l++;
				r--;
				sum+=len;
			}
			else
			if(a[l].num>a[r].num){
				a[l].num-=len;
				sum+=len;
				r--;
			}else{
				a[r].num-=len;
				sum+=len;
				l++;
			}
		}
	}
	cout<<sum;
	return 0;
}
