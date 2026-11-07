#include<bits/stdc++.h>
using namespace std;
 
/*

*/
const int maxn = 5e5+5;
long long a[maxn];
char b[maxn];
int n;
long long cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	int l=1,r=n;
	while(l<r){
		// 判断对应的字母是否相同 
		// 如果相同 则抵消
		// 如果不相同 则抵消 同时 cnt+=min()
		long long minn = min(a[l],a[r]);
		if(b[l] != b[r]){
			cnt += minn;
		}
		a[l] -= minn;
		a[r] -= minn;
		if(a[l] > 0){
			r--;
		}else{
			l++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
