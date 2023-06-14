#include <iostream>
#include <string>

int counter = 1;

int count_digits(int number) {

  //Base Case

  // if number is less than 10 then digit of 1 place.
  // if number is less than -9 then it is of 1 decimal place.
  if (number < 10 && number > -9)
  {
    return counter;
  }

  //Recursive case
  else 
  {
    counter++;
    return count_digits(number / 10);
  }
} 

int checkForNegative(int isNegative)
{
    if (isNegative < 0) 
    {
        std::cout << isNegative <<" is less than 0.";
    }
    return 0;
}

int main()
{
    checkForNegative(-50000);
    std::cout << count_digits(-90002);

    return 0;
}