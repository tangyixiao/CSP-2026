#include<bits/stdc++.h>
using namespace std;
struct charp {
	long long cnt;
	char c;
};
charp q[999999];
charp u;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,kuai=0;
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin >>u.cnt>>u.c;
		if(q[kuai].c==u.c) {
			q[kuai].cnt+=u.cnt;
		} else {
			kuai++;
			q[kuai]=u;
		}
	}
	int l=1,r=kuai;
	long long ans=0;
	while(l<r) {
		if(q[l].cnt>q[r].cnt) {
			q[l].cnt-=q[r].cnt;
			if(q[l].c!=q[r].c) {
				ans+=q[r].cnt;
			}
			r--;
		} else if(q[l].cnt<q[r].cnt){
			q[r].cnt-=q[l].cnt;
			if(q[l].c!=q[r].c){
				ans+=q[l].cnt;
			}
			l++;
		}else{
			if(q[l].c!=q[r].c){
				ans+=q[l].cnt;
			}
			l++,r--;
		}
	}
	cout<<ans;
	//system("FC.exe XXX.out XXX.ans");
	return 0;
}
