#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
  bool userInput = true;
  do
  {
    fstream stream;
    string answer;

    cout << "Press '1' to see the customer data" << endl << "Press '2' to add a new customer" << endl << "Press '3' to count entries" << endl << endl;
    getline(cin, answer);
    system("clear");

    while (answer != "1" && answer != "2" && answer != "3")
    {
      cout << "Press '1' to see the customer data" << endl << "Press '2' to add a new customer" << endl << "Press '3' to count entries" << endl << endl;
      cout << "Wrong input! Try again: ";
      getline(cin, answer);
      system("clear");
    }

    if (answer == "1")
    {
      string content;

      stream.open("./Documents/c++/customers.txt", ios::in);
      while(!stream.eof())
      {
        getline(stream, content);
        cout << content << endl;
      }
      stream.close();
    }
    else if (answer == "2")
    {
      string newCustomerEntry;
      string tmp;

      cout << "Customer ID: ";
      getline(cin, tmp);
      newCustomerEntry = tmp + "\n";

      cout << "First name: ";
      getline(cin, tmp);
      newCustomerEntry += tmp + "\n";

      cout << "Last name: ";
      getline(cin, tmp);
      newCustomerEntry += tmp + "\n";

      cout << "Phonenumber: ";
      getline(cin, tmp);
      newCustomerEntry += tmp + "\n\n";

      stream.open("./Documents/c++/customers.txt", ios::app);
      stream << newCustomerEntry;
      stream.close();

      cout << "Entry has been created successfully." << endl << endl;
    }

    else if (answer == "3")
    {
      string currRow;
      int count = 0;

      stream.open("./Documents/c++/customers.txt", ios::in);
      while (!stream.eof())
      {
        getline(stream, currRow);
        if (currRow == "")
        {
          count++;
        }
      }
      stream.close();
      cout << "There are " << count - 1 << " customer entries." << endl << endl;
    }


    cout << "Press '1' to do another action" << endl << "Press '2' to exit" << endl << endl;
    getline(cin, answer);
    system("clear");

    while (answer != "1" && answer != "2")
    {
      cout << "Press '1' to do another action" << endl << "Press '2' to exit" << endl << endl;
      cout << "Wrong input! Try again: ";
      getline(cin, answer);
      system("clear");
    }
    if (answer == "2")
    {
      userInput = false;
    }
  }
  while (userInput);
};
