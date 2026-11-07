#include<bits/stdc++.h>
using namespace std;
string a,aa,b,bb;
int m,n,k,l;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>aa>>b>>bb;
	if(a==b){
		m++;
		if(aa[0]==bb[0]&&aa[1]==bb[1]){
			n++;
			if((aa[2]<='C'&&bb[2]<='C')||(aa[2]>'C'&&bb[2]>'c')){
				k++;
				if(aa[2]+1==bb[2]||aa[2]-1==bb[2]){
					l++;
				}
			}
		}
	}
	cout<<m<<n<<k<<l;
} 