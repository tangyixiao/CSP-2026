#include<bits/stdc++.h>
using namespace std;
string s,z;
char a[500005];
int b[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=1;j<=n;j++){
		for(int i=j;i<=n;i++){
			int c=s.find(a[i]);
			if(c!=-1){
				for(int i=0;i<c;i++){
					z+=a[i];
				}
				s="";
				s+=z;
				z="";
			}
			s+=a[i];
		}
		for(int i=0;i<=s.size()-1;i++){
			int q=s[i];
			b[q-48]++;
		}
		s="";
		z="";
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return  0;
}