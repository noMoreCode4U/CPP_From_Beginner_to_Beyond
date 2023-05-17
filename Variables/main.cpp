#include <iostream>

using namespace std;

int main()
{
  bool game_over {false};
  short short_value1 {3000};
  short short_value2 {20000};
  short product_value {short_value1 * short_value2}; //overflow happens
  cout << "the value is "<< game_over << endl;
  cout << "the product is " << product_value << endl;
  return 0;
}
