#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
struct Node{
	int x; 
	int y; 
	int k;
}c[N];
int j=1;
int hxy(int a){
	c[j].k=a;
	while(a>0){
		if(a%2==0){
		c[j].x++;
	    }
		c[j].y=j;
		a/=2; 
    }
    j++;
}
bool cmp(Node n,Node m){
	if(n.x!=m.x)return n.x<n.y;
	return n.y>m.y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		hxy(a[i]);
	}
	sort(c+1,c+1+n,cmp);
	j=1;
	int u=m;
	while(m--){
		c[j].k&=c[j+1].k;
		j++;
	}
	cout<<c[u].k;
	return 0;
}