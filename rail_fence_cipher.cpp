#include<bits/stdc++.h>
using namespace std;

#define nline "\n"
#define pb push_back
#define tab "\t"

int main(){
    cout << "Enter the plain text -> ";
    string s;
    cin >> s;
    cout << "Enter the key -> ";
    int n;
    cin >> n;

    vector<vector<char>> a(n,vector<char>(s.length(),' '));

    int f,r;
    f=r=0;

    for(int i=0;i<s.size();i++){
        a[r][i] = s[i];
        
        if(r == n-1){
            f = 1;
        }
        else if(r == 0){
            f=0;
        }
        
        if(f==0){
            r++;
        }
        else{
            r--;
        }
        
    }


    cout << nline << "The rail fence is -> " << nline;
    for(int i=0;i<n;i++){
        for(int j=0;j<s.size();j++){
            if(a[i][j]!=' '){
                cout << a[i][j] << tab;
            }
            else{
                cout << ' ' << tab;
            }
        }
        cout << nline;
    }

    cout << nline << "Cipher Text -> ";
    for(int i=0;i<n;i++){
        for(int j=0;j<s.size();j++){
            if(a[i][j]!=' '){
                cout << a[i][j];
            }
        }

    }


    return 0;
}