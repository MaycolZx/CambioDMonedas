#include <atomic>
#include <iostream>
#include <vector>
using namespace std;

void cambioVuelto(float p, vector<float> &opt, vector<float> &retOpt) {
  float resultObj = p;
  int iw = 0;
  while (true) {
    if (resultObj - opt[iw] > 0) {
      resultObj -= opt[iw];
      retOpt.push_back(opt[iw]);
    } else {
      if (iw + 1 < opt.size()) {
        iw++;
      } else {
        break;
      }
    }
  }
}

int main() {
  float valorObj = 3.89f;
  vector<float> optCoins = {2.0, 1.0, 0.5, 0.2, 0.1, 0.05, 0.02, 0.01};
  vector<float> valueR = {};
  cambioVuelto(valorObj, optCoins, valueR);
  for (int i = 0; i < valueR.size(); i++) {
    cout << valueR[i] << ", ";
  }
  cout << endl;
  return 0;
}
