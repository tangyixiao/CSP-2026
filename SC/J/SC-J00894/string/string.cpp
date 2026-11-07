#include<bits/stdc++.h>
using namespace std;
const int N = 2*1e5+1000;
string s;
int n;
long long tot=0;
struct SS{
	int l;
	char c;
}sd[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>sd[i].l>>sd[i].c;
	}
	for(int i=1,j=n;i<=n;i++){
		while(sd[i].l>0){
			if(sd[i].l>=sd[j].l){
				if(sd[i].c==sd[j].c){
					sd[i].l-=sd[j].l;
					sd[j].l=0;
				}else{
					tot+=sd[j].l;
					sd[i].l-=sd[j].l;
					sd[j].l=0;
				}
			}else{
				if(sd[i].c==sd[j].c){
					sd[j].l-=sd[i].l;
					sd[i].l=0;
				}else{
					tot+=sd[i].l;
					sd[j].l-=sd[i].l;
					sd[i].l=0;
				}
			}
			if(sd[j].l==0)j--;
		}
	}
	cout<<tot<<endl;
	
	return 0;
}