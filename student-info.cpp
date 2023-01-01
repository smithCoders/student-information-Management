#include<iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

class Studentinfo{
    public:
        string student_name[50];
        string student_id[50];
        string student_age[50];
        string department[50];
        int number_of_students=0;



void array_insertion(){
	system("cls");
	int numberofstudents;
	cout<<"number of student you want to insert: ";
	cin>>numberofstudents;
	for(int i=0;i<numberofstudents;i++){
            cout<<"Student "<<i+1<<". Name: ";
            cin>>student_name[i];
            cout<<"Enter age: ";
            cin>>student_age[i];
            cout<<"Student id: ";
            cin>>student_id[i];
            cout<<"student department: ";
            cin>>department[i];


number_of_students++;
}
}


void array_desplay(){
    system("cls");
    if(number_of_students!=0){
            cout<<left<<setw(30)<<"Name of the students"<<left<<setw(20)<<"ID Number"<<left<<setw(10)<<"Age"<<left<<setw(30)<<"deparment"<<endl;
    for( int i=0; i<number_of_students; i++){
            cout<<left<<setw(30)<<student_name[i]<<left<<setw(20)<<student_id[i]<<left<<setw(10)<<student_age[i]<<left<<setw(30)<<department[i]<<endl;

            }
            cout<<endl;
            }
    else
        cout<<"empty-data"<<endl<<endl;
}


void searchig_by_id(){

    system("cls");
    int i;
    string searching_id;
    int ans=-1;
    cout<<"Enter id number to be searched"<<endl;
    cin>>searching_id;
    for(int i=0;i<number_of_students;i++)
    {
        if(student_id[i]==searching_id){
                ans=i;
        cout<<"Student with id number  "<<searching_id<<" is present at index "<<ans<<endl;
        cout<< "data of student :"<<endl;
        cout<< "name :"<<student_name[i]<<endl;
        cout<< "id: "<<student_id[i]<<endl;
        cout<< "age: "<<student_age[i]<<endl;
        cout<<"department: "<<department[i]<<endl<<endl;
        break;
        }
    }
    if(ans==-1){
    cout<<"The element "<<searching_id<<" is not there in the array";
    }

}


void searching_by_name(){

        system("cls");
    int i;
    string searching_name;
    int ans=-1;
    cout<<"Enter the name of the student to be searched"<<endl;
    cin>>searching_name;
    for(int i=0;i<number_of_students;i++)
    {
        if(student_name[i]==searching_name){
                ans=i;
        cout<<"Student  "<<searching_name<<" is present at index "<<ans<<endl;
        cout<< "data of student :"<<endl;
        cout<< "name :"<<student_name[i]<<endl;
        cout<< "id: "<<student_id[i]<<endl;
        cout<< "age: "<<student_age[i]<<endl;
        cout<<"department: "<<department[i]<<endl<<endl;
        break;
        }
    }
    if(ans==-1){
    cout<<"The element "<<searching_name<<" is not there in the array";
    }

}



void Sort_using_id(){
    int i, j;
    for (i = 0; i < number_of_students - 1; i++){

        // Last i elements are already
        // in place
        for (j = 0; j < number_of_students - i - 1; j++){
            if (student_id[j] > student_id[j + 1]){
                swap(student_name[j], student_name[j + 1]);
                swap(student_id[j], student_id[j + 1]);
                swap(student_age[j], student_age[j + 1]);
                swap(department[j], department[j + 1]);
   }
   }
}
 //call void array_desplay();

 cout<<"\ndata after sortin by id\n"<<endl;
if(number_of_students!=0){
            cout<<left<<setw(20)<<"ID Number"<<left<<setw(30)<<"Name of the students"<<left<<setw(10)<<"Age"<<left<<setw(30)<<"deparment"<<endl;
    for( int i=0; i<number_of_students; i++){
            cout<<left<<setw(20)<<student_id[i]<<left<<setw(30)<<student_name[i]<<left<<setw(10)<<student_age[i]<<left<<setw(30)<<department[i]<<endl;

            }
            cout<<endl;
            }

}


void sorting_by_name(){

    string temp,temp1,temp2,temp3;
    for (int i = 0; i < number_of_students - 1; i++) {
        for (int j = i + 1; j < number_of_students; j++) {
            if (student_name[i] > student_name[j]) {
                //swapping with smallest element of array.
                temp = student_name[j];
                student_name[j] = student_name[i];
                student_name[i] = temp;

                temp1 = student_age[j];
                student_age[j] = student_age[i];
                student_age[i] = temp1;

                temp2 = student_id[j];
                student_id[j] = student_id[i];
                student_id[i] = temp2;

                temp3 = department[j];
                department[j] = department[i];
                department[i] = temp3;
            }
        }
    }

       //call void array_desplay();

 cout<<"data after sortin by name"<<endl;
if(number_of_students!=0){
            cout<<left<<setw(30)<<"Name of the student"<<left<<setw(20)<<"ID Number"<<left<<setw(10)<<"Age"<<left<<setw(30)<<"deparment"<<endl;
    for( int i=0; i<number_of_students; i++){
            cout<<left<<setw(30)<<student_name[i]<<left<<setw(20)<<student_id[i]<<left<<setw(10)<<student_age[i]<<left<<setw(30)<<department[i]<<endl;

            }
            cout<<endl;
            }
}


void array_deletint_using_id(){

    int i,j,found=0;
    string deleting_id;
    cout<<"\nEnter student id to Delete: ";
    cin>>deleting_id;
    for(i=0; i<number_of_students; i++)
    {
        if(student_id[i]==deleting_id)
        {
            for(j=i; j<(number_of_students-1); j++){
                student_name[j] = student_name[j+1];
                student_id[j] = student_id[j+1];
                student_age[j] = student_age[j+1];
                department[j] = department[j+1];
            found=1;
            i--;}
            number_of_students--;
        }
    }
    if(found==0){
        cout<<"\nstudent id doesn't found in the list!";
    }
    else
    {
        cout<<"\nstudent Deleteded Successfully!";
        cout<<"\n\nThe New students information is:\n";
        cout<<left<<setw(30)<<"Name of the students"<<left<<setw(20)<<"ID Number"<<left<<setw(10)<<"Age"<<left<<setw(30)<<"deparment"<<endl;
        for(i=0; i<number_of_students; i++){
                 cout<<left<<setw(30)<<student_name[i]<<left<<setw(20)<<student_id[i]<<left<<setw(10)<<student_age[i]<<left<<setw(30)<<department[i]<<endl;
    }
}

}




void array_deletint_using_name(){

    int i,j,found=0;
    string deleting_name;
    cout<<"\nEnter student name to Delete: ";
    cin>>deleting_name;
    for(i=0; i<number_of_students; i++)
    {
        if(student_name[i]==deleting_name)
        {
            for(j=i; j<(number_of_students-1); j++){
                student_name[j] = student_name[j+1];
                student_id[j] = student_id[j+1];
                student_age[j] = student_age[j+1];
                department[j] = department[j+1];
            found=1;
            i--;}
            number_of_students--;
        }
    }
    if(found==0)
        cout<<"\nstudent "<<deleting_name<<" doesn't found in the list!";
    else
    {
        cout<<"\nstudent Deleteded Successfully!";
        cout<<"\n\nThe New students information is:\n";
        cout<<left<<setw(30)<<"Name of the students"<<left<<setw(20)<<"ID Number"<<left<<setw(10)<<"Age"<<left<<setw(30)<<"deparment"<<endl;
        for(i=0; i<number_of_students; i++){
                cout<<left<<setw(30)<<student_name[i]<<left<<setw(20)<<student_id[i]<<left<<setw(10)<<student_age[i]<<left<<setw(30)<<department[i]<<endl;
        }
        }
        }
        };





