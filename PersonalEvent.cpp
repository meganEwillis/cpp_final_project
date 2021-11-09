#include <iostream>
#include <string>

using namespace std;

class PersonalEvent {
public:
   string title; //name of the event to appear on planner
   string time; //time the event is at (assuming most things like appts, parties don't have end time)
   string descript; //description you may need to add (extra details, etc.)
   string loc; //location of the event
   
   //default constructor
   PersonalEvent(){
      title = "Event";
      time = "00:00";
      descript = "";
      loc = "";
   }
   //actual constructor
   PersonalEvent(string t, string time, string d, string l){
      title = t;
      time = time;
      descript = d;
      loc = l;
   }
   //setter methods
   void setTitle(string t){
      title = t;
   }
   void setTime(string t){
      time = t;
   }
   void setDes(string d){
      descript = d;
   }
   void setLoc(string l){
      loc = l;
   }
   //getter methods
   string getTitle(){
      return title;
   }
   string getTime(){
      return time;
   }
   string getDes(){
      return descript;
   }
   string getLoc(){
      return loc;
   }
   void stringFunction(){
      cout << title << "\nTime: " << time << "\nNotes: " << descript << "; " << loc << endl;
   }
};

int main(){
   PersonalEvent p;
   p.setTitle("Dr.Appointment");
   p.setTime("10:00 am");
   p.setDes("w/ Dr. Bauer");
   p.setLoc("@ 300 Longwood, floor 2");
   p.stringFunction();
}