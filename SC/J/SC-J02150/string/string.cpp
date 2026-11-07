#include<bits/stdc++.h>
#define int long long
//#define pi pair<int,int>
using namespace std;
const int mx=2e5+5;
int n;
struct node{
	int len;
	char s;
}a[mx];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
//	freopen("string5.in","r",stdin);
//	freopen("q.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i].len>>a[i].s;
		sum+=a[i].len;
	}
	if(sum<=200000000){
		string f="";
		for(int i=1;i<=n;i++){
			for(int j=1;j<=a[i].len;j++) f+=a[i].s;
		}
		int y=f.size(),cnt=0;
		for(int i=0;i<y/2;i++){
			if(f[i]!=f[y-i-1]) cnt++;
		}
		cout<<cnt;
		return 0;
	}
	int l=1,r=n,t=0;
	int sum1=0,sum2=0;
	while(l<=r){
		if(a[l].s==a[r].s){
			if(sum1==sum2){
				if(a[l].len>=a[r].len){
					sum1=a[l].len-a[r].len;
					sum2=0;
					r--;
				}
				else {
					sum1=0;
					sum2=a[r].len-a[l].len;
					l++;
				}
			}
			else if(sum1>sum2){
				if(sum2+a[r].len>sum1){
					sum2=sum2+a[r].len-sum1;
					sum1=0;
					l++;
				}
				else if(sum2+a[r].len==sum1) sum2=sum1=0,l++,r--;
				else sum2+=a[r].len,r--;
			}
			else {
				if(sum1+a[l].len>sum2){
					sum1=sum1+a[l].len-sum2;
					sum2=0;
					r--;
				}
				else if(sum1+a[l].len==sum2) sum2=sum1=0,l++,r--;
				else sum1+=a[l].len,l++;
			}
		}
		else {
			if(sum1==sum2){
				if(a[l].len>=a[r].len){
					sum1=a[l].len-a[r].len;
					sum2=0;
					t+=a[r].len;
					r--;
				}
				else {
					t+=a[l].len;
					sum1=0;
					sum2=a[r].len-a[l].len;
					l++;
				}
			}
			else if(sum1>sum2){
				if(sum2+a[r].len>sum1){
					t+=sum1-sum2;
					sum2=sum2+a[r].len-sum1;
					sum1=0;
					l++;
				}
				else if(sum2+a[r].len==sum1) t+=a[r].len,sum2=sum1=0,l++,r--;
				else t+=a[r].len,sum2+=a[r].len,r--;
			}
			else {
				if(sum1+a[l].len>sum2){
					t+=sum2-sum1;
					sum1=sum1+a[l].len-sum2;
					sum2=0;
					r--;
				}
				else if(sum1+a[l].len==sum2) t+=a[l].len,sum2=sum1=0,l++,r--;
				else t+=a[l].len,sum1+=a[l].len,l++;
			}
		}
	}
	cout<<t;
	return 0;
}