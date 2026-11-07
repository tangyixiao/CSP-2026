#include<iostream>
#include<algorithm>
using namespace std;
const int N=2e5+5;
struct node{
	int a,num;
	string s;
}z[N];
int n,m;
bool cmp(node x,node y){
	if(x.num!=y.num)return x.num>y.num;
	return x.a>y.a;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>z[i].a;
		int x=z[i].a;
		while(x>0){
			if(x&1==1)z[i].s+="1",z[i].num++;
			else z[i].s+="0";
			x>>=1;
		}
	}
	sort(z+1,z+n+1,cmp);
	if(z[1].num==z[1].s.size() || m==1){
		int ans=z[1].a;
		for(int i=2;i+m-2<=n;i++){
			int x=z[1].a;
			for(int j=i;j<=i+m-2;j++)x=x&z[j].a;
			ans=max(ans,x);
		}
		cout<<ans;
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	int ans=0;
	for(int i=1;i+m-1<=n;i++){
		int x=z[i].a;
		for(int j=i+1;j<=i+m-1;j++)x=x&z[j].a;
		ans=max(ans,x);
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
