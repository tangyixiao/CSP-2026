#include<bits/stdc++.h>
using namespace std;
int n,x,m[20010];
long long s=0,ss=0;
int a[20010][50],b[50];
int AND(int &x,int &s,int &m){
	x--;
	int b1=s;
	int l=1;
	while(b1>=1){
		b[l]=b1%2;
		b1/=2;
		l++;
	}
	if(x>=1){
		for(int i=m-x;i<=n-x+1;i++){
			int l=1;
			int p=1;
			for(int j=1;j<=30;j++){
				if(a[i][l]==b[l]){
					s+=p;
					l++;
				}
				p*=2;
			}
		}
		if(x==1&&s>ss){
			ss=s;
		}
		AND(x,s,m);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=50;j++){
			a[i][j]=-1;
		}
	}
	for(int i=1;i<=n;i++){
		cin>>m[i];
		int b=m[i];
		int l=1;
		while(b>=1){
			a[i][l]=b%2;
			b/=2;
			l++;
		}
	}
	for(int i=1;i<=n;i++){
		AND(x,m[i],x);
	}
	cout<<ss;
	return 0;
} 
