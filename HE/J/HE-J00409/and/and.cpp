#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200010],ok[200010],ans,b[30]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912};
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ok[i]=1;
	}
	for(int i=29;i>=0;i--){
		int x=0;
		for(int j=1;j<=n;j++){
			if(ok[j]&&(a[j]&b[i])){
				x++;
			}
		}
		if(x>=m){
			ans|=b[i];
			for(int j=1;j<=n;j++){
				if((a[j]&b[i])==0){
					ok[j]=0;
				}
			}
		}
	}
	cout<<ans;
	return 0;
} 

/*
9:30看T3
疑似字典树 
额，字典树咋写来着 
好像不用也能做？
感觉没这么简单 

9:47大样例过了
好像用不着 
*/

