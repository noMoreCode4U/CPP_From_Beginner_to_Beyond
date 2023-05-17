#include <iostream>

using namespace std;

int main()
{

  cout << "Franks's Carpet Cleaning Service" << endl;
  cout << "================================" << endl;

  int number_of_small_room {0};
  int number_of_large_room {0};
  const float price_per_small_room{25};
  const float price_per_large_room{35};
  const float tax_rate {0.06};

  cout << "Please Enter Number of Small rooms first and then Enter number of large rooms:";
  cin >> number_of_small_room >> number_of_large_room ;

  float cost {(number_of_small_room * price_per_small_room)+(number_of_large_room * price_per_large_room)};
  float tax {cost * tax_rate};
  float total_estimate {(cost) + (tax)};

  cout << "Estimate for carpet cleaning service"<<endl;
  cout << "Number of small rooms: " << number_of_small_room<<endl;
  cout << "Number of large rooms: " << number_of_large_room<<endl;
  cout << "Price per small rooms $" << price_per_small_room<<endl;
  cout << "Price per large rooms $" << price_per_large_room<<endl;
  cout << "Cost: $" << cost << endl;
  cout << "Tax : $" << tax  << endl;
  cout << "=========================="<< endl;
  cout << "Total Estimate:" << total_estimate << endl;
  cout << "This estimate is valid for 30 days" << endl;

  return 0;
}
