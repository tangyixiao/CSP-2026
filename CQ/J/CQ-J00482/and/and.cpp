#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
	int n,m,ma,a[N],c[100];
	string b[N];
	vector<string>v[N];
string ejz(int n){
	string s="";
	while(n){
		s=char((n%2)+'0')+s;
		n/=2;
	}
	return s;
}
int sjz(string s){
	int t=0;
	for(int i=0;i<s.size();i++)	t=t+int(s[i]-'0')*pow(2,i);
	return t;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=ejz(a[i]);
		for(int j=0;j<b[i].size();j++){
			if(b[i][j]=='1'){
				c[j]++;
				v[j].push_back(b[i]);
			}
		}
	}
	int k=0;
	for(int i=0;i<32;i++){
		if(c[i]>=m){
			k=i;
			break;
		}
	}
	string s="";
	for(int i=0;i<32;i++){
		bool f=m;
		for(int j=0;j<v[k].size();j++){
			if(v[k][j][i]!='1')f-=1;
			if(f==0)break;
		}
		if(f==0)s+=char(0+'0');
		else s+=char(1+'0');
	}
	cout<<sjz(s);
	return 0;
}
