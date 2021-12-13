# cpp_final_project
Final project for programming languages course; in C++
Weekly planner with GUI implementation

## driver.cpp

createCourse()
- instantiates a Course object and sets it's attributes
- returns object to main()

createEvent()
- instantiates an OtherEvent object and sets it's attributes
- returns object to main()

createMeeting()
- instantiates a Meeting object and sets it's attributes
- returns object to main()

main()
- declares Course, OtherEvent, and Meeting
- takes user input to create events
- takes user input to set days events occur on
- takes user input to print out planner

## Course.cpp

- creates Course object

Course()
- default constructor (pre-set values)

Course(string p...)
- constructor that takes in: prefix, courseNum, start and end times

setPre(string p)
- sets the prefix variable

setNum(string n)
- sets the courseNum variable

setStart(string s)
- sets the start variable

setEnd(string e)
- sets the end variable

getPre()
- returns prefix

getNum()
- returns courseNum

getStart()
- returns start

getEnd()
- returns end

stringFunction()
- prints out formatted Course object

## OtherEvent.cpp

- creates OtherEvent object

OtherEvent()
- default constructor (pre-set values)

OtherEvent(string t...)
- constructor that takes in: title, time, descript and loc

setTite(string t)
- sets the title variable

setTime(string t)
- sets the time variable

setDes(string d)
- sets the descript variable

setLoc(string l)
- sets the loc variable

getTitle()
- returns title

getTime()
- returns time

getDes()
- returns descript

getLoc()
- returns loc

stringFunction()
- prints out formatted OtherEvent object

## Meeting.cpp

- creates Meeting object

Meeting()
- default constructor (pre-set values)

Meeting(string t...)
- constructor that takes in: title, category, start and end times

setTitle(string t)
- sets the title variable

setCat(string c)
- sets the category variable

setStart(string s)
- sets the start variable

setEnd(string e)
- sets the end variable

getTitle()
- returns title

getCat()
- returns category

getStart()
- returns start

getEnd()
- returns end

stringFunction()
- prints out formatted Course object


