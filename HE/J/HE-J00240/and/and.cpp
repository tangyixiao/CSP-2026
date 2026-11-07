#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int> v;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	int ans=0;
	for(int k=30; k>=0; k--){
		int kal=(1<<k);
		vector<int> nxt;
		for(const auto &x:v){
			if(x&kal) nxt.push_back(x); 
		}
		if(nxt.size()>=m){
			ans+=kal;
			v=nxt;
		}
	}
	cout<<ans<<endl;
	return 0;
}

/*
inline bool cmp(const int &a, const int &b){
	return popc(a)>popc(b)
}

inline bool recmp(const int &a, const int &b){
	return popc(a)<popc(b)
}

int main(){
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	for(int i=2; i<=n; i++){
		b[i]=(~a[1])^(~a[i]);
	}
	sort(b+2,b+1+n,recmp);
	
	return 0;
}
a&b = ~(~a|~b)
a|b = a|(a^b)

a&b = ~(~a|(~a^~b))
 
a&b&c = (a&b)&c
      = A&c
      = ~(~A|~c)
	  = ~(~ (~(~a|(~a^~b)) )|~c)
	  = ~((~a|(~a^~b))|~c)
	  = ~(~a|(~a^~b)|~c)
	  
a&b&c = ~(~a|(~a^~b)|(~a^~c))

Maybe I will be on MiHuoXingWeiDaShang?
*/
