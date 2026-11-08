#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200005];
char dt[200005];
long long len;
//int tmp=0,tpp=0;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>dt[i]; 
		len+=a[i];
	}
	int l=1,r=n;
	while(l<r){
		if(l==r){
			l++;
			r--;
			continue;
		}
		if(dt[l]!=dt[r]){
			if(a[l]>a[r]){
				ans+=a[r];
				a[l]-=a[r];
				r--;
			}else if(a[l]==a[r]){
				ans+=a[r];
				a[l]=0;
				a[r]=0;
				l++;
				r--;
			}else{
				ans+=a[l];
				a[r]-=a[l];
				l++; 
			}
		}else{
			if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}else if(a[l]==a[r]){
				a[l]=0;
				a[r]=0;
				l++;
				r--;
			}else{
				a[r]-=a[l];
				l++; 
			}
		} 
	}
	cout<<ans<<'\n';
	return 0;
}
/*
3
2 a
2 b
1 c

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b


*/

