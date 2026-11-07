#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
struct node{
	int num;
	char pos;
}a[N];
long long compare;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i].num >> a[i].pos;
	}
	long long l=1,r=n;
	while(l<=r){
		if(a[l].pos==a[r].pos){
			if(a[l].num<a[r].num){
				a[r].num-=a[l].num;
				l++;
			}else if(a[l].num==a[r].num){
				l++;
				r--;
			}else{
				a[l].num-=a[r].num;
				r--;
			}
		}else{
			if(a[l].num<a[r].num){
				compare+=a[l].num;
				a[r].num-=a[l].num;
				l++;
			}else if(a[l].num==a[r].num){
				compare+=a[l].num;
				l++;
				r--;
			}else{
				compare+=a[r].num;
				a[l].num-=a[r].num;
				r--;
			}
		}
	}
	cout  << compare;
} 