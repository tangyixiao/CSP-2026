#include<bits/stdc++.h>
using namespace std;
int fc(int h){
	int num=1;
	if(h==0){
		return 1;
	}
	for(int i=1;i<=h;i++){
		num*=2;
	}
	return num;
}
int awy(int x,int y){
	int a=x,b=y,cnt=0;
	string ea,eb,ans;
	while(a>0||b>0){
		if(a%2==0){
			ea+='0';
		}
		else{
			ea+='1';
		}
		if(b%2==0){
			eb+='0';
		}
		else{
			eb+='1';
		}
		a/=2;
		b/=2;
	}
	for(int i=max(ea.size(),eb.size())-1;i>=0;i--){
		char t1=ea[i],t2=eb[i];
		if(t1=='1'&&t2=='1'){
			ans+='1';
		}
		else{
			ans+='0';
		}
	}
	for(int i=ans.size()-1;i>=0;i--){
		if(ans[i]=='1'){
			int f=fc(ans.size()-i-1);
			cnt+=f;
		}
	}
	return cnt;
}
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,a[200005];
	int maxn=INT_MIN;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		int cnt=a[i];
		for(int j=1;j<m;j++){
			cnt=awy(cnt,a[i+j]);
		}
		maxn=max(maxn,cnt);
	}
	cout<<maxn;
	return 0;
	fclose(stdin);
	fclose(stdout);
}
