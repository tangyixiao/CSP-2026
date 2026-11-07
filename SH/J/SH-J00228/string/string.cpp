#include<bits/stdc++.h>
using namespace std;

int a[1000000];
char b[1000000];
int f[1000000];

int main(){
	freopen("string.in","r",stdin);
	string s="";
	int n;
	cin >> n;
	for(int i =0;i<n;i++){
		cin >> a[i] >>b[i];
	}
	for(int i =0;i<n;i++){
		for(int j=0;j<a[i];j++){
			s+=b[i];
			f[b[i]-'a'+0]++;
		}
	}
	long long w=s.length();
	long long ans=0,qur;
	for(int i=0;i<26;i++){
		if(f[i]>ans){
			ans=f[i];
			qur=i;
		}
	}
	if(w%2==1){
		char c=s[(w+1)/2];
		if(c!=(qur+'a')){
		w-=1;
	}
	}
	cout << w-ans;
	freopen("string.out","w",stdout);
	return 0;
}
