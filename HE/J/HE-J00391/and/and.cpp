#include<bits/stdc++.h>
using namespace std;
const int maxn=2*100000+10;
int n,m,ans1=0,ans=0;
int a[maxn];
string b[maxn];
string er(int x){
	string y;
	int cnt=1;
	while(x>0){
		if(x%2==0){
			y[cnt]+='0';
			x/=2;
		}else{
			y[cnt]+='1';
			x/=2;
		}
		cnt++;
	}
	return y;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=er(a[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=b[i].size();j++){
			bool flag=true;
			for(int k=i;k<=m+i;k++){
				if(b[k]!="1"){
					flag=false;
					break;
				}
			}
			if(flag) ans1++;
		}
		ans=max(ans,ans1);
	}
	cout<<ans;
	return 0;
} 
