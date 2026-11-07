#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[2000005];
char c[2000005];
int n;
int sm;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sm+=a[i];
	}
	int pos=0;
	if(sm%2==0)pos=sm/2;
	else pos=(sm-1)/2;
	/*
	还剩2:30的时候发现萎了
	哈哈，J组T2？？
	12min 过了
	*/
	int l=1,r=n;
	int sl=0,sr=0;
	int res=0;
	while(1){
//		cout<<l<<" "<<r<<endl;
		int nl=a[l],nr=a[r],dr=0,dl=0;
		sl+=nl,sr+=nr;
		if(sl>sr){
			sl-=nl-nr;
			nl=nr;
			a[l]-=a[r];
			dr--;
		}else{
			sr-=nr-nl;
			nr=nl;
			a[r]-=a[l];
			dl++;
		}
		
		if(sl>pos){
			nl-=sl-pos;
			nr-=sr-pos;
			sl=pos,sr=pos;
		}
//		cout<<nl<<" "<<nr<<endl;
		if(c[l]!=c[r]){
			res+=nl;
		}
		if(sl==pos)break;
		l+=dl;r+=dr;
	}
	cout<<res;
	return 0;
}