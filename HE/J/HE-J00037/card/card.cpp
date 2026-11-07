#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,n_v[600000],n_is[400000],n_n[400000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	//-------------------------------------
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>n_v[i];
	for(int k=1;k<=n;k++){
		string s;
		for(int i=k;i<=n;i++){
			if(n_is[n_v[i]]==0){
				s=s+char(n_v[i]+'0');
				n_is[n_v[i]]=1;
				//cout<<n_v[i]<<endl; 
			}
			else{
				int step=s.find(char(n_v[i]+'0'));
				string s_2;
				for(int j=step;j<s.size();j++) n_is[int(s[j]+'0')]=0;
				for(int j=0;j<step;j++) s_2+=s[j];
				s=s_2+char(n_v[i]+'0');
				n_is[n_v[i]]=1;
				//cout<<s<<endl;
			}
		}
		//cout<<s<<endl<<endl;
		for(int g=0;g<s.size();g++){
			n_n[int(s[g]-'0')]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<n_n[i]<<' ';
	}
	//-------------------------------------
	fclose(stdin);
	fclose(stdout);
	return 0;
}  
