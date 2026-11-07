#include<bits/stdc++.h>
using namespace std;
const int N=200009;
int a[N],m,n,cnt=1,ans=0;
void mshi1(){
	int mx=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	cout<<mx;
}
int mi(int c){
	int be=1;
	while(c){
		c--;
		be*=2;
	}
	return be;
}
int check(int w){
	int cns=0,j=0,b[N];
	for(int i=1;i<=n;i++){
		int k=(a[i]/mi(w))%2;
		if(k==1){
			cns++;
			j++;
			b[j]=a[i];
		}
	}
	if (cns>=m){
		n=j;
		for(int i=1;i<=n;i++){
			a[i]=b[i];
		}
		return 1;
	}
	return 0;
}
int searchthemax(){
	int w=2;
	while(w<a[n]){
		w*=2;
		cnt++;
	}
	if(w!=a[n]){
		cnt--;
	}
	return cnt;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==1){
		mshi1();
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	searchthemax();
	for(int i=cnt;i>=0;i--){
		if(check(i)==1){
			ans+=mi(i);
		}
	}
	cout<<ans<<endl;
}
