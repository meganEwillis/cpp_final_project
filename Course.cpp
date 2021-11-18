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
      prefix = "Add Course Prefix";
      courseNum = 000;
      start = "";
      end = "";
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
public:
   //setter methods
   void setPre(string p){
      prefix = p;
   }
   void setNum(int n){
      courseNum = n;
   }
   void setStart(string s){
      start = s;
   }
   void setEnd(string e){
      end = e;
   }
   //getter methods
   string getPre(){
      return prefix;
   }
   int getNum(){
      return courseNum;
   }
   string getStart(){
      return start;
   }
   string getEnd(){
      return end;
   }

   void stringFunction(){
      cout << prefix << " " << courseNum << "\n" << "Start Time: " << start << "\nEnd Time: " << end << endl;// << //"\nDays: " << days;
   }
};