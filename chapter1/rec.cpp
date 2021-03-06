# include <bits/stdc++.h>
using namespace std;

int total(int n){
    if(n == 0){
        return 0;
    }
    else
    {
        return n + total(n - 1);
    }
    
}

int main(){
    int s;
    s = total(10);
    cout << s << endl;
}