#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
struct node{
	ll num;
	char c;
};
node s[N];
ll belong[N];//每块的右界 
int n;
int main(){
	//调得有点久了，此时10:27
	//时间微微赶
	//为什么-J不是4h 
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	ll l=0;
	for(int i=1;i<=n;i++){
		cin>>s[i].num>>s[i].c;
		l+=s[i].num;
		belong[i]=l+1;
	}
	s[0].num=0;
	s[0].c=' ';
	s[n+1].num=0;
	s[n+1].c=' ';
	ll ans=0;
	ll i=s[1].num,j=l+1,cnt=0;
	int bi=1,bj=n;
	bool flag=1;
	while(flag){
		if(i==l/2&&cnt==i){
			break;
		}
		//把j向i边改边对齐
		//处理整块整块的修改 
		while(cnt+s[bj].num<=i&&bj>=1){
			if(s[bj].c!=s[bi].c){
				ans+=s[bj].num;
			}
			j-=s[bj].num;
			cnt+=s[bj--].num;
		} 
		//剩余散块
		if(cnt<i){
			if(s[bj].c!=s[bi].c){
				ans+=i-cnt;
			}
			j-=i-cnt;
			s[bj].num-=i-cnt;
			cnt+=i-cnt;
		}
		if(i+s[bi+1].num<=l/2){
			i+=s[bi+1].num;//更新i
		}
		else{
			i+=l/2-i;//在i过半前的最后散块 
		}
		bi++; 
	}
	cout<<ans;
	return 0;
}
