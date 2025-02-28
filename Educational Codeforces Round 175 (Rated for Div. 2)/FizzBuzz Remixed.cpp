/*
        PROBLEM A
*/



/*
                Hello ! :) ! 
                
            This is SAYAN DHARA

        Hope you like the solution   <3 <3
*/

#include<bits/stdc++.h>

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

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

using namespace std;

ll gcd(ll a, ll b) { return (b == 0) ? (a) : (gcd(b, a %= b)); }
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }

void goCPP(){
//      INPUT TAKING
    int n;
    cin>>n;
    if(n == 0 || n == 1 || n == 2){
        cout<<n+1<<endl;
        return;
    }
    if(n < 15){
        cout<<3<<endl;
        return;
    }
    int ans = 0;
    if(n % 15 == 0){
        ans += 3*(n/15);
        ans++;
        cout<<ans<<endl;
        return;
    }
    if(n % 15 == 1){
        ans += 2;
        ans += 3*(n/15);
        cout<<ans<<endl;
        return;
    }
    ans = 3;
    ans += 3*(n/15);
    cout<<ans<<endl;
    return;


    
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
            goCPP();
        }
        
        return 0;
    }
