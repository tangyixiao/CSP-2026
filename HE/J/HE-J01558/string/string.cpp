#include<bits/stdc++.h>
using namespace std;

const int ma=2e5+5;
int n;
long long a[ma],ans,e,f=1,k;
char b[ma];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >>n;
	e=n;
	for (int i=1;i<=n;i++){
		cin >>a[i]>>b[i];
	}
	while(true){
		if (b[f]!=b[e]) {
			ans+=min(a[f],a[e]);
			if (a[f]>a[e]){
				a[f]-=a[e];
				e--;
			}
			else{
				if (a[f]<a[e]){
					a[e]-=a[f];
					f++;
				}
				else{
					a[f]=0;
					a[e]=0;
					e--;
					f++;
				}
			}
		}
		else{
			if (a[f]>a[e]){
				a[f]-=a[e];
				e--;
			}
			else{
				if (a[f]<a[e]){
					a[e]-=a[f];
					f++;
				}
				else{
					a[f]=0;
					a[e]=0;
					e--;
					f++;
				}
			}
		}
		if (e<=f){
			break;
		}
	}
	cout <<ans;
	return 0;
}
