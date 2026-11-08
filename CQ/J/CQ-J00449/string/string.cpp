#include<bits/stdc++.h>
#define int long long
using namespace std;
const int MAXN=2e5+5;
int n;
int a[MAXN];
char c[MAXN];
struct node{
	int l,r;
	char c;
};
struct node2{
	int x,id;
	char c;
};
vector<node>v1,v2;
vector<node2>vx;
bool cmp(node2 x,node2 y){
	return x.x<y.x;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	int ss=0;
	for(int i=1;i<=n;i++){
		if(ss+a[i]>sum/2){
			if(ss<sum/2){
				v1.push_back({ss+1,sum/2,c[i]});
				if(sum%2==0&&sum/2+1<=ss+a[i]) v2.push_back({sum/2+1,ss+a[i],c[i]});
				else if(sum/2+2<=ss+a[i])v2.push_back({sum/2+2,ss+a[i],c[i]});
				ss+=a[i];
			}else{
				v2.push_back({ss+1,ss+a[i],c[i]});
				ss+=a[i];
			}
		}else{
			v1.push_back({ss+1,ss+a[i],c[i]});
			ss+=a[i];
		}
	}
	reverse(v2.begin(),v2.end());
	char cx;
	int sumwa=0;
	for(auto x:v1){
		vx.push_back({x.l,1,x.c});
		sumwa+=x.r-x.l+1;
		cx=x.c;
	}
	vx.push_back({sum/2+1,1,cx});
	int wcnt=0;
	char c2x;
	for(auto x:v2){
		vx.push_back({wcnt+1,2,x.c});
		wcnt+=x.r-x.l+1;
		c2x=x.c;
	}
	vx.push_back({sum/2+1,2,c2x});
	sort(vx.begin(),vx.end(),cmp);
	int ans=0;
	char c1=' ',c2=' ';
	int last=0;
	for(auto x:vx){
		if(x.id==1){
			if(c1!=c2&&(c1!=' '&&c2!=' ')){
				ans+=x.x-last;
			}
				c1=x.c;
			last=x.x;
		}else if(x.id==2){
			if(c1!=c2&&(c1!=' '&&c2!=' ')){
				ans+=x.x-last;
			}
			c2=x.c;
			last=x.x;
		}
	}
	printf("%lld",ans);
	return 0;
}
