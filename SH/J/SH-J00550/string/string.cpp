#include<bits/stdc++.h>
using namespace std;
long long n,q=1,h,t;
struct ans{
	long long a;
	char c;
}l[500000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>l[i].a>>l[i].c;
	}
	h=n;
	while(q<h){
		if(l[q].c!=l[h].c){
			if(l[q].a>l[h].a){
				t+=l[h].a;
				l[q].a-=l[h].a;
				h--;
			} else if(l[q].a<l[h].a){
				l[h].a-=l[q].a;
				t+=l[q].a;
				q++;
			} else{
				t+=l[q].a;
				h--;
				q++;		
			}
		} else{
			if(l[q].a>l[h].a){
				h++;
			} else if(l[q].a<l[h].a){
				q++;
			} else{
				h++;
				q++;
			}
		}
	}
	cout<<t;
	return 0;
}
