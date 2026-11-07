#include<bits/stdc++.h>
using namespace std;
long long n,m,c=0,a[200001][2],p,o,t;
char b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>m>>b;
		a[i][1]=m;
		a[i][2]=b;
	}
	o=1;p=n;
	for (;;){
		t=min(a[o][1],a[p][1]);
		if (a[o][2]==a[p][2]){
			a[o][1]-=t;
			a[p][1]-=t;
			if (a[o][1]==0){
				o++;
			}
			if (a[p][1]==0){
				p--;
			}
		}
		else {
			c=c+t;	
		
			a[o][1]-=t;
			a[p][1]-=t;
			if (a[o][1]==0){
				o++;
			}
			if (a[p][1]==0){
				p--;
			}
		}
		if (o==p || p<o){
			break;
		}
	}
	cout<<c;
	return 0;
}
