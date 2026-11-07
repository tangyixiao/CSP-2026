#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a,b;cin>>a>>b;
	string c="";
	vector<int> c1(b+1,0);
	for(int i=0;i<a;i++){
		char x;cin>>x;
		c+=x;
	}string d=c;
	for(int i=0;i<a;i++){
		for(int j=i;j<a;j++){
			if(c.find(d[j])==0){
				c.erase(j+1);
				for(int k=0;k<j;k++){
					if(c[k]==d[j]){
						c.erase(k,k);
					}
				}
			}c+=d[j];
		}for(int j=1;j<=b;j++) if(c.find(j)==0 || c.find(j)==1) c1[j]++;
	}for(int i=1;i<=b;i++) cout<<c1[i]<<" ";
	return 0;
}
