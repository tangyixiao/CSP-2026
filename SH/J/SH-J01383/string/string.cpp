#include<bits/stdc++.h>
using namespace std;
long long n,c,t,top,sum,cs;
long long cnt;
char xt;
struct p{
	long long ind;
	char d;
}x[210000],y[210000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>c>>xt;
		x[i]={c,xt};
	}
	top=n;
	for (int i=1;i<=top;i++){
		c=x[i].ind;
		xt=x[i].d;
		while (c>0){
			t=min(c,x[top].ind);
			c-=t;
			x[top].ind-=t;
			if (xt!=x[top].d){
				cnt+=t;
			}
			if (x[top].ind==0)top--;
		}
	}
	cout<<cnt;
}
