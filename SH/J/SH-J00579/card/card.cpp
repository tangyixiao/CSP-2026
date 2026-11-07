#include<bits/stdc++.h>
using namespace std;
string a[500010];
int cnt[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int q=1;q<=n;q++){
		string b="";
		int ct=0;
		for(int i=q;i<=n;i++){
			ct+=a[i].size();
			if(b.find(a[i])!=string::npos){
				b.erase(b.find(a[i]),ct-b.find(a[i])-1);
			}
			b+=a[i];
			b+='a';
			ct++;
		}
		int s=0;
		for(int i=0;i<b.size();i++){
			if(b[i]!='a'){
				s*=10;
				s+=b[i]-'0';
			}
			else{
				cnt[s]++;
				s=0;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
