#include<bits/stdc++.h>
using namespace std;
int n;
long long ans;
struct node{
	int a;
	char c;
}x[200005],y[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		int k;
		char l;
		cin >> k >> l;
		x[i].a=k,x[i].c=l;
		y[n+1-i].a=k,y[n+1-i].c=l;
	}
	int pos1=1,pos2=1; 
	while(x[n].a!=0){
		int te=min(x[pos1].a,y[pos2].a);
		if(x[pos1].c!=y[pos2].c)ans+=te;
		x[pos1].a-=te,y[pos2].a-=te;
		if(x[pos1].a==0)pos1++;
		if(y[pos2].a==0)pos2++;
	}
	cout << ans/2 <<endl;
	return 0;
}

