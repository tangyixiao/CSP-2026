#include<bits/stdc++.h>
using namespace std;
struct ans{
	int a;
	char c;
};
bool pd(ans a,ans b){
	return a.a<b.a;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	bool bnm=1;
	int n;
	cin>>n;
	ans qwe[200000];
	for(int i=0;i<n;i++){
		cin>>qwe[i].a>>qwe[i].c;
	}
	sort(qwe,qwe+n,pd);
	for(int i=n-1;i>0;i--){
		if(qwe[i].c!=qwe[i-1].c){
			bnm=0;
			cout<<qwe[i-1].a;
			break;
		}
	}
	if(bnm){
		cout<<0;
	}
	return 0;
}
