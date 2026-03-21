#include <iostream>
#include <vector>

using namespace std;

int main(void){
    vector<int> vec;
    vec.reseve(5)

    cout << "Escreva números naturais.\n";

    int value;

    do{
        cin >> value;
        vec.push_back(value);
    }while(vec.back() > 0);

    vec.pop_back();

    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }

    cout << "\n";

    return 0;
}