#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
typedef long long ll;
int n;
ll cnt;
struct st{
	ll num;
	char cs;
}hw[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>hw[i].num>>hw[i].cs;
	}
	int l=0,r=n-1;
	while(l<=r){
		if(hw[l].num==hw[r].num){
			if(hw[l].cs!=hw[r].cs){
				cnt+=hw[l].num;
			}
		}
		else{
			int sn,sta;
			if(hw[l].num>hw[r].num){
				sn=hw[r].num;
				sta=2;
			}
			else{
				sn=hw[l].num;
				sta=1;
			}
			if(hw[l].cs!=hw[r].cs) cnt+=sn;
			if(hw[l].num>hw[r].num){
				hw[l].num-=hw[r].num;
			}
			else{
				hw[r].num-=hw[l].num;
			}
			if(sta==1) l--;
			else r++;
		}
		l++;
		r--;
	}
	cout<<cnt;
	return 0;
} 
