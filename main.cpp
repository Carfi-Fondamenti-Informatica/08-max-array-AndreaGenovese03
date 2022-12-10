#include <iostream>
#include "lib.h"
using namespace std;

int main(){
   int x;
    cin >> x;
    float numeri[x];

    for (int i=0; i<x; i++){
        cin >> numeri[i];
    }

    cout << maggiore(numeri, x) << endl;

  return 0;
}
