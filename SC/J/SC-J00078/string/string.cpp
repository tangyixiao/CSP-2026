#include<bits/stdc++.h>
using namespace std;
char c[1000010];
int n;
int l,r;
long long a[1000010];
long long ans=0;
long long sum=0;
long long pos=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i]; 
		pos+=a[i];
	}
	l=1;
	r=n;
	pos/=2;
	while(l<r){
		if(sum+min(a[l],a[r])>pos){
			break;
		}
		sum+=min(a[l],a[r]);
		if(c[l]!=c[r]){
			if(a[l]>a[r]){
				ans+=a[r];
				a[l]-=a[r];
				r--;
			}else if(a[l]==a[r]){
				ans+=a[l];
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
				l++;
				r--;
			}else{
				a[r]-=a[l];
				l++;
			}
		}
	}
	cout<<ans;
	return 0;
}
/*
字符串总体长度永远不变
问题转化为求中心点左右两侧不同的字符串个数 
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
