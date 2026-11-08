#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
struct node{
	long long a;
	char c;
}q[N];
long long n;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long l=1,r=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>q[i].a>>q[i].c;
		r++;
	}
	long long cnt=0;
	while(l<=r){
		if(q[l].c==q[r].c){
			if(q[l].a>q[r].a){
				q[l].a-=q[r].a;
				r--;
			}else{
				if(q[l].a<q[r].a){
					q[r].a-=q[l].a;
					l++;
				}else{
					r--;
					l++;
				}
			}
		}else{
			if(q[l].a>q[r].a){
				q[l].a-=q[r].a;
				cnt+=q[r].a; 
				r--;
			}else{
				if(q[l].a<q[r].a){
					q[r].a-=q[l].a;
					cnt+=q[l].a;
					l++;
				}else{
					cnt+=q[l].a;
					r--;
					l++;
				}
			}
		}
	}
	cout<<cnt;
	return 0;
}
