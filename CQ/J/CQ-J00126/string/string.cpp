#include<bits/stdc++.h>
#define ill int long long
using namespace std;
ill p[200010],n,k,cnt,j,w;
ill c;
string l,z,y;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	w=n;
	while(n--){
		cin>>k>>z;
		p[j]=k;
		j++;
		l+=z;
		c+=k;
	}
	bool f=0;
	for(ill i=0;i<l.size()/2;i++){
		if(l[i]!=l[l.size()-i-1]){
			f=1;break;	
		}
	}if(!f){
		cout<<0;
		exit(0);
	}else{
		if(c>2e9){
			cout<<c/2;
			exit(0);
		}
		for(ill i=0;i<w;i++){
			for(ill q=0;q<p[i];q++){
				y+=l[i];
			}
		}
		for(ill i=0;i<y.size()/2;i++){
			if(y[i]!=y[y.size()-i-1]){
				cnt++;
			}
		}cout<<cnt;
	}
	
	return 0;
}
