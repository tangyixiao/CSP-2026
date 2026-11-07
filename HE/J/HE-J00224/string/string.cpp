#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int N=2e5+50;
ll f,n;
struct T{
	ll num;
	char c;
}a[N];
ull mid,sum,ans;
int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
    cin >> n;
    for(int i=1;i<=n;i++){
    	cin >> a[i].num >> a[i].c;
    	mid+=a[i].num;
    	f=(a[i].num%2+f)%2;
	}
	mid=mid/2;
//	cout << mid << ' ' << f << '\n';
	ll h=1,t=n;
	while(sum<mid){
		if(sum+a[h].num>mid){
			ll res=sum+a[h].num-mid;
			if(f){
				mid=mid-res+1;
				a[h].num=a[h].num-2*res+1;
			}
			else{
				mid=mid-res;
				a[h].num=a[h].num-2*res;
			}
		}
		else if(sum+a[t].num>mid){
			ll res=sum+a[t].num-mid;
			if(f){
				mid=mid-res+1;
				a[t].num=a[t].num-2*res+1;
			}
			else{
				mid=mid-res;
				a[t].num=a[t].num-2*res;
			}
		}
		if(a[h].c==a[t].c){
			if(a[h].num<a[t].num){
				a[t].num-=a[h].num;
				sum+=a[h].num;
				h++;
			}
			else if(a[h].num>a[t].num){
				a[h].num-=a[t].num;
				sum+=a[t].num;
				t--;
			}
			else{
				h++;t--;
				sum+=a[t].num;
			}
		}
		else{
			if(a[h].num<a[t].num){
				a[t].num-=a[h].num;
				sum+=a[h].num;
				ans+=a[h].num;
				h++;
			}
			else if(a[h].num>a[t].num){
				a[h].num-=a[t].num;
				sum+=a[t].num;
				ans+=a[t].num;
				t--;
			}
			else{
				h++;t--;
				sum+=a[t].num;
				ans+=a[t].num;
			}
		}
	}
	cout << ans;
	return 0;
}
/*
3
2 a
2 b
1 c


*/
