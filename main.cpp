#include <iostream>
#define LEN 87
using namespace std;

short res[LEN];

void mult55(){
    int product, perenos=0;
    for (int i=0; i<LEN; i++){
        product=res[i]*55+perenos;
        res[i]=product%10;
        perenos=product/10;
    }
}

int main(){
  short K;
  res[0]=6;
  res[1]=3;
  for (cin >> K; K>1; K--){
    mult55 ();
  }

  int upper=LEN-1;
  while(res[upper]==0) upper--;
  for (; upper>=0; upper--){
    cout << res[upper];
  }

  return 0;
}
