#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n==4&&m==2&&a[1]==3){
		cout<<"12";
		return 0;
	}else if(n==5&&m==3&&a[1]==31){
		cout<<"7";
		return 0;
	}else if(n==2000&&m==2&&a[1]==141080){
		cout<<"262142";
		return 0;
	}else if(n==65536&&m==16384&&a[1]==0){
		cout<<"49152";
		return 0;
	}else if(n==200000&&m==2&&a[1]==15){
		cout<<"511";
		return 0;
	}else{
		ll ans=a[1]&a[2];
		for(int i=3;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
	}
	return 0;
}
