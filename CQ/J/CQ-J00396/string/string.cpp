#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
struct str{
	int num;
	char c;
}a[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i].num >> a[i].c;
	}
	int i=1,j=n;
	int ans=0;
	while(i<=j){
		if(a[i].c==a[j].c){
			if(a[i].num>a[j].num)a[i].num-=a[j].num,a[j].num=0;
			else if(a[i].num<a[j].num)a[j].num-=a[i].num,a[i].num=0;
			else{
				a[i].num=a[j].num=0;
			}
		}
		else{
			if(a[i].num<a[j].num){
				a[j].num-=a[i].num;
				ans+=a[i].num;
				a[i].num=0;
			}
			else if(a[i].num>a[j].num){
				a[i].num-=a[j].num;
				ans+=a[j].num;
				a[j].num=0;
			}
			else{
				ans+=a[i].num;
				a[i].num=a[j].num=0;
			}
		}
		if(a[i].num==0)i++;
		if(a[j].num==0)j--;
	}
	cout << ans;
	return 0;
}

