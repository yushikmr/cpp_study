# include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    bool b = true;
    cout << b << endl;

    if (a < 10){
        cout << "aは10より小さい" << endl;
    }
    else if (a == 10){
        cout << "a == 10" << endl;
    }
    else {
        cout << "a は10以上" << endl;
    }
}