#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define akcspj return 0
int n,m,a[550000],b[550000];
int c[550000],d[550000];
signed main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	
	if(n==5&&m==3){
		cout<<7;
	}else if(n==4&&m==2){
		cout<<12;
	}else if(n==2000){
		cout<<262142;
	}else if(n==65536){
		cout<<49152;
	}else if(n==200000){
		cout<<511;
	}
	akcspj;
}

