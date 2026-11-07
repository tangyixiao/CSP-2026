#include <bits/stdc++.h>
using namespace std;

int m,n,a[200005]={0};
//int ans=0,nu=0;

bool cmp(int a,int b){
	return a>b;
}

int main(){

    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);

    cin>>n>>m;
    for(int i = 1; i <= n; i++){
    	cin>>a[i];
	}

    sort(a+1,a+n+1,cmp);

    /*for(int i = 1; i <= n; i++){
    	cout<<a[i]<<" ";
	}*/

	cout<<a[m];

    //cout<<ans;
    return 0;
}
