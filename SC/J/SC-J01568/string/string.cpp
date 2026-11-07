#include<bits/stdc++.h>
using namespace std;
long long n,step=0,l=0;;
struct node{
	int a;
	char c;
}r[200000010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","W",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>r[i].a>>r[i].c;
		l=l+r[i].a;
	}
	long long h=1,t=n;
	while(h<t){
		if(r[h].c!=r[t].c){
			step++;
		}
		r[h].a--;
		r[t].a--;
		if(r[h].a==0){
			h++;
		}
		if(r[t].a==0){
			t--;
		}
	}
	cout<<step;
	return 0;
}