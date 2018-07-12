#include <iostream>

using namespace std;

int main()
{
  int n;
  float quantity,price;

  std::cin >> n;

  while(n--)
  {
    std::cin >> quantity>>price;

    if(quantity>1000) printf("%.6f\n", .9*quantity*price);
    else printf("%.6f\n", quantity*price);


  }
}
