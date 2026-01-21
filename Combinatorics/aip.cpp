#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#include<chrono>
using namespace __gnu_pbds;
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll,ll>pll;
typedef pair<ld,ld>pld;
typedef pair<int,int>pii;
typedef vector<int>vi;
typedef vector<pair<int,int>>vpi;
typedef vector<vector<int>>vvi;
typedef vector<vector<long long>>vvl;
typedef vector<long long>vl;
typedef set<int>si;
typedef set<char>sc;
typedef map<int,int>mii;
 
const int INF=1e9;
const ll LLINF=1e18;
const int MOD=1e9+7;
const double PI=acos(-1.0);
 
#define fastIO() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define f(i,s,e) for(int i=s;i<=e;++i)
#define revf(i,e,s) for(int i=e;i>=s;--i)
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define maxe(v) (*max_element(all(v)))
#define mine(v) (*min_element(all(v)))
#define sume(v) accumulate(all(v),0LL)
#define cnte(v,x) count(all(v),x)
#define unq(v) v.erase(unique(all(v)),v.end())
#define np(v) next_permutation(all(v))
#define pp(v) prev_permutation(all(v))
#define bit(x) (1LL<<(x))
#define setbit(m,x) ((m)|bit(x))
#define clrbit(m,x) ((m)&~bit(x))
#define chkbit(m,x) (((m)>>(x))&1LL)
#define cntbit(m) (__builtin_popcountll(m))
#define lowbit(m) ((m)&-(m))
 
template<class T>void read(T&x){cin>>x;}
template<class T>void read(vector<T>&v){for(auto&x:v)cin>>x;}
void read(vvi&v){for(auto&r:v)for(auto&x:r)cin>>x;}
 
template<class T>void print(const T&x){cout<<x<<endl;}
template<class T>void printv(const vector<T>&v){for(auto&x:v)cout<<x<<' ';cout<<endl;}
template<class T>void print2d(const vector<vector<T>>&v){for(auto&r:v){for(auto&x:r)cout<<x<<' ';cout<<endl;}}
 
void readv(vpi&v){for(auto&p:v)cin>>p.ff>>p.ss;}
template<class T,class U>void printvp(const vector<pair<T,U>>&v){for(auto&p:v)cout<<p.ff<<" "<<p.ss<<endl;}
 
/*
template<class T>
using ordered_set=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
 
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll rnd(ll l,ll r){return uniform_int_distribution<ll>(l,r)(rng);}
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" = "<<x<<endl
#else
#define debug(x)
#endif
*/
 
ll ceil_div(ll a,ll b){return (a+b-1)/b;}
ll gcd(ll a,ll b){return __gcd(a,b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}
bool isPrime(ll x){if(x<2)return false;if(x%2==0)return x==2;for(ll i=3;i*i<=x;i+=2)if(x%i==0)return false;return true;}
bool isPalindrome(string s){string r=s;reverse(all(r));return s==r;}
string toUpperCase(string s){transform(all(s),s.begin(),::toupper);return s;}
string toLowerCase(string s){transform(all(s),s.begin(),::tolower);return s;}
int msb(int x){return x==0?-1:31-__builtin_clz(x);}
int lsb(int x){return x==0?-1:__builtin_ctz(x);}
int msb(ll x){return x==0?-1:63-__builtin_clzll(x);}
int lsb(ll x){return x==0?-1:__builtin_ctzll(x);}
vector<int>sieve(int n){vector<int>p;vector<char>ip(n+1,1);ip[0]=ip[1]=0;for(int i=2;i*i<=n;i++)if(ip[i])for(int j=i*i;j<=n;j+=i)ip[j]=0;for(int i=2;i<=n;i++)if(ip[i])p.pb(i);return p;}
 
ll mod_add(ll a,ll b){return (a+b)%MOD;}
ll mod_sub(ll a,ll b){return (a-b+MOD)%MOD;}
ll mod_mul(ll a,ll b,ll mod=MOD){return (ll)a*b%mod;}
ll mod_pow(ll a,ll b,ll mod=MOD){ll r=1;for(;b;b>>=1,a=mod_mul(a,a,mod))if(b&1)r=mod_mul(r,a,mod);return r;}
ll mod_inv(ll a,ll mod=MOD){return mod_pow(a,mod-2,mod);}
 
void ask(string s){cout<<s<<endl; cout.flush();}
void ask(int x){cout<<x<<endl; cout.flush();}
void ask(ll x){cout<<x<<endl;cout.flush();}
void ans(int x){cout<<"! "<<x<<endl; cout.flush();}
void ans(ll x){cout<<"! "<<x<<endl; cout.flush();}
void ans(string s){cout<<"! "<<s<<endl; cout.flush();}
 
template<class T>bool ckmin(T&a,const T&b){return b<a?(a=b,1):0;}
template<class T>bool ckmax(T&a,const T&b){return b>a?(a=b,1):0;}
template<class T>vector<T>prefsum(const vector<T>&v){vector<T>p(v.size()+1,0);for(int i=0;i<(int)v.size();i++)p[i+1]=p[i]+v[i];return p;}
 
/*
Dearrangement

*/
ll C(ll n, ll r) {
    ll res = 1;
    for (ll i = 1; i <= r; i++)
        res = res * (n - i + 1) / i;
    return res;
}

void solve(){
int n,k;
cin>>n>>k;

ll D[5];
    D[0] = 1;
    D[1] = 0;
    D[2] = 1;
    D[3] = 2;
    D[4] = 9;

    ll ans = 0;
    for (int m = 0; m <= k; m++) {
        ans += C(n, m) * D[m];
    }
cout<<ans<<endl;
}
 
int main(){
  /*
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  */
  fastIO();
  int t;
  t=1;
  //cin>>t;
  while(t--) solve();
  return 0;
}