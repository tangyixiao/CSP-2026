#include<bits/stdc++.h>
#define N (int)2e5+5
using namespace std;
long long a[N],n;
char c[N];
bool kx=1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==1)cout<<0<<endl;
	else if(n==2){
		int x,y;
		char c;
		cin>>x>>c;cin>>y>>c;
		cout<<min(x,y)<<endl;
	}
	else{
		for(int i=1;i<=n;i++){
			cin>>a[i];
			cin>>c[i];
			if(c[i]!=c[i-1])kx=0;
		}
		if(kx)cout<<0<<endl;
		if(n==3){
			if(c[1]==c[3]){
				cout<<max(a[1],a[3])-min(a[1],a[3])<<endl;
			}
			else{
				int x=max(a[1],a[n]);
				if(x==a[1] and x>a[2]+a[n])cout<<a[2]+a[n]<<endl;
				else if(x==a[3] and x>a[1]+a[2])cout<<a[1]+a[2]<<endl;
				else cout<<x<<endl;
			}
		}
	}
	return 0;
}
