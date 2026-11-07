#include<bits/stdc++.h> 
using namespace std;
int s[200005],n,w[100005],q;
char z[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>s[i]>>z[i]; 
	}
	if(n==2){
		if(z[1]==z[2]){
			cout<<0;
			return 0;
		}
		if(s[1]>s[2]){
			cout<<(s[1]-s[2])/2;
			return 0;
		}
		else{
			cout<<(s[2]-s[1])/2;
			return 0;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=s[i];j++){
			w[q]=z[i]-'a';
			q++;
		}
	}
	int sum=0;
	for(int i=0;i<=(q-1)/2;i++){
		for(int j=q-2;j>(q-1)/2;j--){
			if(w[i]!=w[j]){
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}
