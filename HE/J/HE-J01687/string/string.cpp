#include<bits/stdc++.h>
using namespace std;
string s;
char a;
long long  n,m,c,w;
int main(){
//	ios::sync_with_stdio(0);
//	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>m;
		cin>>a;
		for(long long j=1;j<=m;j++){
			s+=a;
		}
		w+=m;
	}
//	cout<<s;
//cout<<(w>>1); 
	for(long long i=0;i<(w>>1);i++){
		
		if(s[i]!=s[w-1-i]){
//			cout<<s[i]<<" "<<s[w-1-i];
			c++;
//			cout<<s[w-i]<<endl;
			s[w-1-i]=s[i];		
		}
	}
	cout<<c;
	fclose(stdin);
	fclose(stdout);
	return 0;
	
}
//6
//1000000000 a
//1000000000 a
//1000000000 a
//1000000000 b
//1000000000 b
//1000000000 b
