#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n,a,cn=0,l=0;
	char c;
	string s="",s1="",s2="";
	cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a>>c;
			for(int j=1;j<=a;j++){
				s+=c;
			}
		}
		l=s.size();
		for(int i=0;i<l/2;i++){
			if(s[i]!=s[l-i-1]){
				cn++;
			}
		}
	cout<<cn<<endl;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
