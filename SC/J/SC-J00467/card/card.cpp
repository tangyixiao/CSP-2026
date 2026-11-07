#include<bits/stdc++.h>
using namespace std;
int a[100000001],b[1145141];
string s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
    }
    for(int i=1;i<=n;i++){
    	s="";
    	for(int j=i;j<=n;j++){
    		int c;
    		char x=a[j]+'0';
    		c=s.find(x,0);
			if(c<=s.size()) s.erase(c,s.size()-c);
    	    s+=x;
		}
		while(s.size()){
			b[s[0]-'0']++;
			s.erase(0,1);
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
