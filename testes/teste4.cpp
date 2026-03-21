#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n = 15;
    vector<int> vet;

    for (int i = 15; i >= 0; i--){
        vet.push_back(2*i);
    }

    for(int i = 0; i < n; i++){
        cout << vet[i] << " ";
    }

    cout << "\n";

    sort(vet.begin() + 3, vet.begin() + (vet.size() - 1)/2);
    
    for(int i = 0; i < n; i++){
        cout << vet[i] << " ";
    }

    cout << "\n";

    return 0;
}