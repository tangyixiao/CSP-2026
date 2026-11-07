#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int n,o,m,p[200007],ans[200007],s[200007];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	for(int i=0;i<n;i++){
		o=0;
		memset(s,0,sizeof(s));  
		for(int j=i;j<n;j++){
			for(int k=0;k<o;k++){
				if(s[k]==p[j]){
					o=k;
					break;
				}
			}
			s[o]=p[j];
			o++;
		}
		for(int j=0;j<o;j++){
			ans[s[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	//_(0,p[0],0);
	
}
