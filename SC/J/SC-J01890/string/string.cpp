#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,sum;
int s[200005];
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> s[i] >> c[i];
	}
	int p=1,q=n;
	while(p<=q){
		if(c[p]!=c[q]){
			if(s[p]>s[q]){
				sum+=s[q];
				s[p]-=s[q];
				s[q]=0;
				q--;
			}else if(s[p]==s[q]){
				sum+=s[q];
				s[p]=0;
				s[q]=0;
				q--;
				p++;
			}else{
				sum+=s[p];
				s[p]=0;
				s[q]-=s[p];
				p++;
			}
		}else{
			if(s[p]>s[q]){
				s[p]-=s[q];
				s[q]=0;
				q--;
			}else if(s[p]==s[q]){
				s[p]=0;
				s[q]=0;
				q--;
				p++;
			}else{
				s[p]=0;
				s[q]-=s[p];
				p++;
			}
		}
	}
	cout << sum;
}