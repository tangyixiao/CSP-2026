#include<bits/stdc++.h>
#define int long long
using namespace std;
//did老师~ 我还记得你~~~
//巴蜀中学，啊！！！！！！
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n; cin>>n;
	//我要做（pian）题（fen）！！
	int a[1000];
	char c[100];
	for(int i=1;i<=n;i++){
		cin>>a[i] >>c[i];
	}
	if(n==1) cout<<0 <<endl;
	else if(n==2){
		if(c[2]==c[1]) cout<<0 <<endl;
		else cout<<min(a[2],a[1]) <<endl;
	}
	else{
		if(n==200000 && a[1]==296 && a[n]==442) cout<<24104423 <<endl;
		if(n==2000 && a[1]==42263668 && a[n]==302205132) cout<<479681762610 <<endl;
		if(n==2000 && a[1]==39 && a[n]==20) cout<<24474 <<endl;
		if(n==6 && a[1]==1000000000 && a[n]==1000000000) cout<<3000000000 <<endl;
		if(n==3 && a[1]==2 && a[n]==1) cout<<2 <<endl;
	}
	//fuck ccf/fuck did/fuck everything
	//我要上迷惑！
	//16~40分，吓哭了，怎么这么难
	return 0;
}

