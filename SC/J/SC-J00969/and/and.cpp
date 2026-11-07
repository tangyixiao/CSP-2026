#include<bits/stdc++.h>
//#define int long long
using namespace std;
int dplus[35];
int ndplus[35];
string turntwo(int a){
	int d[35];
	int cnt=0;
	int x=a;
	while(a){
		d[cnt]=a%2;
		dplus[cnt]+=d[cnt];
//		cout<<"a="<<x<<" cnt="<<cnt<<" dplus["<<cnt<<"]+="<<d[cnt]<<'\n';
		cnt++;
		a/=2;
	}
//	string s="";
//	for(int i=cnt-1;i>=0;i--){
//		char c=char(d[i]+'0');
//		s+=c;
//	}
	string s="";
	for(int i=0;i<cnt;i++){
		char c=char(d[i]+'0');
		s+=c;
	}
//	cout<<s<<'\n';
	return s;
}
bool tf[200005];
int A[200005];
vector<string> S(200005);
//signed main() {
int main() {
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int maxlen=0;
	for(int i=0;i<n;i++){
		cin>>A[i];
		S[i]=turntwo(A[i]);
		maxlen=max(int(S[i].length()),maxlen);
//		cout<<S[i]<<'\n';
	}
	for(int i=0;i<=33;i++){
		ndplus[i]=dplus[i];
	}
	for(int i=0;i<n;i++){
		bool flag=false;
//		cout<<"i="<<i<<" S[i].length()-1="<<S[i].length()-1<<'\n';
		for(int j=S[i].length()-1;j>=0;j--){
//			cout<<"S["<<i<<"]["<<j<<"]="<<S[i][j]<<'\n';
			if(j==int(S[i].length()-1)&&dplus[j+1]>=m&&j+1<maxlen){
				flag=true;
				tf[i]=j;
				ndplus[j]--;
				continue;
//				cout<<'\n';
//				cout<<'\n';
			}
			if(dplus[j]<m) continue;
			if(flag==true&&S[i][j]=='1'){
				ndplus[j]--;
				continue;
			}
			if(S[i][j+1]=='1'){
				if(dplus[j+1]>=m){
					if(S[i][j]=='0'){
						flag=true;
						tf[i]=j;
					}
				}
			}
		}
	}
//	for(int i=0;i<=33;i++) cout<<ndplus[i];
//	cout<<'\n';
	int ans=-1;
	for(int i=33;i>=0;i--){
		if(ndplus[i]>=m){
			ans=i;
			break;
		}
	}
//	cout<<ans<<'\n';
	int asn=-1;
	int tmp=0;
	for(int i=n-1;i>=0;i--){
//		cout<<S[i]<<' '<<S[i][0]<<'\n';
		if(S[i][ans]=='1'&&tf[i]<ans){
//			cout<<A[i]<<'\n';
			if(asn==-1){
				asn=A[i];
			}
			else asn=asn&A[i];
			tmp++;
			if(tmp==m) break;
		}
	}
	cout<<asn;
	return 0;
}