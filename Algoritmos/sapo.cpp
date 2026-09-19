#include <bits/stdc++.h>

using namespace std;

int sapo(int n);

int main(void){

    int n;
    cout << "Qual o valor de n? ";
    cin >> n;

    int resp = sapo(n);

    cout << "O sapo consegue chegar no degrau " << n << " de " << resp << " formas diferentes\n";

    return 0;
}

int sapo(int n){
    int F[n+1]; 
    F[0] = 1;
    F[1] = 1;

    for(int i = 2; i <= n; i++){
        F[i] = F[i-1] + F[i-2]; 
    }

    return F[n];
}