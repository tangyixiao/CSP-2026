#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
    cin>>n>>m;
    int a[n+1]={0};
    int maxn=-10000000;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		if(i==j) continue;
    		else if(a[i]&a[j]>=maxn) maxn=a[i]&a[j];
		}
	}
	cout<<maxn;
	return 0;
}//±©Á¦³öÆæ¼££¡ 
