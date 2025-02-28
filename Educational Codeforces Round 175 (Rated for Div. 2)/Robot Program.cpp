/*
        PROBLEM B
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
    int n,x,k;
    cin>>n>>x>>k;
    string s;
    cin>>s;

    int val = 0, index = -1;
    FOR(i,0,n){
        if(s[i] == 'L') val--;
        else val++;
        if(val == 0){
            index = i;
            break;
        }
    }
    int cnt = 0, time = 0, idx = 0;
    if(index == -1){
        while(time < k && idx < n){
            time++;
            if(s[idx] == 'L')   x--;
            if(s[idx] == 'R')   x++;
            if(x == 0){
                cnt++;
                idx = 0;
            }
            else{
                idx++;
            }
        }

        cout<<cnt<<endl;
        return;
    }
    while(time < k && idx < n){
        time++;
        if(s[idx] == 'L')   x--;
        if(s[idx] == 'R')   x++;
        if(x == 0){
            cnt++;
            break;
        }
        else{
            idx++;
        }
    }
    if(x == 0){
        cnt += (k - time)/(index+1);
    }
    cout<<cnt<<endl;
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
