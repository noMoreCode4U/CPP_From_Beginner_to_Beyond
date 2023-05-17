#include <iostream>




using namespace std;




int main()
{
  int number_of_rooms {0};
  const float price_per_room{30};
  float tax_rate {0.06};

  cout << "Please Enter Number of Rooms:";

  cin >> number_of_rooms ;


  float cost {number_of_rooms * price_per_room};
  float tax {number_of_rooms * price_per_room * tax_rate};
  float total_estimate {(number_of_rooms * price_per_room) + (number_of_rooms * price_per_room * tax_rate)};

  cout << "Cost: " << cost << "$" << endl;
  cout << "Tax : " << tax  << "$" << endl;
  cout << "Total Estimate:" << total_estimate << endl;

  return 0;
}
