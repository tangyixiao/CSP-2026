#include<bits/stdc++.h>
using namespace std;

bool check(string s1){
	string s2 = "";
	for(int i=s1.size()-1;i>=0;i--){
		s2+=s1[i];
	}
	return s1 == s2;
}

struct str{
	unsigned long long a;
	char c;
}s[200010];

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	unsigned long long n, ans=0;
	unsigned long long len=0;
	cin >> n;
	if(true){
		for(unsigned long long i=0;i<n;i++){
			cin >> s[i].a >> s[i].c;
			len+=s[i].a;
		}
		unsigned long long j, i=0, j2;
		while(i < len/2){
			unsigned long long i2 = i;
			j=0;
			for(unsigned long long k=0;k<n;k++){
				if(i2 < s[k].a) break;
				i2 -= s[k].a;
				j++;
			}
			unsigned long long cur = i2;
			i2 = i;
			j2 = n-1;
			for(unsigned long long k2=n-1;k2>=0;k2--){
				if(i2 < s[k2].a) break;
				i2 -= s[k2].a;
				j2--;
			}
			unsigned long long cur2 = i2;
			unsigned long long l = min(s[j].a - cur, s[j].a - cur2);
			if(s[j].c != s[j2].c){
				ans+=l;
			}
			i+=l;
		}
		cout << ans;
	}else{
		string s="";
		for(int i=0;i<n;i++){
			int a;
			string c[31];
			cin >> a >> c[0];
			for(int i=1;i<=30;i++){
				c[i] = c[i-1] + c[i-1];
			}
			int j=0;
			while(a>0){
				if(a & 1) s+=c[j];
				cout << a;
				a = a >> 1;
				j++;
			}
		}
		cout << s;
		if(!check(s)){
			for(int i=0;i<s.size()/2;i++) {
				if(s[i] == s[s.size()+1-i]) continue;
				s[i] = s[s.size()+1-i];
				ans++;
			}
			cout << ans;
		}else{
			cout << 0;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
