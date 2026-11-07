#include<bits/stdc++.h>
using namespace std;
int n,cnt,c=1;
long long a[200010];
char ch[200010];
unsigned long long len,ans;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>ch[i];
		len+=a[i];
		while(a[i]--){
			if(ch[i]=='a'){
				s+="a";
			}
			if(ch[i]=='b'){
				s+="b";
			}
			if(ch[i]=='c'){
				s+="c";
			}
			if(ch[i]=='d'){
				s+="d";
			}
			if(ch[i]=='e'){
				s+="e";
			}
			if(ch[i]=='f'){
				s+="f";
			}
			if(ch[i]=='g'){
				s+="g";
			}
			if(ch[i]=='h'){
				s+="h";
			}
			if(ch[i]=='i'){
				s+="i";
			}
			if(ch[i]=='j'){
				s+="j";
			}
			if(ch[i]=='k'){
				s+="k";
			}
			if(ch[i]=='l'){
				s+="l";
			}
			if(ch[i]=='m'){
				s+="m";
			}
			if(ch[i]=='n'){
				s+="n";
			}
			if(ch[i]=='o'){
				s+="o";
			}
			if(ch[i]=='p'){
				s+="p";
			}
			if(ch[i]=='q'){
				s+="q";
			}
			if(ch[i]=='r'){
				s+="r";
			}
			if(ch[i]=='s'){
				s+="s";
			}
			if(ch[i]=='t'){
				s+="t";
			}
			if(ch[i]=='u'){
				s+="u";
			}
			if(ch[i]=='v'){
				s+="v";
			}
			if(ch[i]=='w'){
				s+="w";
			}
			if(ch[i]=='x'){
				s+="x";
			}
			if(ch[i]=='y'){
				s+="y";
			}
			if(ch[i]=='z'){
				s+="z";
			}
		}
	}
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-i-1]){
			ans++;
		}
	}
//	cnt=n+1-c;
//	while(c<cnt){
//		if(a[c]==0){
//			c--;
//		}
//		if(ch[cnt]!=ch[c]){
//			ans+=min(a[c],a[cnt]);
//			a[c]-=min(a[c],a[cnt]);
//		}else{
//			a[c]-=min(a[c],a[cnt]);
//		}
//		if(a[cnt]<a[c]){
//			cnt--;
//		}
//	}
	cout<<ans;
	return 0;
}
