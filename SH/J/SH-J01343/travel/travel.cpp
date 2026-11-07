//T1 - travel
#include<cstdio>
int c1,c2,ans1,ans2,ans3,ans4;
char s1[4],s2[4];
inline int abss(int a){
	return a<0?-a:a;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d%s%d%s",&c1,s1,&c2,s2);
	ans1=(c1==c2);
	ans2=ans1&(s1[0]==s2[0] && s1[1]==s2[1]);
	ans3=ans2&((s1[2]<='C' && s2[2]<='C') || (s1[2]>'C' && s2[2]>'C'));
	ans4=ans3&(abss((int)(s1[2]-s2[2]))==1 || (s1[2]=='D' && s2[2]=='F') || (s1[2]=='F' && s2[2]=='D'));
	printf("%d%d%d%d\n",ans1,ans2,ans3,ans4);
	fclose(stdin);fclose(stdout);
	return 0;
}
