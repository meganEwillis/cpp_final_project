#include <iostream>
#include <string>

using namespace std;

class OtherEvent {
public:
   string title; //name of the event to appear on planner
   string time; //time the event is at (assuming most things like appts, parties don't have end time)
   string descript; //description you may need to add (extra details, etc.)
   string loc; //location of the event
   
   //default constructor
   OtherEvent(){
      title = "Event";
      time = "00:00";
      descript = "";
      loc = "";
   }
   //actual constructor
   OtherEvent(string t, string time, string d, string l){
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
      if(descript != "" && loc != ""){
         cout << title << "\nTime: " << time << "\nNotes: " << descript << "; " << loc << endl;
      }
      else if(descript == "" && loc == ""){
         cout << title << "\nTime: " << time << endl;
      }
      else if(descript == "" && loc != ""){
         cout << title << "\nTime: " << time << "\nNotes: " << loc << endl;
      }
      else{
         cout << title << "\nTime: " << time << "\nNotes: " << descript << endl;
      }
   }
};