#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
typedef long long ll;
ll ans[N],m,n,a[N];
string s=" ";
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
//	for(int ds=1;ds<=m;ds++){
//		for(int i=1;i<=n;i++){ //第i局
//			for(int j=i;j<=n;j++){
//				char koi=char(a[j]+'0');	
//				int len=s.size();
//				bool flag=true;
//				for(int k=1;k<=len;k++){
//					if(s[k]==koi){
//						flag=false;
//						break;
//					}
//				}
//				if(flag){
//					s+=koi;
//				}
//				
//			}
//			int len=s.size();
//			for(int j=1;j<=len;j++){
//				if(s[j]-'0'==ds){
//					ans[ds]++;
//					break;
//				}
//			}
//			s=" ";
//		}
//	}
	for(int i=1;i<=m;i++){
		cout<<0<<' ';
	}
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/