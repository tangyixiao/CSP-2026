#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int a[MAXN]; 
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
    if(m>=3){
    	for(int i=3;i<=m;i++){
		ans&=a[i];
    }
	}
	
	
	cout<<ans;
	return 0;
}
