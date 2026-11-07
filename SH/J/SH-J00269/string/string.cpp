#include<bits/stdc++.h>
using namespace std;
int n;
struct node{
	char c;
	long long s,e,ai;//s起始,e终止,c字符本身,ai个数 
}a[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].ai>>a[i].c;
		a[i].e=a[i-1].e+a[i].ai;
		a[i].s=a[i-1].e+1;
	}
	int cnt=1;
	for(int i=2;i<=n;i++){
		if(a[i].c==a[1].c) cnt++; 
	}
	if(cnt==n){
		cout<<0;
		return 0;
	}
	long long l=1,r=a[n].e,li=1,ri=n,ans=0;
	while(l<r){
		if(a[li].c!=a[ri].c){
			if(a[li].ai>a[ri].ai){
				ans+=a[ri].ai;
				r-=a[ri].ai;
				l+=a[ri].ai;
			}else{
				ans+=a[li].ai;
				r-=a[li].ai;
				l+=a[li].ai;
			}
			if(r<a[ri].s) ri--;
			else a[ri].ai-=(a[ri].ai-r);
			if(l>a[li].e) li++;
			else a[li].ai-=(a[ri].ai-l+1);
		}else{
			li++;ri--;
			l=a[li].s;
			r=a[ri].e;
		}
	}
	cout<<ans;
	return 0;
}
