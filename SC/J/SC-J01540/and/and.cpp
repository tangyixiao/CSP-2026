#include<bits/stdc++.h>
using namespace std;
long long a[200010];
bool b[200010][33];
bool cmp(int a,int b){
	return a>b;
}
bool ans[35];
bool dd[200010];
int check(int x){
	int f=0;
	while(x!=0){
		x/=2;
		f++;
	}
	return f;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin >>n>>m;
	int l=0,k=0;
	for(int i=1;i<=n;i++){
		cin >>a[i];
		l=a[i];
		k=0;
		while(l!=0){
			k++;
			b[i][k]=l%2;
			l/=2;
		}
	}
	for(int i=31;i>=1;i--){
		long long sa=0;
		for(int j=1;j<=n;j++){
			if(dd[j]==0){
			if(b[j][i]==1)sa++;
			}
		}
		if(sa>=m){
			ans[i]=1;
			for(int j=1;j<=n;j++){
			if(b[j][i]==0)dd[j]=1;
		}
		}
	}
	long long cnt=0;
	for(int i=1;i<=31;i++){
		if(ans[i]==1){
			cnt+=1<<(i-1);
		}
	}
	cout <<cnt;
	return 0;
}



