#include<bits/stdc++.h>
using namespace std;

int n, m, b, r[200003];
bool ch[200003];
string a[200003];
int ans;

string to2(int x){
	string k; int l=0;
	while(x>0){
		k+=(char)(x%2+'0');
		x/=2; l++;
	}
	if(b<l) b=l;
	return k;
}

void bu(string &s){
	int lens=b-s.size();
	for(int i=1;i<=lens;i++) {
		s+="0";
	}
	for(int i=0;i<s.size()/2;i++){
		swap(s[i],s[s.size()-1-i]);
	}
}

int encode(string s){
	int an=0;
	for(int i=0;i<s.size();i++){
		an+=pow(2, b-1-i) * (int)(s[i]-'0');
	}
	return an;
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	b=-1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		a[i]=to2(x);
	}
	
	for(int i=1;i<=n;i++) bu(a[i]);
	
	sort(a+1,a+n+1);
	
	for(int i=0;i<=b-i;i++){
		int cnt=0;
		for(int j=n;j>0;j--){
			if(a[j][i]=='1'){
				cnt++; ch[j]=true;
			}
		}
		if(cnt<m) for(int j=1;j<=n;j++) ch[j]=false;
		else for(int j=1;j<=n;j++) {
			if(!ch[j]) a[j]="000000000000000000000000000000000"; ch[j]=false;
		}
		
	}
	
	int ti=0;
	
	for(int i=1;i<=n;i++){
		if(a[i]!="000000000000000000000000000000000"){
			r[++ti]=encode(a[i]); 
		}
	}
	
	ans=r[ti];
	for(int i=1;i<=m-1;i++){
		ans=ans&r[ti-i];
	}
	cout<<ans;
	return 0;
}
