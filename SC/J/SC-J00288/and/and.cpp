#include <bits/stdc++.h>
freopen("and.in",r,stdin);
freopen("and.out",w,stdout);

using namespace std;

int n,m;
long long a[200050];

int cg(int x,int y){
	int q=x-y,num=0,s=1;
	if(q==0)return 1;
	while(num<30){
		if(q==s)return 1;
		num++;
		s*=2;
	}
	return 0;
}

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	sort(a+1,a+n+1);
	int p=n;
	if(m==1&&p==n){
	cout<<a[p];
	return 0;}
	for(int j=1;j<m;j++){
	for(int i=p-1;i>=1;i--){
	if(cg(a[p],a[i])){
	p=i;
	break;}
	}
	}
	
	if(m!=1&&p==n)cout<<0;
	else cout<<a[p];
	  
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}