#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=4e5+5;
int n,m,su[N],ans; 
vector<int> vt,vt2;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>su[i],vt.push_back(su[i]);
	for(int i=30;i>=0;i--){
		vt2.clear();
		for(int j=0;j<vt.size();j++)
			if(vt[j]&(1<<i))vt2.push_back(vt[j]);
		if(vt2.size()>=m){
			ans+=(1<<i),vt.clear();
			for(int j=0;j<vt2.size();j++)vt.push_back(vt2[j]);
		}
	}
	cout<<ans;
	return 0;
}
/*
开t3
一眼过去不是特别水
我们发现值域十分大，比较麻烦
但是考虑一下有无什么性质
嗯，对于一个二进制数，显然第一位一越往前越好
那么考虑直接暴力枚举所有二进制位
那么显然只有不到30位
对于每一位，看一下有多少个数满足此二进制位为1
若大于等于m，将所有不满足的数删掉，然后在我们的答案中将这一位标记为1 
否则为0，不做改变
应该可以AC 
5 3
31 3 1 15 7
AC
已获得300pts 
*/

