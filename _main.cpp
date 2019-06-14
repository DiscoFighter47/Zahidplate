#include <bits/stdc++.h>

using namespace std;

typedef long long lol;
typedef pair<int,int> pii;
typedef map<int,int> mii;

#define pf printf
#define sf scanf
#define mp make_pair
#define pb push_back
#define pause system("pause")
#define pmin int,vector<int>,greater<int>
#define checkBit(n,p) (bool)(n&(1LL<<p))
#define setBit(n,p) (n|=(1LL<<p))
#define resetBit(n,p) (n&=~(1LL<<p))
#define PI acos(-1.0)
#define sqr(x) ((lol)x*x)
#define gcd(x,y) __gcd((lol)abs(x),(lol)abs(y))
#define lcm(x,y) (abs(x)/__gcd((lol)abs(x),(lol)abs(y))*abs(y))
#define logB(val,base) (log(double(val))/log(double(base)))
#define popCount(mask) __builtin_popcountll(mask)
#define rightMost __builtin_ctzll
#define leftMost(mask) (63-__builtin_clzll(mask))
#define memval(arr,val) memset(arr,val,sizeof(arr))

int dirK[8][2] = {{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1}};
int dir8[8][2] = {{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1}};
int dir4[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};

/*============================================================================//
                   it always seems impossible until it's done
//============================================================================*/

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifdef DiscoFighter47
        pf("Hello World!\n");
        freopen("_input.txt","r",stdin);
        freopen("_output.txt","w",stdout);
    #endif // DiscoFighter47

    /*int tc,t;
    sf("%d",&tc);
    for(t=0;t<tc;t++) {
    }*/
}
