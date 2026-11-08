#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N=2e5+5;
struct T{
	int a;
	char c;
} w[N];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin>>n;
	ll cnt=0;
	for(int i=1;i<=n;i++){
		cin>>w[i].a>>w[i].c;
		cnt+=w[i].a;
		if(w[i].c==w[i-1].c){
			n--;
			w[i-1].a+=w[i].a;
			i--;
		}
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	
	ll q=cnt/2, sum=0;
	int p=0;
	for(int i=1;i<=n;i++){
		if(sum+w[i].a>q){
			for(int j=n;j>=i;j--){
				w[j+1].a=w[j].a; 
			}
			w[i+1].a=w[i].a-(sum+w[i].a-q);
			w[i].a=w[i].a-w[i+1].a;
			p=i;
			n++;
			break;
		}
		if(sum+w[i].a==q){
			p=i;
			break;
		}
		sum+=w[i].a;
	}
	
	int l=(n+1)%2;
	ll ans=0;
	//cout<<p<<" "<<q<<" "<<l<<" "<<cnt<<'\n';
	for(int i=0;i<=p;i++){
		if(w[p-i].a>w[p+i+l].a){
			w[p-i-1].a-=w[p+i+l].a-w[p-i].a;
			if(w[p-i-1].c!=w[p+i+l].c){
				ans+=abs(w[p+i+l].a-w[p-i-1].a);
			}
		}
		else{
			w[p+i+l+1].a-=w[p-i].a-w[p+i+l].a;
			if(w[p+i+l+1].c!=w[p-i].c){
				ans+=abs(w[p+i+l+1].a-w[p-i].a);
			}
		}
		if(w[p-i].c!=w[p+i+l].c){
			ans+=min(w[p-i].a,w[p+i+l].a);
		}
		//cout<<ans<<"/";
	}
	
	cout<<ans;
	return 0;
}
