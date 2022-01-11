#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fastio() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define double long double
#define endl "\n"
#define v vector<int>
#define vb vector<bool>
#define vv vector<vector<int>>
#define pii pair<int,int>
#define vp vector<pii>
#define vs vector<string>
#define vd vector<double>
#define mp make_pair
#define pb push_back
#define popb pop_back()
#define fi first
#define se second
#define all(s) s.begin(),s.end()
#define rall(s) s.rbegin(),s.rend()
#define sz(x) (int)x.size()
#define f(i,n) for(int i = 0; i < n; ++i)
#define ff(i,n) for(int i = 1; i <= n; ++i)
#define frev(i,n) for(int i = n; i >= 0; --i)
#define input(x) for(auto &e:x)cin>>e
#define fa(x) for(auto it:x)
#define far(x) for(auto &it:x)
#define maxIdx(x) max_element(all(x))-x.begin()
#define minIdx(x) min_element(all(x))-x.begin()
#define sci(x) int x; cin>>x
#define scii(x,y) int x,y; cin>>x>>y
#define sciii(x,y,z) int x,y,z; cin>>x>>y>>z
#define print(x) fa(x) cout<<it<<" ";cout<<"\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update> ordered_set;
int MOD = 1e9 + 7;
v(int) digitwise_primes = {0, 7, 11, 101, 1009, 10007, (int) 1e5 + 3,
                           (int)1e6 + 3, (int)1e7 + 19, (int)1e8 + 7
                          };
v(int) primes;
void sieve(int n = (int) 1e5) {
    //complexity O(nloglogn)
    // gets all primes between [2, n]
    vector<bool> isprime(n + 1, 1);
    isprime[1] = 0;
    for (int i = 2; i * i <= n; ++i) {
        if (isprime[i]) {
            for (int j = i * i; j <= n; j += i)
                isprime[j] = 0;
        }
    }
    //edit this loop as per needs
    for (int i = 2; i <= n; ++i) {
        if (isprime[i])
            primes.pb(i);
    }
}

v(int) getPrimeFactors (int num)
{
    v(int) ans;
    fa(primes) {
        if (num < it)
            break;
        if (num % it != 0)
            continue;
        ans.pb(it);
        while (num % it == 0)
            num /= it;
    }
    if (num > 1)
        ans.pb(num);
    return ans;
}

int numOfFactors (int num)
{
    int factors = 0;
    fa(primes) {
        if (num < it)
            break;
        while (num % it == 0) {
            num /= it;
            ++factors;
        }
    }
    if (num > 1)
        factors++;
    return factors;
}

void solve()
{

}

signed main()
{
    fastio();
    sieve();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

/*
    //kickstart
    ff(i,t)
    {
        cout << "Case #" << i << ": ";
        solve();
    }
    */
