#include<bits/stdc++.h>
using namespace std;
const int N=2e5+100;
struct q{
	long long l,r;
	char s;
}s[N];
long long n,x1,x2,mid,l=1,r,ans;
char li;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x1>>li;
		s[i].l=mid+1;
		mid+=x1;
		s[i].r=mid;
		s[i].s=li;
	}
	r=n;
	while(l<r){
		x1=s[l].r-s[l].l+1;
		x2=s[r].r-s[r].l+1;
		if(x1<x2&&x1!=0&&x2!=0){
			if(s[l].s!=s[r].s)ans+=x1;
			long long k=x1-x2;
			if(s[l+1].s!=s[r].s){
				ans+=x2-x1;
			}
			s[l+1].l+=x2-x1;
			//cout<<l<<" "<<r<<" "<<1<<'\n';
		}
		else if(x1>x2&&x1!=0&&x2!=0){
			if(s[l].s!=s[r].s)ans+=x2;
			if(s[r-1].s!=s[l].s){
				ans+=x1-x2;
			}
			s[r-1].r+=x1-x2;
			//cout<<l<<" "<<r<<" "<<2<<'\n';
		}
		else if(x1==x2&&x1!=0&&x2!=0){
			if(s[l].s!=s[r].s){
				ans+=x1;
				//cout<<l<<" "<<r<<" "<<3<<'\n';
			}
		}
		l++;
		r--;
	}
	cout<<ans;
	return 0;
}//5 2 a 2 b 1 a 1 b 3 c
