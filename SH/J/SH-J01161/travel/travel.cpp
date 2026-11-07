#include <bits/stdc++.h>
using namespace std;
int tonum(string s){
	int l=s.size();
	int ans=0;
	for(int i=0;i<l;i++){
		if(s[i]>'9' || s[i]<'0') continue;
		ans*=10;
		ans+=(s[i]-'0');
		
	} 
	return ans;
}
bool row(char a,char b){
	if( ('A'<=a) && (a<='C') ) return (('A'<=b) && (b<='C'));
	if( ('D'<=a) && (a<='F')) return (('D'<=b) && (b<='F'));
}
int near(char a,char b){
	if(a=='A' && b=='B') return 1;
	if(a=='B' && b=='A') return 1;
	if(a=='B' && b=='C') return 1;
	if(a=='C' && b=='B') return 1;
	if(a=='D' && b=='F') return 1;
	if(a=='F' && b=='D') return 1;
	return 0;
}
string a1,a2,b1,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	cin>>a1>>a2>>b1>>b2;
	int n1=tonum(a1),m1=tonum(b1);
	char x1=a2[a2.size()-1],x2=b2[b2.size()-1];

	int n2=tonum(a2),m2=tonum(b2);
	//cout<<n1<<' '<<n2<<' '<<m1<<' '<<m2<<' ';
	//cout<<x1<<' '<<x2<<endl;
	cout<<(n1==m1);
	cout<<((n2==m2) && (n1==m1));
	if((n1==m1) && (n2==m2) ) cout<<row(x1,x2);
	else cout<<0;
	if((n1==m1) && (n2==m2) )cout<< near(x1,x2); 
	else cout<<0;
	return 0;
} 
