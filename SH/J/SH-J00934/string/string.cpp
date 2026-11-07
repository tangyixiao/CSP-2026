#include <bits/stdc++.h>
using namespace std;
#define int long long
struct node{
	int n;
	char c;
};
node a[200005];
signed main(){
	int cnt=0,ans=0;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int t;
	cin >> t;
	for (cnt=1;cnt<=t;cnt++){
		int nn;
		cin >> nn;
		char cc;
		cin >> cc;
		a[cnt].n=nn;
		a[cnt].c=cc;
	}
	for(int i=0;i<cnt;){
		if(a[i].n<a[cnt].n){
			if(a[i].c!=a[cnt].c){
				ans+=min(a[cnt].n,a[i].n);
				a[cnt].n-=a[i].n;
				i++;
			}else{
				a[cnt].n-=a[i].n;
				i++;
			}
		}else if(a[i].n>a[cnt].n){
			if(a[i].c!=a[cnt].c){
				ans+=min(a[i].n,a[cnt].n);
				a[i].n-=a[cnt].n;
				cnt--;
			}else{
				a[i].n-=a[cnt].n;
				cnt--;
			}
		}else{
			if(a[i].c!=a[cnt].c){
				ans+=min(a[i].n,a[cnt].n);
			}
			a[i].n=0;
			a[cnt].n=0;
			i++;
			cnt--;
		}
	} 
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
