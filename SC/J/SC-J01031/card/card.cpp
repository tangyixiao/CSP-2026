#include<bits/stdc++.h>
using namespace std;
string jinzhi(int a){
	string s; 
	while(1){
		s+=(a%2+'0');
		
		if(a/2==1){
			break;
		}
		a=a/2;
	}
	s+=(a%2+'0');
	string v;
	int len=s.size();
	for(int i=len-1;i>=0;i--){
		v+=s[i];
	}
	return v;
}
int bidui(string a,string b){
	int cnt=0;
	int lena=a.size(),lenb=b.size();
	int lenc;
	if(lena!=lenb){
		if(lena>lenb){
			lenc=lena-lenb;
			for(int i=1;i<=lenc;i++){
				b+='0';
			}
		}else{
			lenc=lenb-lena;
			for(int i=1;i<=lenc;i++){
				a+='0';
			}
		}
	}
	int l=a.size();
	int lc=a.size();
	int y=1;
	for(int i=l-1;i>=1;i--){
		if(a[i]==b[i]){
			cnt=cnt+y;
		} 
		y=y*2;
	}
	return cnt;
} 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	const int N=n+10;
	int a[N];
	int ma=-1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-1;i++){
		ma=max(ma,bidui(jinzhi(a[i]),jinzhi(a[i+1])));
	}
	cout<<ma;
}
