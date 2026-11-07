#include<bits/stdc++.h>
using namespace std;
long long n,a[2000008],l,cnt,j,k;
char c[10000008];
string s="",t="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
	}
	for(int i=0;i<l;i++){
		s+='0';
		t+='0';
	}
	k=0;
	j=l-1;
	for(int i=1;i<=n;i++){
		for(int f=0;f<a[i];f++){
			s[k]=c[i];
			k++;
			t[j]=c[i];
			j--;
		}
	}
	if(s==t){
		cout<<0;
		return 0;
	}
	for(int i=0;i<l/2;i++){
		if(s[i]!=t[i]){
			cnt++;
		}
    }
	cout<<cnt;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}

