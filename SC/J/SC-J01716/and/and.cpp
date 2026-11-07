#include<bits/stdc++.h>
using namespace std;
int a[200010];
int b[200010];
int c[200010];
int n,m;

int dfs(int k,int s){
	int num=0;
	for(int i=s;i<=n-m+k;i++){
		if(k==m)num=max(num,a[i]);
		else num=max(num,a[i]&dfs(k+1,i+1));
	}
	return num;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(n<=20){
		cout<<dfs(1,1);
	}
	else if(m==1){
		int num=0;
		for(int i=1;i<=n;i++)
			num=max(num,a[i]);
		cout<<num;
	}
	else if(m==n){
		int num=a[1];
		for(int i=2;i<=n;i++)
			num&=a[i];
		cout<<num;
	}
	else if(m==2){
		int num=0;
		for(int i=1;i<1+n;i++)
			for(int j=i+1;j<1+n;j++)
				num=max(num,a[i]&a[j]);
		cout<<num;
	}else if(m==n-1){
		b[1]=a[1];
		for(int i=2;i<=n;i++)b[i]=b[i-1]&a[i];
		c[n]=a[n];
		for(int i=n-1;i>0;i--)c[i]=c[i+1]&a[i];
		int num=0;
		for(int i=1;i<=n;i++){
			if(i==1)num=max(num,c[i+1]);
			else if(i==n)num=max(num,b[i-1]);
			else num=max(num,c[i+1]&b[i-1]);
		}
		cout<<num;
	} 
	return 0;
}
