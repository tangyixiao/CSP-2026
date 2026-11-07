#include<bits/stdc++.h>
using namespace std;

const int N=2e5+10;
int maxn=INT_MIN;
long long s[N];
string sa[N];
int len[N];

string ans="";

string er(long long a){
	string x=" ",y=" ";
	long long mo=0;
	while (a>0){
		mo=a%2;
		a/=2;
		x+=(mo+'0');
	}
//	cout<<"x"<<x<<'\n';
	int lx=int(x.size());
	for (int i=lx-1;i>=0;i--){
		y+=x[i];
	}
	
	return y;
}

int andn(string a,string b){
	long long ren=0,cnt=1;
	int lena=a.size();
	int lenb=b.size();
	int ml=max(lena,lenb);
	
	for (int i=ml-1;i>=0;i--){
		int res;
		if (a[i]=='1' && b[i]=='1') res==1;
		else res=0;
		//cout<<"a[i "<<a[i]<<"  b[i "<<b[i]<<'\n';
		//cout<<"res  "<<res<<"\n";
		ren+=res*(pow(2,cnt));
		cnt++;
	}
	return ren;
}

int main()
{
freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n,m;
	cin>>n>>m;
	int cnt=m;
	for (int i=1;i<=n;i++){
		cin>>s[i];
		sa[i]=er(s[i]);
	}
	int mx=0;
	if (m==2){
		for (int i=1;i<=n;i++){
			for (int j=i+1;j<=n;j++){
				
			}
		}
	}
	//cout<<andn("1100","1111")<<'\n';
	
	cout<<s[1];
	return 0;
}
