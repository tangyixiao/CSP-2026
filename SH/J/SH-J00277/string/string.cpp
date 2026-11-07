#include <bits/stdc++.h>
using namespace std;
struct node{
	long long st,ed;
	char c;
};
node a[200005],b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,u,sum=0,p1=0,p2=0,t1=1,t2=1,r1=0,r2=0,ans=0;
	char c;
	bool fg=0;
	cin >>n;
	for (long long i=1;i<=n;i++){
		cin >>u>>c;
		a[++p1].c=c;
		a[p1].ed=a[p1-1].ed+u;
		a[p1].st=a[p1].ed-u+1;
		sum+=u;
	}
	for (long long i=1;i<=n;i++){
		if (a[i].ed>sum/2&&!fg){
			p2=n-i+1;
			p1=i-1;
			u=p2;
			b[p2].st=(sum+1)/2-(a[i].ed-a[i].st);
			b[p2].ed=(sum+1)/2;
			a[p1].ed=sum/2;
			b[p2].c=a[p1].c;
			fg=1;
		}
		if (fg){
			b[--u].c=a[i].c;
			b[u].ed=b[u+1].st-1;
			b[u].st=b[u].ed-(a[i].ed-a[i].st);
			//cout <<b[u].st<<" "<<b[u].ed<<endl;
		}
	}
	while (!(t1>=p1&&t2>=p2)){
		if (a[t1].ed>=b[t2].ed){
			if (a[t1].c!=b[t2].c){
				ans+=b[t2].ed-min(r1+a[t1].st,r2+b[t2].st)+1;
			}
			r1=b[t2].ed-a[t1].st+1;
			r2=0;
			t2++;
			if (r1>a[t1].ed){
				t1++;
				r1=0;
			}
			if (r1==a[t1].ed){
				t1++;
				r1=0;
			}
		}
		else{
			if (a[t1].c!=b[t2].c){
				ans+=a[t1].ed-min(r2+b[t2].st,r1+a[t1].st)+1;
			}
			r2=a[t1].ed-b[t2].st+1;
			r1=0;
			t1++;
			if (r2>b[t2].ed){
				t2++;
				r2=0;
			}
		}
		//cout <<ans<<" "<<t1<<" "<<r1<<" "<<t2<<" "<<r2<<endl;
	}
	if (a[t1].c!=b[t2].c){
		ans+=sum/2-min(r2+b[t2].st,r1+a[t1].st)+1;
	}
	cout <<ans;
	return 0;
} 
