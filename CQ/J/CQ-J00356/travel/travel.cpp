#include<bits/stdc++.h>
typedef long long ll;
const bool islocal=0;
std::ifstream fin("travel.in");
std::ofstream fout("travel.out");
ll nxt[26];
int main(){
	std::cin.tie(nullptr)->sync_with_stdio(false);
	std::string s1,s2,s3,s4;
	std::fill(nxt,nxt+26,-1),nxt[0]=1,nxt[1]=2,nxt[3]=5;
	(islocal?std::cin:fin)>>s1>>s2>>s3>>s4;
	if(s1!=s3)(islocal?std::cout:fout)<<"0000";
	else if(s2[0]!=s4[0]||s2[1]!=s4[1])(islocal?std::cout:fout)<<"1000";
	else if((s2[2]<='C'&&s4[2]>'C')||(s2[2]>'C'&&s4[2]<='C'))(islocal?std::cout:fout)<<"1100";
	else if(nxt[s2[2]-'A']!=s4[2]-'A'&&nxt[s4[2]-'A']!=s2[2]-'A')(islocal?std::cout:fout)<<"1110";
	else (islocal?std::cout:fout)<<"1111";
}
void zhapian(){
	//I'm luogu user 1754409(huang_hym)!
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
}
//time:5 minutes
