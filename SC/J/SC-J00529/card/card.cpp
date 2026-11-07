#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],b[500005];
string s,t,h;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s+=char(a[i]+'0');
	}
	h=s;
	for(int k=0;k<n;k++){
		s=h;
		s.erase(0,k);
		t=s;
		//cout<<t<<" ";
		for(int i=0;i<t.size();i++){
			for(int j=i+1;j<t.size();j++){
				if(i==j)continue;
				if(t[i]==t[j]){
					//cout<<t[i]<<" "<<t[j]<<" "<<i<<" "<<j<<" ";
					if(i==0){
						t.erase(i,j);
					}
					else t.erase(i,j-1);
					i=0;
					j=1;
					//cout<<t<<" "; 
				}
			}
		}
		//cout<<t<<endl;
		for(int i=0;i<t.size();i++){
			b[t[i]-'0']++;
		}
	}
	for(int i=1;i<=m;i++)cout<<b[i]<<" ";
	return 0;
}