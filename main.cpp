#include <iostream>
using namespace std;
#include "lib.h"

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
