#include<bits/stdc++.h>
using namespace std;
struct node{
	int a;
	char c;
};
node m[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m[i].a>>m[i].c;
	}
	long long cc=0;
	node l,r;
	l.a=m[1].a;
	l.c=m[1].c;
	r.a=m[n].a;
	r.c=m[n].c;
	int i=1,j=n;
	while(1){
		if(l.a==0){
			l.a+=m[i].a;
			l.c=m[i].c;
			i++;
		}else{
			r.a+=m[j].a;
			r.c=m[j].c;
			j++;
		}
		int b=min(l.a,r.a);
		l.a-=b;
		r.a-=b;
		if(l.c!=r.c){
			cc+=b;
		}
		if(i==j){
			
		}
	}
	cout<<cc<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
