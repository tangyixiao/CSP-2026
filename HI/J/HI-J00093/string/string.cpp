#include<bits/stdc++.h>
#define int long long
using namespace std;
const int MAX=2e5+6767;
struct str{
	int a_i;
	char c_i;
};//kskbl,zdjd
str s[MAX],s1[MAX];
str st[MAX];
int tan1,len,w;
void strin(){
	int len1=0,where=0;
	for(int i=1;i<=tan1;i++){
		if(len1+st[i].a_i<=len/2){
			s[i].a_i=st[i].a_i;
			s[i].c_i=st[i].c_i;
			len1+=st[i].a_i;
		}else{
			s[i].a_i=st[i].a_i-(len1+st[i].a_i-len/2);
			if(tan1%2==1)st[i].a_i=len1+st[i].a_i-len/2-1;
			else st[i].a_i=len1+st[i].a_i-len/2;
			s[i].c_i=st[i].c_i;
			if(st[i].a_i==0)w=i+1;
			else w=i;
			break;
		}
	}
	for(int i=1;i<=tan1-w+1;i++){
		if(st[i].a_i!=0){
			s1[i].a_i=st[i+w].a_i;
		}
		s1[i].c_i=st[i+w].c_i;
	}
	/*for(int i=1;i<w;i++){
		cout<<s[i].a_i<<" "<<s[i].c_i<<"\n";
	}
	cout<<"//////////"<<"\n";
	for(int i=w;i<=tan1;i++){
		cout<<s1[i].a_i<<" "<<s1[i].c_i<<"\n";
	}*/
	return;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>tan1;
	for(int i=1;i<=tan1;i++){
		int sin;
		char cos;
		cin>>sin>>cos;
		st[i].a_i=sin;
		st[i].c_i=cos;
		len+=sin;
	}
	strin();
	int l=1,r=tan1-w+1,cnt=0;
	for(int i=1;i<=max(w-1,tan1-w+1);i++){
		if(s[l].a_i-s1[r].a_i>=0){
			if(s[l].c_i!=s1[r].c_i){
				cnt+=s[r].a_i;
			}
			s[l].a_i-=s1[r].a_i;
			r--;
			if(s[l].a_i==0)l++;
		}else if(s[l].a_i-s1[r].a_i<0){
			if(s[l].c_i!=s1[r].c_i){
				cnt+=s[r].a_i-s[l].a_i;
			}
			s[r].a_i-=s[l].a_i;
			l++;
		}
	}
	cout<<cnt;
	return 0;
} //see you again,OI֮·
//cout<<"Hello,World"; 
