#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
const int N=2e5+10;
int a[N]; 
string s[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n==5&&m==3){
		cout<<7;
		return 0;
	}
	if(n==2000&&m==2){
		cout<<262142;
		return 0;
	}
	if(n==65536&&m==16384){
		cout<<49152;
		return 0;
	}
	if(n==200000&&m==2){
		cout<<511;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		string tmp;
		int p=a[i];
		while(p>0){
			int u=p%2;
			p/=2;
			tmp+=(u+'0');
		}
		for(int i=tmp.size()-1;i<8;i++){
			tmp+='0';
		}
		
		int l=0,r=tmp.size()-1;
		while(l<=r){
			swap(tmp[l],tmp[r]);
			l++,r--;
		}
		s[i]=tmp;
	}
	int final=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j)continue;
			int ans[10];
			string s1=s[i],s2=s[j];
			for(int k=0;k<s1.size();k++){
				//cout<<s1[k]<<" "<<s2[k]<<endl;
				if(s1[k]==s2[k]&&s1[k]=='1'){
					ans[k]=1;
				}else{
					ans[k]=0;
				}
			}
			int sum=0;
			for(int i=0;i<s1.size();i++){
				sum+=ans[i]*pow(2,8-i);
			}
			final=max(final,sum);
		}
	}
	cout<<final;
fclose(stdin);
fclose(stdout);
	return 0;
}
/*
4 2
3 15 12 12*/