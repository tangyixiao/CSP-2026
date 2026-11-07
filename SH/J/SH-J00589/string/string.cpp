#include<bits/stdc++.h>
using namespace std;
struct node{
	int x;
	char y;
}a[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long cnt = 0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].x>>a[i].y;
	} 
	int l = 0,r = n-1;
	while(l<r){
		if(a[l].y!=a[r].y) cnt+=min(a[l].x,a[r].x);
		if(a[l].x>a[r].x){
			a[l].x-=a[r].x;
			r--;
		}
		else if(a[l].x==a[r].x) l++,r--;
		else{
			a[r].x -= a[l].x;
			l++;
		}
	}
	cout << cnt;
	return 0;
}