int main(){
    Studentinfo object;
      string s;
    int order;
    int number_of_students;
    do{
        cout<<"\n\ntasks you want to perform"<<endl;
        cout<<"press 1 to store student data"<<endl;
        cout<<"press 2 to display student data"<<endl;
        cout<<"press 3 for searching student data using id"<<endl;
        cout<<"press 4 for searching student data using name"<<endl;
        cout<<"press 5 for sorting students data using their id"<<endl;
        cout<<"press 6 for sorting students data using their name"<<endl;
        cout<<"press 7 for deleting student data using their id"<<endl;
        cout<<"press 8 for deleting student data using their name"<<endl;
        cout<<"press 9 to exit "<<endl;
        cout<<"your choice: ";


        cin>>order;
        switch(order){
        case 1:
            object.array_insertion();
            break;
        case 2:
          //  cout<<"student name\tage\tID number\tdepartment";
            object.array_desplay();
            break;
    case 3:
        object.searchig_by_id();
        break;
     case 4:
         object.searching_by_name();
         break;
     case 5:
        object.Sort_using_id();
        break;
     case 6:
         object.sorting_by_name();
         break;
     case 7:
        object.array_deletint_using_id();
        break;
     case 8:
        object. array_deletint_using_name();
        break;
     case 9:
         cout<<"thanks for using the program"<<endl;
        exit(0);
}

    }while(order!=9);

return 0;
}
