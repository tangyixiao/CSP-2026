#include<bits/stdc++.h>//string
using namespace std;
const int N=1e8+100;
long long a[N],c[N];
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	string c;
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		cin>>c[i];
	}
	for(int i=1;i<=n;i++){
		if(c[i]==c[i-1]){
			cout<<0;
			return 0;
		}else if(a[i]*c[i]*n%10!=a[i]*c[i]*n/1000){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
