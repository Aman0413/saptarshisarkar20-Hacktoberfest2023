#include <iostream>
#include <vector>
using namespace std;

void printsubArray(vector<int> &arr, vector<vector<int> > &ans,
                   vector<int> &output, int i) {

  // base case
  if (i >= arr.size()) {
    ans.push_back(output);
    return;
  }

  // exclude
  printsubArray(arr, ans, output, i + 1);
  // include
  int element = arr[i];
  output.push_back(element);
  printsubArray(arr, ans, output, i + 1);
}
int main() {

  vector<int> arr;
  arr.push_back(1);
  arr.push_back(2);
  arr.push_back(3);
  arr.push_back(4);
  arr.push_back(5);
  arr.push_back(6);
  vector<vector<int> > ans;
  vector<int> cur;
  int index = 0;
  printsubArray(arr, ans, cur, index);

  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
