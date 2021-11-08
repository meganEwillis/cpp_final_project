#include <iostream>
#include <string>
#include <list>
#include <vector>

using namespace std;

class Course {
public:
   string prefix;
   int courseNum;
   string start;
   string end;
   //default constructor
   Course(){
      prefix = "none";
      courseNum = 000;
      start = "00:00";
      end = "00:00";
      //days = {"M", "T", "W", "Th", "F"};
   } 
   //actual constructor
   Course(string p, int c, string s, string e){  // string d
      prefix = p;
      courseNum = c;
      start = s;
      end = e;
      //days = d;
   }
   void stringFunction(){
      cout << prefix << " " << courseNum << "\n" << "Start Time: " << start << "\nEnd Time: " << end;// << //"\nDays: " << days;
   }
};

int main(){
   Course c("STAT", 118, "10:00am", "10:50am");  // {"Monday", "Wednesday", "Friday"}
   c.stringFunction();
}