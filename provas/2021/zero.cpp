#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int N, X, soma = 0;
    vector<int> num;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> X;

        if(X != 0){
            num.push_back(X);
        }else{
            num.pop_back();
        }
    }

    for(vector<int>::iterator i = num.begin(); i != num.end(); i++){
        soma += *i;
    }

    cout << soma << "\n";

    return 0;
}