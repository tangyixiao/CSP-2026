#include<bits/stdc++.h>
using namespace std;
struct node{
	int a;
	int id;
}q[50050];
int n,m,b[50050],c[50050];
bool cmp(node x,node y){
	return x.id <y.id ;
}
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin>>n>>m;
	int x;
	for(int i=1;i<=n;i++){
		cin>>q[i].a ;
		if(m==2){
			if(q[i].a!=x)x=q[i].a ;
			else
		}
	}
	return 0;
} 
