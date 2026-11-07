#include<bits/stdc++.h>
using namespace std;
long long n,l=1,r,ans;
struct node{
	int num;
	char c;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i].num>>a[i].c;
	r=n;
	while(l<r){
		if(a[l].c==a[r].c){
			if(a[l].num<a[r].num){
				a[r].num-=a[l].num;
				l++;
			}else if(a[l].num>a[r].num){
				a[l].num-=a[r].num;
				r--;
			}else{
				l++;
				r--;
			}
		}else{
			if(a[l].num>a[r].num){
				ans+=a[r].num;
				a[l].num-=a[r].num;
				r--;
			}else if(a[l].num<a[r].num){
				ans+=a[l].num;
				a[r].num-=a[l].num;
				l++;
			}else{
				ans+=a[l].num;
				l++;
				r--;
			}
		}
	}cout<<ans;
	return 0;
}