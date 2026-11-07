#include<bits/stdc++.h>
using namespace std;

string g(int x){
	int cnt=0,tmp=30;
//	while(tmp){
//		cnt++;
//		tmp/=2;
//	}
//	tmp--;
	string s;
	for(int i=1;i<=30;i++){
		if(pow(2,i)==x){
			for(int j=1;j<=30-i;j++){
				s+='#';
			}
			s+='1';
			for(int j=1;j<=i;j++){
				s+='0';
			}
			return s;
		}
	}
	while(x){
		if(x-pow(2,tmp)>=0){
			x-=pow(2,tmp);
			s+='1';
		}
		else {
			s+='0';
		}
		tmp--;
	}
	for(int i=0;i<=31;i++){
		if(s[i]=='1'){
			break;
		}
		s[i]='#';
	}
//	s[0]='#';
	return s;
}

int f(int a,int b){
	string v1=g(a);
	string v2=g(b);
	int ans[35];
	for(int i=1;i<=30;i++){
		if(v1[i]==v2[i] && v1[i]!='#' && v2[i]!='0'){
			ans[i]=1;
		}
		else {
			ans[i]=0;
		}
	}
	int k=0;
	int l=0;
	for(int i=30;i>=1;i--){
		l+=ans[i]*pow(2,k);
		k++;
//		cout<<ans[i];
	}
	return l;
}

int a[100005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxn=-1;
	cin>>n;
	for(int i=1;i<=n;i++){
		int q;
		cin>>q;
		maxn=max(f(m,q),maxn);
	}
	cout<<maxn;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
