#include <bits/stdc++.h>

using namespace std;

int main(void){
    int P, O, Qp, Qo;

    cin >> P >> O;

    Qp = P/2;
    Qo = O/4;

    /* Na marra fica assim
    if(Qp <= Qo){
        cout << Qp << "\n";
    }else{
        cout << Qo << "\n";
    }
    */

    cout << min(Qp, Qo) << "\n";

    return 0;
}