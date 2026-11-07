#include <bits/stdc++.h>
using namespace std;
struct b{
	int a;
	int c;
}b[200005];
char s;
int n,d,e,tg;
long long l;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	d=1;
	e=n;
	for(int i=1;i<=n;i++){
		cin >> b[i].a >> s;
		b[i].c=int(s);
		l+=b[i].a;
	}
	int mid=l/2;
	if(1){
		for(int i=1;i<=mid;i++){
			if(b[d].c==b[e].c){
				tg=min(b[d].a,b[e].a);
				if(b[d].a>b[e].a){
					b[d].a-=b[e].a;
					b[e].a=0;
					e--;
				}
				else if(b[d].a>b[e].a){
					b[e].a-=b[d].a;
					b[d].a=0;
					d++;
				}
				else{
					b[e].a=0;
					e--;
					b[d].a=0;
					d++;
				}
			}
			else{
				tg=min(b[d].a,b[e].a);
				ans+=tg;
				if(b[d].a>b[e].a){
					b[d].a-=b[e].a;
					b[e].a=0;
					e--;
				}
				else if(b[d].a>b[e].a){
					b[e].a-=b[d].a;
					b[d].a=0;
					d++;
				}
				else{
					b[e].a=0;
					e--;
					b[d].a=0;
					d++;
				}
			}
			i+=tg-1;
		}
	}
	cout << ans;
	return 0;
}
