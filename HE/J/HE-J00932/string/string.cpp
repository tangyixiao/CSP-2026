#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
struct node{
	int s;
	char c;
};
node a[200005];
string ss;
int uu=0;
int ans=0;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);
	//2 a
	//2 b
	//1 c
	//5 
	//
	//a a b b c
	//a a a b b b 
	cin>>n;
	char d;
	bool flag=1;
	for(int i=1;i<=n;i++){
		cin>>a[i].s>>a[i].c;
		if(i==1)d=a[i].c;
		else{
			if(a[i].c!=d)flag=0;
		}
		uu+=a[i].s;
		for(int j=1;j<=a[i].s;j++){
			ss+=a[i].c;
		}
	}
	if(flag==1){
		cout<<0;
		return 0;
	}
//	double h=ceil(uu*1.0/2); 
    //
	for(int i=0;i<uu;i++){
		if(ss[i]!=ss[uu-i-1]){
			ans++;
		}
	}
	cout<<ans/2<<endl;
	return 0;
}
