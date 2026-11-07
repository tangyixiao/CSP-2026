#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	//freopen("travel.in","r",stdin);//freopen//freopen//freopen//freopen//freopen//freopen//freopen//freopen//freopen//freopen//freopen//freopen//freopen//freopen
	//freopen("travel.ans","w",stdout);//freopen//freopen//freopen//freopen//freopen//freopen//freopen//freopen//freopen//freopen//freopen//freopen//freopen//freopen
	//not .ans,iz .out
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int dr,dx;
	string sr,sx;
	cin>>dr>>sr>>dx>>sx;
	char cr,cx;
	cr=sr[2];cx=sx[2];//qu zuo wei hao
	sr.erase(2);sx.erase(2);//shan chu zuo wei hao
	int ir,ix;
	ir=stoi(sr);ix=stoi(sx);//qu pai shu
	if(dr==dx)printf("1");else printf("0");//ru guo che xiang r==che xiang x
	if(dr==dx&&ir==ix)printf("1");else printf("0");//ru guo che xiang r==che xiang x,bing qie pai shu r==pai shu x
	if(dr==dx&&ir==ix&& ( ((cr=='A'||cr=='B'||cr=='C')&&(cx=='A'||cx=='B'||cx=='C')) || ((cr=='D'||cr=='F')&&(cx=='D'||cx=='F')) ))printf("1");else printf("0");//ru guo che xiang r==che xiang x,bing qie pai shu r==pai shu x,bing qie:  r de zuo wei hao shi 'A' huo zhe 'B' huo zhe 'C' bing qie x de zuo wei hao shi 'A' huo zhe 'B' huo zhe 'C',huo zhe r de zuo wei hao shi 'D' huo zhe 'F' bing qie x de zuo wei hao shi 'D' huo zhe 'F'
	if(dr==dx&&ir==ix&&((cr=='A'&&cx=='B')||(cr=='B'&&cx=='C')||(cr=='D'&&cx=='F')))printf("1");else printf("0");//bu xiang da le
	return 0;
}