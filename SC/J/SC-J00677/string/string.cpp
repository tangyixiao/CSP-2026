#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
struct jyy{
	int ai;char ch;
} a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin >> n;
	for(int i = 0;i < n;i++){
		int ai;char ch;
		cin >> ai >> ch;
		a[i] = {ai,ch};
	}
	int l=0,r=n-1,l1=0,r1=0;long long ans=0;
	while(l < r){
		int ld = a[l].ai-l1,rd = a[r].ai-r1;
		if(a[l].ch != a[r].ch) ans+=min(ld,rd);
		if(ld < rd){
			l++;l1 = 0;
			r1 += ld;
		}else if(rd < ld){
			r--;r1 = 0;
			l1 += rd;
		}else{
			l++;r--;l1=0;r1=0;
		}
	}
	cout << ans;
	return 0;
}