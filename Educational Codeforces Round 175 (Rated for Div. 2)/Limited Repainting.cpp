/*
        PROBLEM C
*/

/*
                Hello !!! 
                
            This is SAYAN DHARA

        Hope you like the solution   :)  :)
*/

#include<bits/stdc++.h>
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

#define int long long
#define ll long long
#define FOR(i, start, end) for(int i = start; i < end; i++)
#define _FOR(i, start, end) for(int i = start; i >= end; i--)
#define vi vector<int>
#define pb(a) push_back(a)
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int mod = 1e9+7;

ll gcd(ll a, ll b) { return (b == 0) ? (a) : (gcd(b, a %= b)); }
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }

string s;
vi a;

bool func(int X, int n, int k) {
    int opr = 0;
    int i = 0;
    while(i < n) {
        if(s[i] == 'R' && a[i] > X) {
            i++;
            continue;
        }
        
        bool flag = false; 
        while(i < n && !(s[i] == 'R' && a[i] > X)) {
            if(s[i] == 'B' && a[i] > X) {
                flag = true;
            }
            i++;
        }
        if(flag) {
            opr++;
        }
    }
    return opr <= k;
}


void solve(){
//  INPUT TAKING
    int n, k;
    cin>>n>>k;
    cin>>s;
    a.resize(n);
    int maxi = 0;
    
    int sum = 0;
    FOR(i,0,n) {
        cin>>a[i];
        sum += a[i];
        maxi = max(maxi, a[i]);
    }


    int l = 0, r = sum, ans = maxi;
    while(l <= r) {
        int mid = (l+r) / 2;
        if(func(mid, n, k)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    
    cout<<ans<<endl;

}
  
signed main (){

    fio;                                                         
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);
    #endif  
        

    int t;
    cin>>t; 
        
    while(t--){
        solve();
    }
        
    return 0;

}

