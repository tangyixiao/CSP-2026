#include<bits/stdc++.h>
#define FILE "string"
using lld=long long;
using namespace std;
const int N=200010;
lld ans,sum;
int n,a[N];
char c[N];
struct ch{
	lld t;
	int id;
	char nw;
	bool operator <(ch other){
		return t<other.t;
	}
};
vector<ch>dif;
int main(){
	freopen(FILE".in","r",stdin);
	freopen(FILE".out","w",stdout);
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
		scanf("%c",&c[i]);
		scanf("%c",&c[i]);
		sum+=a[i];
	}
	for(lld i=0,s=0;i<n;++i){
		dif.push_back({s,0,c[i]});
		s+=a[i];
	}
	for(lld i=n-1,s=0;i>=0;--i){
		dif.push_back({s,1,c[i]});
		s+=a[i];
	}
	sort(dif.begin(),dif.end());
	char a='.',b='.';
	for(int i=0;i<2*n;++i){
		if(i&&dif[i].t!=dif[i-1].t){
			if(a!=b){
				ans+=dif[i].t-dif[i-1].t;
			}
		}
		if(dif[i].id==0){
			a=dif[i].nw;
		}
		else{
			b=dif[i].nw;
		}
	}
	if(a!=b){
		ans+=sum-dif.back().t;
	}
	printf("%lld",ans/2);
	return 0;
}
