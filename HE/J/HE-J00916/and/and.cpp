#include<bits/stdc++.h>
using namespace std;
int n,m;
struct A{
	int k;
	string s;
}a[200010];
string ten2n(int x,int y){
	string ret;
	while(x){
		ret+=(x%y+'0');
		x/=y;
	}
	return ret;
}
bool z(A x,A y){
	return x.s>y.s;
}
int a1[200010];
int main(){
	freopen("r","and.in",stdin);
	freopen("w","and.out",stdout);
	cin>>n>>m;
	if(m==2){
		int ans=0;
		for(int i=1;i<=n;i++){
			cin>>a1[i];
		}
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a1[i]&a1[j]);
			}
		}
		cout<<ans;
	}else{
		for(int i=1;i<=n;i++){
			cin>>a[i].k;
			string t1=ten2n(a[i].k,2),t2;
			int t=0;
			for(int j=0;j<=t1.size();j++){
				t2+=t1[t1.size()-j-1];
				//cout<<t1[t1.size()-j-1];
			}
			a[i].s=t2;
			//cout<<endl;
			//cout<<t2<<endl;
		}
		sort(a+1,a+n+1,z);
		int ans=a[1].k;
		for(int i=2;i<=m;i++){
			ans&=a[i].k;
		}
		cout<<ans;
	}
	
	return 0;
}
//5 3
//31 3 1 15 7
