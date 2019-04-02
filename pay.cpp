#include <iostream>
#include <fstream>
#include <vector>
#include "person.h"
#include "person.cpp"
using namespace std;

void print(vector <PERSON> &EMPLOYEES);
void ReadData(vector <PERSON> &EMPLOYEES);
void Get_Companies(vector <PERSON> &EMPLOYEES);
void WriteData();
void print_Highest_Paid();
void SEPARATE_AND_SAVE();
vector <string> &COMPANY_NAMES();

void SEPARATE_AND_SAVE()
{

}

void print_Highest_Paid()
{

}

void Get_Companies(vector <PERSON> &EMPLOYEES,vector <string> &COMPANY_NAMES)
{
   for (int i = 0; i < EMPLOYEES.size(); i++)
   {
      companyName.at(i).push_back() = EMPLOYEES.at(i).Get_Companies();
   }

}
void ReadData(vector <PERSON> &EMPLOYEES)
{
  string firstname,lastname,companyName;
  int employee_id;
  float HoursWorked, payRate;
  ifstream in;
  in.open("in.txt");

  while(in>>firstname>>lastname>>employee_id>>companyName>>HoursWorked>>payRate)

{
  cin>>fName>>lName>>PayRate>>HoursWorked;
  P[SIZE].SetFirstName(fName);
  P[SIZE].SetLastName(lName);
  P[SIZE].SetPayRate(PayRate);
  P[SIZE].SetHoursWorked(HoursWorked);
}
else
{
  cout << "Sorry, but unable to open the in.txt file " << ;
  return 0;
}

int main()
{
  vector <PERSON> EMPLOYEES;
  vector <string> COMPANY_NAMES;
ReadData(EMPLOYEES);
Get_Companies(EMPLOYEES,COMPANY_NAMES);
SEPARATE_AND_SAVE();
print_Highest_Paid();
return 0;
}
