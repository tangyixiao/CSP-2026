#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200010],m,n;
int ans;
int x=1;
void qwq(int x,int y,int z,int op,int oio){
	//cout<<x<<" ";
	//x++;
	if(y>n+1){
		//cout<<"TOO BIG";
		//cout<<endl;
		return ;
	}
	if(z>m){
		//cout<<op;
		//cout<<endl;
		ans=max(op,ans);
		qwq(x,x+oio,2,a[x],oio+=1);
	}
	else qwq(x,y+1,z+1,(op & a[y]),oio);
}
//x是取到了多少位，y为现在多少个，z为用了多少个，op为目前的；
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-m;i++){
		qwq(i,i+1,2,a[i],2);
	}
	cout<<ans;
	return 0;
}