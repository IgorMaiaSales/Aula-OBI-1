#include <bits/stdc++.h>

using namespace std;

int main(void){
    string hello = "Oi, mundo!";

    hello.pop_back();

    cout << hello + "\n";

    hello.push_back('?');

    cout << hello + "\n";

    return 0;
}