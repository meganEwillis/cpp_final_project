#include "Course.cpp"
#include "Meeting.cpp"
#include "PersonalEvent.cpp" //these import the files that we need with the objects in them

#include <iostream>
#include <string>
using namespace std;

Course createCourse(){
   Course c;
   
   string pre;
   int num;
   string start;
   string end;
   
   cout << "Enter the course prefix: " << endl;
   cin >> pre;
   cout << "Enter the course number: " << endl;
   cin >> num;
   cout << "Enter the start time of the course: " << endl;
   cin >> start;
   cout << "Enter the end time of the course: " << endl;
   cin >> end;
   
   c.setPre(pre);
   c.setNum(num);
   c.setStart(start);
   c.setEnd(end);
   
   //c.stringFunction();
   
   return(c);
}

Meeting createMeeting(){
   Meeting m;
   
   string title;
   string start;
   string end;
   string cat;
   
   cout << "What would you like to title this meeting? \n";
   cin.ignore();
   getline(cin, title);
   cout << "Enter the start time of this meeting: " << endl;
   cin >> start;
   cout << "Enter the end time of this meeting: " << endl;
   cin >> end;
   cout << "Enter the category of this meeting (work, school etc.): " << endl;
   cin >> cat;
   
   m.setTitle(title);
   m.setStart(start);
   m.setEnd(end);
   m.setCat(cat);
   
   m.stringFunction();
   
   return(m);
}

PersonalEvent createEvent(){
   PersonalEvent p;
   
   string title;
   string time;
   string descript = "";
   string loc = "";
   
   cout << "Enter the title of this event: " << endl;
   cin.ignore();
   getline(cin, title);
   cout << "Enter the time of this event: " << endl;
   cin >> time;
   cout << "Enter a description (optional): " << endl;
   cin.ignore();
   getline(cin, descript);
   //cin >> descript;
   cout << "Enter the loaction of this event (optional): " << endl;
   cin.ignore();
   getline(cin, loc);
      
   p.setTitle(title);
   p.setTime(time);
   p.setDes(descript);
   p.setLoc(loc);
   
   p.stringFunction();
   
   return(p);
}

int main(){
   Course course;
   Meeting meeting;
   PersonalEvent personal;
   string newEvent;
   Course c[20];
   int iter = 0;
   cout << "Would you like to add a new event to your planner?(y/n) " << endl;
   cin >> newEvent;
   while (newEvent == "y"){
      cout << "iter value: " << iter << endl;
      int eventType;
      cout << "Would you like to add:\n\ta Course: enter 1\n\ta Meeting: enter 2\n\ta Personal Event: enter 3\nexit: enter 0" << endl; 
      cin >> eventType;
      if (eventType == 1){
         course = createCourse();
         c[iter] = course;
         iter++;
      }
      else if (eventType == 2){
         meeting = createMeeting();
      }
      else if (eventType == 3){
         personal = createEvent();
      }
      else{
         newEvent = "n";
      }
      //cout << &course << endl;   this is the same location each time
      //cout << meeting << endl;
      //cout personal << endl;
   }
   cout << "------------------" << endl;
   for(int i = 0; i<iter; i++){
      c[i].stringFunction();   //this is printing the last item 2 times
      cout << i << endl;
   } 
}

//TO DO next: user input (research, and figure it out)
   //add if statements so that correct object is created
      //will I need some way to create the object name (iterator) so they are always different?
      //think c1 (1 in iterated and somehow appended to the object name, next time will be c2).