# include <bits/stdc++.h>
using namespace std;

int main(){
    int s = 0,N = 5, a;
    int i= 0;
    cin >> a;
    for(i;i< N;i++){
        int x;
        cin >> x;
        if(a == x){
            s++;
        }  
    }

    cout << "answer:  " << s << endl;
}