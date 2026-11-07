#include<bits/stdc++.h>
using namespace std;
int cnt,snt,c;
int t[100000001];
int v[100000001];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    	int k;
    	cin>>k;
    	char b;
    	cin>>b;
    	int f=b-'a';
    	for(int i=1;i<=k;i++){
    		cnt++;
    		t[cnt]=f;
		}
	}
	for(int i=cnt;i>=1;i--){
		snt++;
		v[snt]=t[i];
	}
	bool f1=false;
	for(int i=1;i<=cnt;i++){
		if(v[i]!=t[i]){
			f1=true;
			break;
		}
	}
	if(f1==false){
		cout<<"0";
		return 0;
	}else{
	    for(int i=1;i<=cnt/2;i++){
	    	if(v[i]!=t[i]){
	    		c++;
	    		v[i]=t[i];
			}
		}
	}
	cout<<c;
	return 0;
}

