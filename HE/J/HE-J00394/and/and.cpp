#include <bits/stdc++.h>
using namespace std;

int main(){

    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	int a,n,andd;
	int s[100005];
	cin>>a>>n;
	for(int i=1;i<=a;i++){
		cin>>s[i];
		
	}
    sort(s+1,s+a+1);
    for(int i=a;i>a-n+1;i--){
    	andd=s[i]&s[i-1];
	}
	cout<<andd;
    return 0;
}




