#include "Course.cpp"
#include "Meeting.cpp"
#include "OtherEvent.cpp"

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
      
   return(c);
} //close createCourse

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
   
   //m.stringFunction();
   
   return(m);
} //close createMeeting

OtherEvent createEvent(){
   OtherEvent p;
   
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
   cout << "Enter the loaction of this event (optional): " << endl;
   cin.ignore();
   getline(cin, loc);
      
   p.setTitle(title);
   p.setTime(time);
   p.setDes(descript);
   p.setLoc(loc);
   
   return(p);
} //close createEvent

int main(){
   Course course;
   Meeting meeting;
   OtherEvent personal;

   string newEvent;

   Course c[20];
   Meeting m[20];
   OtherEvent p[20];
   
   Course cMon[20]; int cm = 0;
   Course cTues[20]; int ct = 0;
   Course cWed[20]; int cw = 0;
   Course cThur[20]; int cth = 0;
   Course cFri[20]; int cf = 0;
   Course cSat[20]; int cs = 0;
   Course cSun[20]; int csu = 0;  
      
   Meeting mMon[20]; int mm = 0;
   Meeting mTues[20]; int mt = 0;
   Meeting mWed[20]; int mw = 0;
   Meeting mThur[20]; int mth = 0;
   Meeting mFri[20]; int mf = 0;
   Meeting mSat[20]; int ms = 0;
   Meeting mSun[20]; int msu = 0;
   
   OtherEvent pMon[20]; int pm = 0;
   OtherEvent pTues[20]; int pt = 0;
   OtherEvent pWed[20]; int pw = 0;
   OtherEvent pThur[20]; int pth = 0;
   OtherEvent pFri[20]; int pf = 0;
   OtherEvent pSat[20]; int ps = 0;
   OtherEvent pSun[20]; int psu = 0;

   int i1 = 0;
   int i2 = 0;
   int i3 = 0;
   
   string day;
   string view_planner = "no";
   
   cout << "Would you like to add a new event to your planner?(yes/no) " << endl;
   cin >> newEvent;
   while (newEvent == "yes"){
      int eventType;
      cout << "Would you like to add an event or exit?\n\tAdd a Course: enter 1\n\tAdd a Meeting: enter 2\n\tAdd an Other Event: enter 3\n\tExit: enter 0" << endl; 
      cin >> eventType;
      
      if (eventType == 1){
         course = createCourse();
         c[i1] = course;
         i1++;
         string addc = "yes";
         
         while (addc == "yes"){
            cout << "What day does this course meet?(Sun/Mon/Tues/Wed/Thur/Fri/Sat) " << endl;
            cin >> day;
            
            if (day == "Sun"){
               cSun[csu] = course;
               csu++;
            }
            else if (day == "Mon"){
               cMon[cm] = course;
               cm++;
            }
            else if (day == "Tues"){
               cTues[ct] = course;
               ct++;
            }
            else if (day == "Wed"){
               cWed[cw] = course;
               cw++;
            }
            else if (day == "Thur"){
               cThur[cth] = course;
               cth++;
            }
            else if (day == "Fri"){
               cFri[cf] = course;
               cf++;
            }
            else if (day == "Sat"){
               cSat[cs] = course;
               cs++;
            }
            else{
               cout << "Re-enter the day in the correct format " << endl;
               cin >> day;
            }
            cout << "Would you like to add another day?(yes/no): " << endl;
            cin >> addc;
         } //close while addc
      } //close if eventType == 1
      else if (eventType == 2){
         meeting = createMeeting();
         m[i2] = meeting;
         i2++;
         cout << "What day is this meeting on? " << endl;
         cin >> day;
         
         if (day == "Sun"){
               mSun[msu] = meeting;
               msu++;
            }
         else if (day == "Mon"){
            mMon[mm] = meeting;
            mm++;
         }
         else if (day == "Tues"){
            mTues[mt] = meeting;
            mt++;
         }
         else if (day == "Wed"){
            mWed[mw] = meeting;
            mw++;
         }
         else if (day == "Thur"){
            mThur[mth] = meeting;
            mth++;
         }
         else if (day == "Fri"){
            mFri[mf] = meeting;
            mf++;
         }
         else if (day == "Sat"){
            mSat[ms] = meeting;
            ms++;
         }
         else{
            cout << "Re-enter the day in the correct format " << endl;
            cin >> day;
         }
      } //close else if
      else if (eventType == 3){
         personal = createEvent();
         p[i3] = personal;
         i3++;
         cout << "What day is this event on? " << endl;
         cin >> day;
         if (day == "Sun"){
               pSun[psu] = personal;
               psu++;
            }
         else if (day == "Mon"){
            pMon[pm] = personal;
            pm++;
         }
         else if (day == "Tues"){
            pTues[pt] = personal;
            pt++;
         }
         else if (day == "Wed"){
            pWed[pw] = personal;
            pw++;
         }
         else if (day == "Thur"){
            pThur[pth] = personal;
            pth++;
         }
         else if (day == "Fri"){
            pFri[pf] = personal;
            pf++;
         }
         else if (day == "Sat"){
            pSat[ps] = personal;
            ps++;
         }
         else{
            cout << "Re-enter the day in the correct format " << endl;
            cin >> day;
         }
      } //close else if
      else{
         newEvent = "no";
      }
   } //close while newEvent
   
   string view;
   int intView;
   cout << "Would you like to view your planner?(yes/no)" << endl;
   cin >> view;
   
   while (view == "yes"){
      cout << "What would you like to view:\n\tAll Courses: 0\n\tAll Meetings: 1\n\tAll Other Events: 2\n\tView Entire Week: 3\n\tView More Options: 4" << endl;
      cin >> intView;
      int intDay;
      
      if (intView == 4){
         string specDay = "yes";
         cout << "Would you like to view your schedule for a specific day?" << endl;
         cin >> specDay;
         if (specDay == "yes"){
            cout << "Which day would you like to view?\n\tMonday: 0\n\tTuesday: 1\n\tWednesday: 2\n\tThursday: 3\n\tFriday: 4\n\tSaturday: 5\n\tSunday: 6" << endl;
            cin >> intDay;
            switch(intDay){
               case 0:
                  cout << "***MONDAY***\n----------" << endl;
                  cout << "Courses:" << endl;
                  for(int iDay = 0; iDay<cm; iDay++){
                     cMon[iDay].stringFunction();
                  }
                  cout << "Meetings:" << endl;
                  for(int iDay = 0; iDay<mm; iDay++){
                     mMon[iDay].stringFunction();
                  }
                  cout << "Other Events:" << endl;
                  for(int iDay = 0; iDay<pm; iDay++){
                     pMon[iDay].stringFunction();
                  }
                  break;
               case 1:
                  cout << "\n***TUESDAY***\n----------" << endl;
                  cout << "Courses:" << endl;
                  for(int iDay = 0; iDay<ct; iDay++){
                     cTues[iDay].stringFunction();
                  }
                  cout << "Meetings:" << endl;
                  for(int iDay = 0; iDay<mt; iDay++){
                     mTues[iDay].stringFunction();
                  }
                  cout << "Other Events:" << endl;
                  for(int iDay = 0; iDay<pt; iDay++){
                     pTues[iDay].stringFunction();
                  }
                  break;
               case 2:
                  cout << "\n***WEDNESDAY***\n----------" << endl;
                  cout << "Courses:" << endl;
                  for(int iDay = 0; iDay<cw; iDay++){
                     cWed[iDay].stringFunction();
                  }
                  cout << "Meetings:" << endl;
                  for(int iDay = 0; iDay<mw; iDay++){
                     mWed[iDay].stringFunction();
                  }
                  cout << "Other Events:" << endl;
                  for(int iDay = 0; iDay<pw; iDay++){
                     pWed[iDay].stringFunction();
                  }
                  break;
               case 3:
                  cout << "\n***THURSDAY***\n----------" << endl;
                  cout << "Courses:" << endl;
                  for(int iDay = 0; iDay<cth; iDay++){
                     cThur[iDay].stringFunction();
                  }
                  cout << "Meetings:" << endl;
                  for(int iDay = 0; iDay<mth; iDay++){
                     mThur[iDay].stringFunction();
                  }
                  cout << "Other Events:" << endl;
                  for(int iDay = 0; iDay<pth; iDay++){
                     pThur[iDay].stringFunction();
                  }
                  break;
               case 4:
                  cout << "\n***FRIDAY***\n----------" << endl;
                  cout << "Courses:" << endl;
                  for(int iDay = 0; iDay<cf; iDay++){
                     cFri[iDay].stringFunction();
                  }
                  cout << "Meetings:" << endl;
                  for(int iDay = 0; iDay<mf; iDay++){
                     mFri[iDay].stringFunction();
                  }
                  cout << "Other Events:" << endl;
                  for(int iDay = 0; iDay<pf; iDay++){
                     pFri[iDay].stringFunction();
                  }
                  break;
               case 5:
                  cout << "\n***SATURDAY***\n----------" << endl;
                  cout << "Courses:" << endl;
                  for(int iDay = 0; iDay<cs; iDay++){
                     cSat[iDay].stringFunction();
                  }
                  cout << "Meetings:" << endl;
                  for(int iDay = 0; iDay<ms; iDay++){
                     mSat[iDay].stringFunction();
                  }
                  cout << "Other Events:" << endl;
                  for(int iDay = 0; iDay<ps; iDay++){
                     pSat[iDay].stringFunction();
                  }
                  break;
               case 6:
                  cout << "\n***SUNDAY***\n----------" << endl;
                  cout << "Courses:" << endl;
                  for(int iDay = 0; iDay<csu; iDay++){
                     cSun[iDay].stringFunction();
                  }
                  cout << "Meetings:" << endl;
                  for(int iDay = 0; iDay<msu; iDay++){
                     mSun[iDay].stringFunction();
                  }
                  cout << "Other Events:" << endl;
                  for(int iDay = 0; iDay<psu; iDay++){
                     pSun[iDay].stringFunction();
                  }
                  break;
            } //close switch
         } //close if specDay
      } //close if intView 4
      else{
         switch(intView){
            case 0:
               cout << "***COURSES***\n--------" << endl;
               for(int i = 0; i<i1; i++){
                  c[i].stringFunction();
            //cout << i << endl;
               }
               break;
            case 1:
               cout << "***MEETINGS***\n--------" << endl;
               for(int j = 0; j<i2; j++){
                  m[j].stringFunction();
               }
               break; 
            case 2:
               cout << "***OTHER EVENTS***\n--------" << endl;
               for(int k = 0; k<i2; k++){
                  p[k].stringFunction();
               } 
               break;
            case 3:
               cout << "MY WEEK\n---------" << endl;
               cout << "***MONDAY***\n----------" << endl;
                  cout << "Courses:" << endl;
                  for(int iDay = 0; iDay<cm; iDay++){
                     cMon[iDay].stringFunction();
                  }
                  cout << "Meetings:" << endl;
                  for(int iDay = 0; iDay<mm; iDay++){
                     mMon[iDay].stringFunction();
                  }
                  cout << "Other Events:" << endl;
                  for(int iDay = 0; iDay<pm; iDay++){
                     pMon[iDay].stringFunction();
                  }
                  cout << "\n***TUESDAY***\n----------" << endl;
                  cout << "Courses:" << endl;
                  for(int iDay = 0; iDay<ct; iDay++){
                     cTues[iDay].stringFunction();
                  }
                  cout << "Meetings:" << endl;
                  for(int iDay = 0; iDay<mt; iDay++){
                     mTues[iDay].stringFunction();
                  }
                  cout << "Other Events:" << endl;
                  for(int iDay = 0; iDay<pt; iDay++){
                     pTues[iDay].stringFunction();
                  }
                  cout << "\n***WEDNESDAY***\n----------" << endl;
                  cout << "Courses:" << endl;
                  for(int iDay = 0; iDay<cw; iDay++){
                     cWed[iDay].stringFunction();
                  }
                  cout << "Meetings:" << endl;
                  for(int iDay = 0; iDay<mw; iDay++){
                     mWed[iDay].stringFunction();
                  }
                  cout << "Other Events:" << endl;
                  for(int iDay = 0; iDay<pw; iDay++){
                     pWed[iDay].stringFunction();
                  }
                  cout << "\n***THURSDAY***\n----------" << endl;
                  cout << "Courses:" << endl;
                  for(int iDay = 0; iDay<cth; iDay++){
                     cThur[iDay].stringFunction();
                  }
                  cout << "Meetings:" << endl;
                  for(int iDay = 0; iDay<mth; iDay++){
                     mThur[iDay].stringFunction();
                  }
                  cout << "Other Events:" << endl;
                  for(int iDay = 0; iDay<pth; iDay++){
                     pThur[iDay].stringFunction();
                  }
                  cout << "\n***FRIDAY***\n----------" << endl;
                  cout << "Courses:" << endl;
                  for(int iDay = 0; iDay<cf; iDay++){
                     cFri[iDay].stringFunction();
                  }
                  cout << "Meetings:" << endl;
                  for(int iDay = 0; iDay<mf; iDay++){
                     mFri[iDay].stringFunction();
                  }
                  cout << "Other Events:" << endl;
                  for(int iDay = 0; iDay<pf; iDay++){
                     pFri[iDay].stringFunction();
                  }
                  cout << "\n***SATURDAY***\n----------" << endl;
                  cout << "Courses:" << endl;
                  for(int iDay = 0; iDay<cs; iDay++){
                     cSat[iDay].stringFunction();
                  }
                  cout << "Meetings:" << endl;
                  for(int iDay = 0; iDay<ms; iDay++){
                     mSat[iDay].stringFunction();
                  }
                  cout << "Other Events:" << endl;
                  for(int iDay = 0; iDay<ps; iDay++){
                     pSat[iDay].stringFunction();
                  }
                  cout << "\n***SUNDAY***\n----------" << endl;
                  cout << "Courses:" << endl;
                  for(int iDay = 0; iDay<csu; iDay++){
                     cSun[iDay].stringFunction();
                  }
                  cout << "Meetings:" << endl;
                  for(int iDay = 0; iDay<msu; iDay++){
                     mSun[iDay].stringFunction();
                  }
                  cout << "Other Events:" << endl;
                  for(int iDay = 0; iDay<psu; iDay++){
                     pSun[iDay].stringFunction();
                  }
          } //close switch
      } //close else
      cout << "----------\nWould you like to view anything else?" << endl;
      cin >> view; 
   } //close while view  
} //close main