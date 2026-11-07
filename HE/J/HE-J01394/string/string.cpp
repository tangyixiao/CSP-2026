#include<bits/stdc++.h>
using namespace std;
const int inf=2e5+5;
int n,p;
struct pp{
	long long a;
	int b;
}m[inf];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long s,f;
		char k;
		cin>>s>>k;
		f=(k-'a')+1;
		if(f==m[p].b){
			m[p].a+=s;
		}
		else{
			m[++p].a=s;
			m[p].b=f;
		}
	}
	if(p==1) cout<<0;
	else{
		int l=1,r=p;
		while(l<=r){
			if(m[l].a>m[r].a){
				if(m[l].b!=m[r].b) ans+=m[r].a;
				m[l].a-=m[r].a;
				r--;
			}
			else if(m[l].a==m[r].a){
				if(m[l].b!=m[r].b) ans+=m[l].a;
				l++;
				r--;
			}
			else if(m[l].a<m[r].a){
				if(m[l].b!=m[r].b) ans+=m[l].a;
				m[r].a-=m[l].a;
				l++;
			}
		}
		cout<<ans;
	}
	return 0;
}

