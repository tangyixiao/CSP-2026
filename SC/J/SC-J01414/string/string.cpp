#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	//bao li chu qi ji
	//get #1~12,#17,#18(14/25)
	//56 / 100pts
	/* T2 string
	* author SC-J01414
	* time 9:49
	*/
	
	string s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int l;char c;
		cin>>l>>c;
		string ns(l,c);
		s+=ns;
	}
	string s1;
	int cnt=0;

	const int siz=s.length()/2.0+0.1;
	for(int i=0;i<siz;i++){
		s1+=s[i];
	}
	reverse(s1.begin(),s1.end());
	//aa
	// i
	//aabbc
	//    il
	for(int i=siz+1;i<s.length();i++){
		if(s[i]!=s1[i-siz-1]){
			cnt++;
		}
	}
	int cnt2=0;
	s1="";
	for(int i=siz+1;i<s.length();i++){
		s1+=s[i];
	}

	reverse(s1.begin(),s1.end());
	for(int i=0;i<siz;i++){
		if(s[i]!=s1[i]){
			cnt2++;
		}
	}
	cout<<min(cnt,cnt2);
	return 0;
}