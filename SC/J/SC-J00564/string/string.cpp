//观察题目可得将s正存一遍再反存一遍，然后一组一组判断  O(n),其实是有问题的，这样会判断重复。但是代码还是存一份
//所以考虑双指针，从前后一起
//注意到n<=2*10^5,a<=10^9 需要long long
//用前缀和来存字符串长度,这里要开ll,再维护处理的长度
#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
#define ll long long
ll n,pra[N],prb[N];
ll len,ans;
struct node{
	int val;char c;
}a[N],b[N];//存字符串
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		node x;cin>>x.val>>x.c;
		a[i]=x;b[n-i+1]=x;
	}
//	for(int i=1;i<=n;i++){
//		cout<<'a'<<i<<'='<<a[i].val<<' '<<a[i].c<<endl;
//		cout<<'b'<<i<<'='<<b[i].val<<' '<<b[i].c<<endl;
//	}
//	cout<<endl;
	for(int i=1;i<=n;i++){
		pra[i]=pra[i-1]+a[i].val;
		prb[i]=prb[i-1]+b[i].val;
	}
	for(int i=1,j=1;i<=n&&j<=n;){
		if(i==j&&i==1){//第一次特殊处理
			len=min(a[i].val,b[j].val);
			if(a[i].c!=b[j].c){
				ans+=len;
			}
			if(a[i].val==b[j].val) i++,j++;
			else if(len==a[i].val) i++;
			else j++;
			continue;
		}
		if(len==pra[i-1]){
			if(pra[i]<=prb[j]){
				len+=a[i].val;
				if(a[i].c!=b[j].c){
					ans+=a[i].val;
				}
				i++;if(pra[i]==prb[j]) j++;
			}else{
				if(a[i].c!=b[j].c){
					ans+=prb[j]-len;
				}
				len=prb[j];
				j++;
			}
		}else{
			if(prb[j]<=pra[i]){
				len+=b[j].val;
				if(a[i].c!=b[j].c){
					ans+=b[i].val;
				}
				j++;if(pra[i]==prb[j]) i++;
			}else{
				if(a[i].c!=b[j].c){
					ans+=pra[i]-len;
				}
				len=pra[i];
				i++;
			}
		}
	}
	cout<<ans/2;
	return 0;
}
//调不动了把第一版交上去吧，t3的分好得一点