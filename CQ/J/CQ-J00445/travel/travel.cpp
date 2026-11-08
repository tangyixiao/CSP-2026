#include<bits/stdc++.h>
#define ll long long
#define F for
#define W while
using namespace std;
char buf[1<<23],*p1=buf,*p2=buf;
#define gc() (p1==p2&&(p2=(p1=buf)+fread(buf,1,1<<23,stdin),p1==p2)?EOF:*p1++)
static inline int read()
{
    int x=0,f=1;char ch=gc();
    W(!isdigit(ch)){if(ch=='-')f=-1;ch=gc();}
    W(isdigit(ch)) x=x*10+(ch^48),ch=gc();
    return x*f;
}
static inline string read_str()
{
    string s=" ";char ch=gc();
    W(!isalnum(ch)) ch=gc();
    W(isalnum(ch)) s+=ch,ch=gc();
    return s;
}
const int MAXN=2e5+5;
string s1,s2,s3,s4;
bool check(char c)
{
    return (c=='D'||c=='F');
}
signed main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    s1=read_str(),s2=read_str(),s3=read_str(),s4=read_str();
    if(s1!=s3) return cout<<"0000\n",0;
    cout<<"1";
    if(s2.substr(1,2)!=s4.substr(1,2)) return cout<<"000\n",0;
    cout<<"1";
    if(check(s2[3])!=check(s4[3])) return cout<<"00\n",0;
    cout<<"1";
    if(check(s2[3])) return cout<<"1\n",0;
    else
    {
        if(abs(s2[3]-s4[3])==1) return cout<<"1\n",0;
        else return cout<<"0\n",0;
    }
    return 0;
}//rp++
/*
海客谈瀛洲，烟波浩渺信难求。

越人语天姥，明霞覆灭尚可睹。

天姥连天向天横，势拔五岳掩赤城。

天台四万八千丈，对此欲倒东南倾。

我与因之梦吴越，一夜飞渡镜湖月。

湖月照我影，送我至剡溪。

谢公宿处今尚在，绿水荡漾清猿啼。

脚著谢公屐，身登青云梯。

半壁见海日，空中闻天鸡。


*/