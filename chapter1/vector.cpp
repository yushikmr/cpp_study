#define _GLIBCXX_DEBUG
# include <bits/stdc++.h>
using namespace std;

int my_min(int x,int y){
    if(x > y){
        return y;
    }
    else{
        return x;
    }
}

int main(){

    int a, b, c, d;

    vector<int> v1(3);
    int v2[] = {1,3,4,3,6,3,5,6,7,3};
    array<int, 10> v3;
    v1 = {1,4,5};

    int ans = my_min(2,5);
    
    cout << v1[0] << endl;
    cout << v1[1] << endl;
    cout << ans << endl;
}