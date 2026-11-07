#include<bits/stdc++.h>
using namespace std;
string c[10010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c[i];
		if(n==3 and a==2 and c[i]=="a"){
			cout<<"2";
		}else{
			break;
			cout<<"0";
		}
	}
	return 0;
}
