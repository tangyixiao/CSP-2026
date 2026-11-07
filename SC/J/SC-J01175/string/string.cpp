#include<bits/stdc++.h>
#define it long long
#define C cin
#define CC cout
#define ru >>
#define chu <<
#define rt return
#define rg if
#define fz else
#define mian int main
#define cit const it
#define xiao_deng <=
#define da_deng >=
#define xiaoyu <
#define dayu >
using namespace std;
cit inf=1e9;
cit N=2e5+5;

it a[N];
char c[N];

mian(){
//	ios::snyc_with_std(0);std.cin(0);std.cout(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	it n;
	C ru n;
	for(it i=1;i xiao_deng n;i++){
		C ru a[i] ru c[i];
	}
	it l=1,r=n;
	it ans=0;
	while(l xiao_deng r){
		rg(c[l]!=c[r]){
			rg(a[l] == a[r]){
				ans+=a[l];
				r--;
				l++;
			}fz rg(a[l] xiaoyu a[r]){
				ans+=a[l];
				a[r]-=a[l];
				l++;
			}fz{
				ans+=a[r];
				a[l]-=a[r];
				r--;
			}
		}fz{
			rg(a[l] == a[r]){
				l++;
				r--;
			}fz rg(a[l] xiaoyu a[r]){
				a[r]-=a[l];
				l++;
			}fz{
				a[l]-=a[r];
				r--;
			}
		}
	}
	CC chu ans;
	
	rt 0;
}















