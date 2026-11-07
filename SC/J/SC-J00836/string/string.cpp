#include<bits/stdc++.h>
using namespace std;
long long ans;
struct node{
	long long num;
	char c;
}a[200005];
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].c;
	}
	int l=1,r=n;
	while(l<r){
		if(a[l].c==a[r].c){
			if(a[l].num>a[r].num){
				a[l].num-=a[r].num;
				r--;
			}
			else if(a[l].num<a[r].num){
				a[r].num-=a[l].num;
				l++;
			}
			else if(a[l].num==a[r].num){
				l++;r--;
			}
		}
		else{
			if(a[l].num>a[r].num){
				ans+=a[r].num;
				a[l].num-=a[r].num;
				r--;
			}
			else if(a[l].num<a[r].num){
				ans+=a[l].num;
				a[r].num-=a[l].num;
				l++;
			}
			else if(a[l].num==a[r].num){
				l++;r--;
				ans+=a[l].num;
			}
		}
	}
	cout<<ans;
	return 0;
} 