# include <bits/stdc++.h>
using namespace std;

int main(){

    int N, x, i=0;
    cin >> N;
    int sum = 0;
    while (i<N)
    {
        cin >> x;
        sum += x;
        i++;
    }
    cout << sum << endl;
    
}