#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	//set 去掉重复组合
	//long long 应对2^30 
	int n,m;
	cin>>n>>m;
	string s="";
	while(n--){
		int x;
		cin>>x;
		string xx;
		cin>>xx;
		for(int i=1;i<=x;i++)s+=xx;
		cout<<s<<endl;
	}
	return 0;
}  
