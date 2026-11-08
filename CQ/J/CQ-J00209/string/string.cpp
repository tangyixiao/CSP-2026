#include<bits/stdc++.h>
using namespace std;
int n;
long long ans,m;
bool f;
struct lob{
	int s;
	char c;
}a[200001];
deque<lob> l,r; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].s>>a[i].c;
		m+=a[i].s;
	}
	f=(m%2);
	m/=2;
	for(int i=1;i<=n;i++){
		if(m>=a[i].s){
			m-=a[i].s;
			l.push_front(a[i]);
		}else if(m>0){
			l.push_front({(int)m,a[i].c});
			a[i].s-=m;
			if(f) a[i].s--;
			r.push_back(a[i]);
			m=0;
		}else{
			r.push_back(a[i]);
		}
	}
	while(!l.empty()){
		lob t=l.front();
		l.pop_front();
		while(t.s&&!r.empty()){
			lob y=r.front();
			r.pop_front();
			if(t.s>y.s){
				t.s-=y.s;
				if(t.c!=y.c) ans+=y.s;
			}else{
				y.s-=t.s;
				if(t.c!=y.c) ans+=t.s;
				if(y.s>0) r.push_front(y);
				t.s=0;
			}
		}
	}
	cout<<ans;
	return 0;
}
