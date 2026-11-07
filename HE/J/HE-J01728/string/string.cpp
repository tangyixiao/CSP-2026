#include<bits/stdc++.h>
using namespace std;
long long n,s=1,cnt,ans;
const int maxn=2e5+7;
struct node{
	int amo;
	char let;
};
node c[3][maxn];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>c[1][i].amo>>c[1][i].let;
		cnt++;
	}
	for(int i=1;i<=cnt;i++){
		c[2][i]=c[1][cnt-i+1];
	}
	long long p[3]={1,1,1},num=0,max=0;
	for(int i=1;i<=cnt;i++){
		max+=c[1][i].amo;
	}
	while(1){
		int m=min(c[1][p[1]].amo,c[2][p[2]].amo),id=0;
		if(m==c[1][p[1]].amo){
			id=1;
		}
		else{
			id=2;
		}
		int id2=(id==1?2:1);
		if(c[id][p[id]].let!=c[id2][p[id2]].let) ans+=m;
		p[id]++;
		c[id2][p[id2]].amo-=m;
		if(c[id2][p[id2]].amo==0) p[id2]++;
		num+=m;
		if(num>=max/2) break;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
