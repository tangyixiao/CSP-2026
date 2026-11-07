#include<bits/stdc++.h>
using namespace std;
int n,a,c[200005];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>a;
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}
	sort(c+1,c+1+n,cmp);
	cout<<c[a];
	return 0;
} 
