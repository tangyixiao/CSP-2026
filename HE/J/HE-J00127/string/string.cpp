#include<bits/stdc++.h>
using namespace std;
const int N =2*1e5+5;
struct node {
	int tm;
	char c;
} a[N];
int n;
string s;
long long ans =0 ;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i =1; i<=n; i++) {
		cin>>a[i].tm>>a[i].c;
	}
	int  l =1,r=n;
	while(l<=r) {
		if(a[l].c==a[r].c) {
			if(a[l].tm<a[r].tm){
		
				a[r].tm-=a[l].tm;
				l++;
			}else {
				a[l].tm-=a[r].tm;
				r--;
			}
		} else {
			ans+=min(a[l].tm,a[r].tm);
			if(a[l].tm<a[r].tm){
				a[r].tm-=a[l].tm;
				l++;
			}else {
				a[l].tm-=a[r].tm;
				r--;
			}
		}
	}
	cout<<ans;
}
