#include<iostream>
#include<cmath>
#define int long long
using namespace std;
const int maxn=2e5+5;
int n,needl,needr,cnt;
char needc;
struct block {
	int len;
	char ch;
} a[maxn];
int l,r;
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i].len;
		cin>>a[i].ch;
		if(a[i].ch==a[i-1].ch) {
			a[i-1].len+=a[i].len;
			n--;
			i--;
		}
	}
	l=1;
	r=n;
	while(l<=r) {
		if(needl){
			if(a[l].len==needl){
				if(a[l].ch!=needc){
					cnt+=a[l].len;
				}
				needl=0;
				l++;
			} else if(a[l].len>needl){
				if(a[l].ch!=needc){
					cnt+=needl;
				}
				needr=a[l].len-needl;
				needl=0;
				needc=a[l].ch;
				l++;
			} else {
				if(a[l].ch!=needc){
					cnt+=a[l].len;
				}
				needl-=a[l].len;
				l++;
			}
		}
		if(l>r){
			break;
		}
		if(needr){
			if(a[r].len==needr){
				if(a[r].ch!=needc){
					cnt+=a[r].len;
				}
				needr=0;
				r--;
			} else if(a[r].len>needr){
				if(a[r].ch!=needc){
					cnt+=needr;
				}
				needl=a[r].len-needr;
				needr=0;
				needc=a[r].ch;
				r--;
			} else {
				if(a[r].ch!=needc){
					cnt+=a[r].len;
				}
				needr-=a[r].len;
				r--;
			}
		}
		if(l>r){
			break;
		}
		while(needl==0&&needr==0&&l<r){
			if(a[l].ch==a[r].ch){
				if(a[l].len>a[r].len){
					needr=a[l].len-a[r].len;
					needc=a[l].ch;
					l++;
					r--;
				} else if(a[l].len<a[r].len){
					needl=a[r].len-a[l].len;
					needc=a[r].ch;
					l++;
					r--;
				} else {
					l++;
					r--;
				}
			} else {
				if(a[l].len>a[r].len){
					cnt+=a[r].len;
					needr=a[l].len-a[r].len;
					needc=a[l].ch;
					l++;
					r--;
				} else if(a[l].len<a[r].len){
					cnt+=a[l].len;
					needl=a[r].len-a[l].len;
					needc=a[r].ch;
					l++;
					r--;
				} else {
					cnt+=a[l].len;
					l++;
					r--;
				}
			}
		}
	}
	cout<<cnt;
	return 0;
}
