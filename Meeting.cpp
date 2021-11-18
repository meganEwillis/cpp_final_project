#include <iostream>
#include <string>

using namespace std;

class Meeting {
public:
   string title;
   string start;
   string end;
   string category;
   //default constructor --> this works when no input is given
   Meeting(){
      title = "Add Title";
      category = "Meeting";
      start = "";
      end = "";
   }
   //actual constructor
   Meeting(string t, string c, string s, string e){
      title = t;
      category = c;
      start = s;
      end = e;
   }
   //setter methods
   void setTitle(string t){
      title = t;
   }
   void setCat(string c){
      category = c;
   }
   void setStart(string s){
      start = s;
   }
   void setEnd(string e){
      end = e;
   }
   //getter methods
   string getTitle(){
      return title;
   }
   string getCat(){
      return category;
   }
   string getStart(){
      return start;
   }
   string getEnd(){
      return end;
   }
   void stringFunction(){
      cout << title << " (" << category << ")" << "\nStart Time: " << start << "\nEnd Time: " << end << endl;
   }
};

