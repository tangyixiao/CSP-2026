#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[20001];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int s[20001];
	string b[20001];
	for(int i=0;i<n;i++){
		b[i]="";
		s[i]=0;
		while(a[i]>0){
			char p;
			p=a[i]%2+'0';
			b[i]+=p;
			a[i]/=2;
			s[i]+=1;
		}
	}
	string bj[m];
	int ans=0;
	for(int i=0;i<n;i++){
		int o=0;
		int bs=99999;
		if(i+m>=n){
			for(int j=i;j<n;j++){
				bj[o]=b[i];
				if(bs>s[i]){
					bs=s[i];
				} 
				o++;
			}
			for(int j=0;j<i+m-n;j++){
				bj[o]=b[j];
				if(bs>s[i]){
					bs=s[i];
				} 
				o++;
			}
		}
		else{
			for(int j=i;j<i+m;j++){
				bj[o]=b[j];
				if(bs>s[i]){
					bs=s[i];
				}
				o++;
			}
		}
		string p="";
		for(int j=0;j<m;j++){
			bool t=1;
			for(int z=0;z<bs;z++){
				if(bj[j][z]=='0'){
					t=0;
				}
			}
			if(t==0){
				p+='0';
			}
			else{
				p+='1';
			}
		}
		int w=0;
		for(int j=0;j<p.size();j++){
			w=w+pow(2,j)*(p[j]-'0');
		}
		if(ans<w){
			ans=w;
		}
	}
	cout<<ans;
	return 0;
}
