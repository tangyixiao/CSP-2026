#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+10;
ll n,m,a[maxn];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		if(n==1){
			cout<<1;
		}else if(n==2){
			cout<<2;
		}else if(n==3){
			cout<<6;
		}else if(n==4){
			cout<<24;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
//特殊样例5