#include<bits/stdc++.h >
using namespace std;
struct st{
	char x;
	unsigned long long num;
};
st a[200010];long long tt=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	unsigned long long n;cin>>n;
	
	for(int i=1;i<=n;i++)cin>>a[i].num>>a[i].x;
	
	unsigned long long l_st=1,r_st=n;
	unsigned long long num=0;
	while(l_st<r_st){
		if(a[l_st].x!=a[r_st].x)num+=min(a[l_st].num,a[r_st].num);
		
		if(a[l_st].num<a[r_st].num){
			a[r_st].num-=a[l_st].num;
			a[l_st].x=a[r_st].x;
			l_st++;
		}
		else if(a[l_st].num==a[r_st].num){
			l_st++;
			r_st--;
		}else{
			a[l_st].num-=a[r_st].num;
			a[r_st].x=a[l_st].x;
			r_st--;
		}
	}
	
	cout<<num;
	return 0;
}
