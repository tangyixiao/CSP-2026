#include<bits/stdc++.h>
using namespace std;
unsigned long long n,m,a[200020],z,b,w;
bool com(int a,int b){
	return a>b; 
}
int main(){
	freopen("and","r",stdin);
	freopen("and","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
    for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,com);
	b=a[1];
	for(int i=2;i<=m;i++){
		b&=a[i];
	}
	cout<<b;
    return 0;
} 
