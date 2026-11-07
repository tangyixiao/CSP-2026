#include<bits/stdc++.h>
using namespace std;
char c[10005];int n1;
int dp(long long i,long long j){
	if(i==j) return 0;
	if((i==j-1 || i==j-2) && c[i]==c[j]) return 0;
	if((i==j-1 || i==j-2) && c[i]!=c[j]) return 1;
	if(c[i]==c[j]) return dp(i+1,j-1);
	else return dp(i+1,j-1)+1;
}
int er(int a,int b){
	for(int i=min(a,b);i>0;i--){
		if(a%i==0 && b%i==0)
		return i;
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	cin>>n1;
	int a[10005];
	char b[10005];
	long long q=0;

	for(int i=0;i<n1;i++){
		cin>>a[i]>>b[i];
	}
	int w=a[1];
	for(int i=0;i<n1;i++){
		w=er(w,a[i]);
	}
	for(int i=0;i<n1;i++){
		a[i]=a[i]/w;
		for(int j=q;j<q+a[i];j++){
			c[j]=b[i];
		}
		q+=a[i];
	}
	cout<<dp(0,q-1)*w;
    fclose(stdin);
	fclose(stdout);
	return 0;
}
