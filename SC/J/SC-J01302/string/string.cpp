#include<bits/stdc++.h>
using namespace std;
struct node{
	long long k;
	char f;
}a[100010];
node b[100010];
node c[100010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long L=0;
	for(int i=1;i<=n;i++){
		cin>>a[i].k>>a[i].f;
		L+=a[i].k;
	}
	long long p=L;
	L/=2;
	int x=1,y=1;
	while(L>=a[x].k){
		L-=a[x].k;
		b[y].k=a[x].k;
		b[y++].f=a[x++].f;//中点前一半 
	}
	if(L!=0){
		b[y].k=L;
		b[y].f=a[x].f;
		a[x].k-=L;
	}
	if(p%2==1)	a[x].k-=1;
	int v=1;
	for(int i=x;i<=n;i++){
		c[v].k=a[i].k;
		c[v].f=a[i].f;
		v++;
	}
	v--;
	int q=1,w=v;
	long long ans=0;
	while(w>0&&q<=x){
		if(b[q].k>c[w].k){
			if(b[q].f!=c[w].f)	ans+=c[w].k;
			w--;
			b[q].k-=c[w].k;
		}
		else if(b[q].k<c[w].k){
			if(b[q].f!=c[w].f)	ans+=b[q].k;
			q++;
			c[w].k-=b[q].k;
		}
		else{
			if(b[q].f!=c[w].f)	ans+=b[q].k;
			q++;w--;
		}
	}
	cout<<ans;
    return 0;
}