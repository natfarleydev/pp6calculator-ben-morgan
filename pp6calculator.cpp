#include <iostream>
#include <limits>

int main() 
{
  // Declare the variables
  double a(0), b(0), res(0);
  char op('\0');
  
  while (true)
  {
    // Ask the user what they want to do
    std::cout << "Enter the operation you would like to perform (+, -, *, /) or q to quit:" << std::endl;
    std::cin >> op;
      
    // check for bad input
    if(!std::cin)
    {
      std::cerr << "[error] Error in input" << std::endl;
    
      // clear the buffer
      // note that the large argument of 'ignore' just specifies a 
      // very large number of characters until a newline is encountered!
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      continue;
    }

    // check for quit
    if (op == 'q')
    {
      break;
    }

    // Ask for two numbers from the user
    std::cout << "Enter the first number:" << std::endl;
    std::cin >> a;
      
    // check for bad input
    if(!std::cin)
    {
      std::cerr << "[error] Error in input" << std::endl;
    
      // clear the buffer
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      continue;
    }

    std::cout << "Enter the second number:" << std::endl;
    std::cin >> b;
      
    // check for bad input
    if(!std::cin)
    {
      std::cerr << "[error] Error in input" << std::endl;
    
      // clear the buffer
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      continue;
    }

    // calculate the result
    if (op == '+')
    {
      res = a + b;
    }
    else if (op == '-')
    {
      res = a - b;
    }
    else if (op == '*')
    {
      res = a * b;
    }
    else if (op == '/')
    {
      if (b == 0)
      {
        std::cerr << "[error] Divide by zero error" << std::endl;
        continue;
      }
      else
      {
        res = a / b;
      }
    }
    else
    {
      std::cerr << "[error] Operation '" << op << "' not recognised."
                << std::endl;
      continue;
    }
      
    // print the answer
    std::cout << "The result of the operation " << op 
              << " on " << a << " and " << b 
              << " is:  " << res << std::endl;    
  }
  
  std::cout << "Thank you for using pp6calculator!" << std::endl;
  return 0;
}

