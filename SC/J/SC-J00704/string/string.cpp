#include<bits/stdc++.h>
using namespace std;
#define int long long
struct node{
	int a;
	char b;
}q[200010];
int ans;
int n;
long long m;
string s;
bool flag[200010];
void qwq(int x){
	if(x>((n+1)/2)){
		return ;
	}
	if(flag[x-1]){
		bool e=0;
		int w=q[n+2-x].a-q[x-1].a;
		if(w<0){
			w*=(-1);
			e=1;
		}
		if(e){
			q[n+1-x].a-=w;
			ans+=w;
			q[n+2-x].a+=w;
		}
	}
	if(q[x].b!=q[n+1-x].b){
		ans+=q[n+1-x].a;
		q[n+1-x].b=q[x].b;
	}
	if(q[x].a!=q[n+1-x].b){
		flag[x]=1;
	}
	qwq(x+1);
}
signed main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    //wq忘了！
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>q[i].a>>q[i].b;
		
	}
	qwq(1);
	cout<<ans;
	return 0;
}