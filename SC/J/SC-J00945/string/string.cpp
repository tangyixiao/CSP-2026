#include<bits/stdc++.h>
using namespace std;
int n;
struct node1{
	int a=0;
	char id;
}s[200005];
struct node2{
	int o=0,a=0;
	char id;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>s[i].a>>s[i].id;
	long long ans=0;
	node2 l,r;
	l.o=1;
	l.a=s[1].a;
	l.id=s[1].id;
	r.o=n;
	r.a=s[n].a;
	r.id=s[n].id;
	while(l.o<r.o){
		int d=min(l.a,r.a);
		if(l.id!=r.id){
			ans+=d;
//			cout<<' '<<d<<' '<<ans<<endl;
		}
		l.a-=d;
		r.a-=d;
		if(l.a==0){
			l.o++;
			l.id=s[l.o].id;
			l.a=s[l.o].a;
//			cout<<"l_change:"<<l.o<<' '<<l.id<<' '<<l.a<<endl;
		}
		if(r.a==0){
			r.o--;
			r.id=s[r.o].id;
			r.a=s[r.o].a;
//			cout<<"r_change:"<<r.o<<' '<<r.id<<' '<<r.a<<endl;
		}
	}
	cout<<ans;
	return 0;
}