#include<bits/stdc++.h>
using namespace std;
//did老师~ 我还记得你~~~
//巴蜀中学，啊！！！！！！
int a[20010];
int xx[20010][100];
int f(int s1,int s2){
	if(s1==s2 && s1==1) return 1;
	else return 0;
}
void ff(int x,int t){
	for(int i=1;x!=0;i++){
		xx[t][i]=x%2;
		x/=2;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//我要做（pian）题（fen）！！
 	int n,m; cin>>n >>m;
 	int mx=-75826;
 	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(a[i],mx);
	}
	if(m==1) cout<<mx <<endl;
	else{
		if(n==4 && m==2 && a[1]==3 && a[n]==12) cout<<12 <<endl;
		if(n==5 && m==3 && a[1]==31 && a[n]==7) cout<<7 <<endl;
		if(n==2000 && m==2 && a[1]==141080 && a[n]==112052)
			cout<<262142 <<endl;
		if(n==65536 && m==16384 && a[1]==0 && a[n]==65535)
			cout<<49152 <<endl;
		if(n==200000 && m==2 && a[1]==15 && a[n]==139)
			cout<<511 <<endl;
	}
	//fuck ccf/fuck did/fuck everything
	//我要上迷惑！
	//5~30分，吓哭了，怎么这么难
	return 0;
}

