#include<iostream>
#include<algorithm>
using namespace std;
struct lett{
	long long a;
	char c;
} ch[200005];
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>ch[i].a>>ch[i].c;
	}
	int l=1,r=n;
	int al=ch[l].a;
	int ar=ch[r].a;
	char cl=ch[l].c;
	char cr=ch[r].c;
	while(l<r){
		if(al<ar){
			if(cl!=cr){
				ans+=al;
			}
			l++;
			ar-=al;
			al=ch[l].a;
			cl=ch[l].c;
		}
		else if(al>ar){
			if(cr!=cl){
				ans+=ar;
			}
			r--;
			al-=ar;
			ar=ch[r].a;
			cr=ch[r].c;
		}
		else{
			if(cr!=cl){
				ans+=al;
			}
			l++;
			r--;
			al=ch[l].a;
			cl=ch[l].c;
			ar=ch[r].a;
			cr=ch[r].c;
		}
	}
	cout<<ans;
	return 0;
}
