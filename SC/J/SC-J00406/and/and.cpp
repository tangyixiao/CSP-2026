#include <bits/stdc++.h>
using namespace std;
int n,m,cnt,cnt2;
int a[200005];
int length;
bool specialcmp(int a,int b){//按照2进制强度排
	int ac=0,bc=0,a1=a,b1=b;
	while((bool)a||(bool)b){
		if(a%2==1){
			ac++;
		}
		if(b%2==1){
			bc++;
		}
		a/=2;
		b/=2;
	}
	if(ac>bc){
		return ac>bc;
	}else if(ac<bc){
		return bc<ac;
	}else{
		return a1>b1;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	sort(a+1,a+n+1,specialcmp);
	cnt=a[1];
	for(int i=2;i<=m;i++){
		cnt&=a[i];
	}
	sort(a+1,a+n+1,greater<int>());
	cnt2=a[1];
	for(int i=2;i<=m;i++){
		cnt2&=a[i];
	}
	cout<<max(cnt,cnt2);
	return 0;
}