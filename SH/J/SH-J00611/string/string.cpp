#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,a,cnt1,cnt2,ans;
char c;
struct node{
	int n;
	char c;
};
node sa[200005],sb[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	cnt2=n+1;
	for(int i = 1;i <= n;i++){
		cin >> a >> c;
		cnt1++;
		if(c == sa[cnt1-1].c){
			cnt1--;
			sa[cnt1].n+=a;
		}else{
			sa[cnt1].c = c;
			sa[cnt1].n = a;
		}
		cnt2--;
		if(c == sb[cnt2+1].c){
			cnt2++;
			sb[cnt2].n+=a;
		}else{
			sb[cnt2].n=a;
			sb[cnt2].c=c;
		}
	}
	int nowa=1,nowb=1;
	char ca,cb;
	for(int i = 1,j = cnt2;i <= cnt1 && j <= n;){
		if(nowa == nowb){
			ca = sa[i].c;
			cb = sb[j].c;
		}else if(nowa > nowb){
			cb=sb[j].c;
		}else{
			ca=sa[i].c;
		}
		if(ca != cb){
			if(nowa > nowb){
				if(nowb + sb[j].n >= nowa) ans += nowa-nowb;
				else ans += sb[j].n;
				nowb += sb[j].n;
			}else if(nowa < nowb){
				if(nowa + sa[i].n >= nowb) ans += nowb-nowa;
				else ans += sa[i].n;
				nowa += sa[i].n;
			}else{
				ans += min(sa[i].n,sb[j].n);
				nowa += sa[i].n;
				nowb += sb[j].n;
			}
		}else{
			if(nowa > nowb){
				nowb += sb[j].n;
			}else if(nowa < nowb){
				nowa += sa[i].n;
			}else{
				nowa += sa[i].n;
				nowb += sb[j].n;
			}
		}
		if(nowa > nowb){
			j++;
		}else if(nowa < nowb){
			i++;
		}else{
			i++;
			j++;
		}
	}
	int aans = ceil(ans/2.0);
	cout << aans;
	return 0;
}
