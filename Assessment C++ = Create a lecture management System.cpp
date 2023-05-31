/*Create a lecture management System 
Make sure each business logic is denoted with appropriate comments and make your code interactive and represent clean and clear output on your console screen.
Adhere to the coding principles 
Define a class to represent lecture details. 
Include the following members and the program should handle at least details of 5 lecturers. 
Data members:
	a) Name of the lecturer
	b) Name of the subject
	c) Name of course
	d) Number of lecturers
Data functions: 
	a) To assign initial values 
	b) To add a lecture details 
	c) To display name and lecture details 
Make sure you have to use constructor concept in it 
Make sure all naming conversion properly mention in this project work 
Make sure all method name 
Use class and object concepts 
Upload all features in develop branch after completion all features merge it with the main branch.*/


/*************************************************PROGRAM*****************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

// Create a class for Lecturer 
class Lecturer {
    private:
    	int lecturer;
        string name;
        string subject;
        string course;
        int no_lectures;
        float hours, min;
    public:

	Lecturer() //Using constructor for get the User Values2
	{
		cout << "\nLecturer number : ";
    	cin>>lecturer;
	
		cin.ignore(); // to clear the input buffer   
    	
		cout << "Enter name  : ";
    	getline(cin, name);
  
    
    	cout << "Enter course :";
    	getline(cin, course);
        

    	cout << "Enter subject  : ";
    	getline(cin, subject);


    	cout << "Enter no of lectures : ";
    	cin>>no_lectures;
    	
		cout << "Enter hours : ";
    	cin>>hours;
    	  	    	
		cout << "Enter minutes : ";
    	cin>>min;
    	
    	
    	cin.ignore(); // to clear the input buffer  
	} 
	
	void show_details() // To print the Lecturers Details
	{
			cout<<"\n\n***************************** Show the Lecturers Details ************************************";
			cout<<endl<<"Lecturer No.-"<<lecturer<<endl;
            cout << "Name: " << name << endl;
            cout << "Course: " << course << endl;
            cout << "Subject: " << subject << endl;           
            cout << "No of Lectures : " << no_lectures << endl;
            cout << "Total Hours : " << hours << " hours "<<min<<" min"<< endl;
	}   
};	

int main()
{
	Lecturer l1, l2,l3,l4,l5; // Object for 5 Lecturers and contructor.......

	l1.show_details();
	l2.show_details();
	l3.show_details();
	l4.show_details();
	l5.show_details();
	
	return 0;
		
}
