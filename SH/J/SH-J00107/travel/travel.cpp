#include <cstdio>
#include <cstdlib>

int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    long long c1,c2,sr1,sr2;
    char sc1,sc2;
    bool left1,left2;
    scanf("%lld %lld%c %lld %lld%c",&c1,&sr1,&sc1,&c2,&sr2,&sc2);
    if(c1==c2)
    {
        printf("1");
        if(sr1==sr2)
        {
            printf("1");
            left1=(sc1<='C'?1:0);
            left2=(sc2<='C'?1:0);
            if(left1==left2)
            {
                printf("1");
                if(abs(sc1-sc2)==1)
                    printf("1");
                else
                    printf("0");
            }
            else
                printf("00");
        }
        else
            printf("000");
    }
    else
        printf("0000");
    fclose(stdin);
    fclose(stdout);
    return(0);
}
