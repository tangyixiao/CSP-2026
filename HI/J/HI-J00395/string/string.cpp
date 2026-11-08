#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+1;
int n,ans;
struct qwe{
	int b;
	string c;
}a[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i].b >> a[i].c;
	}
	int i=1,j=n;
	while(i!=j){
		if(a[i].c!=a[j].c){
			if(a[i].b<a[j].b){
				ans+=a[i].b;
				a[j].b-=a[i].b;				
				i++;
			}
			else if(a[i].b>a[j].b){
				ans+=a[j].b;
				a[i].b-=a[j].b;				
				j--;
			}
			else {
				ans+=a[j].b;
				j--,i++;
			}
		}
		else{
			if(a[i].b<a[j].b){
				a[j].b-=a[i].b;
				i++;
			}
			else if(a[i].b>a[j].b){
				a[i].b-=a[j].b;
				j--; 
			}
			else{
				i++,j--;
			}
		}
	}
	cout << ans;
	return 0;
}
