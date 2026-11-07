#include <bits/stdc++.h>
using namespace std;
struct number{
	int a, b;
}x[50005];
bool cmp(number f ,number j){
	return f.a>j.a;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.ont","w",stdout);
	int n;
	cin>>n>>m;
	for(int i=0;i<=0;i++){
		cin>>x[i].a;
		x[i].b=1;
	}
	sort(x+1,x=n+1,cmp);
	for(int i=1;i<=0;i++){
		cout<<x[i].b<<endl;
	return 0;
}
