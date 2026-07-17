#include <iostream>
using namespace std;

const double DOLLARS_PER_GALLON = 4.49;     // cost of gas per gallon
const double MILES_PER_COMMUTE = 20.5;    // miles in one round-trip commute
const double MILES_PER_GALLON = 36;       // car fuel efficiency

double myCommutes;
double myCost;

// Converts gas dollars into number of commutes
double toCommutes(double gasDollars) {
  double gasGallons;
  double gasMiles;
  double numCommutes;

  gasGallons = gasDollars / DOLLARS_PER_GALLON;
  gasMiles = gasGallons * MILES_PER_GALLON;

  // Fixed the math errror
  numCommutes = gasMiles / MILES_PER_GALLON; // TODO: That math is not right! Something is missing here...

  return numCommutes;
}

// TODO!
// Converts number of commutes into gas cost
/*
double toDollars(double commutes) {
  ....
  return totalCost;
}
*/

// Edit: Converts into total dollar cost of gas.
double toDollars(double commutes) {
  //Edit: Saves the total number of miles driven
  double totalMiles;

  // Edit: Saves the number of gallons
  double gasGallons;

  // Edit: Svaes the total cost of gas
  double totalCost;

  // Edit: Multiply the commues in miles for each trip
  totalMiles = commutes * MILES_PER_COMMUTE;

  // Edit: Divide the total miles by car's fuel
  gasGallons = totalMiles / MILES_PER_GALLON;

  // Edit: Multiply the gallons needed by the cost of each gallon.
  totalCost = gasGallons * DOLLARS_PER_GALLON;

  // Edit: Send the cost to back
  return totalCost;

}

int main() {

  cout << "$20 will buy you: " << toCommutes(20) << " commutes." << endl;
  cout << "$100.50 will buy you: " << toCommutes(100.50) << " commutes." << endl;
  cout << "$500 will buy you: " << toCommutes(500) << " commutes." << endl;
  cout << "$8000 will buy you: " << toCommutes(8000) << " commutes." << endl;

  cout << "Enter the number of commutes you'd like to do:" << endl;
  cin >> myCommutes;

  myCost = toDollars(myCommutes);

  cout << "Great idea! Let's drive! ";
  cout << myCommutes << " commutes will cost you $" << myCost << endl;

  cout << "All done!" << endl;
}