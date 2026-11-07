#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long l=1,r=n,an=0;
	while(1){
//		cout<<l<<' '<<r<<'\n';
		long long sum=0;
		while(sum+a[r]<=a[l]&&r>l){
			sum+=a[r];
			if(c[r]!=c[l]){
				an+=a[r];
			}
			r--;
		}
		if(l>=r){
			break;
		}
		a[r]-=(a[l]-sum);
		if(c[r]!=c[l]){
			an+=a[l]-sum;
		}
		l++;
	}
	cout<<an;
	return 0;
}
//代码敲慢一点！！！
//注意freopen
//注意数组大小
//注意函数返回值
//注意取模
//30 

