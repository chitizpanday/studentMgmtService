#include<iostream>
std::string arr1[20],arr2[20],arr3[20];
int totalStudent;
void enter(){
  std::cout<<"how many student do you want to enter? ";
  std::cin>>totalStudent;
  for (int i = 0; i < totalStudent; i++)
  {
    std::cout<<"Please enter the records of student: "<<i+1 <<std::endl;
    std::cout<<"Student's name: ";
    std::cin.ignore();
    std::getline(std::cin, arr1[i]);
    std::cout<<"Student's ID: ";
    std::cin>>arr2[i];
    std::cout<<"Student's class: ";
    std::cin>>arr3[i];
  }
}
void show(){
  for (int i = 0; i < totalStudent; i++)
  {
    std::cout<<"Displaying record of student "<<i+1<<std::endl
             <<"Student's name: "<<arr1[i]<<std::endl
             <<"Student's ID: "<<arr2[i]<<std::endl
             <<"Student's Class: "<<arr3[i]<<std::endl;
  }
  
}
void search(){
  std::string studentID, studentName, studentClass;
   std::cout<<"Search: ";
   std::cin>> studentID;
   for(int i=0; i<totalStudent; i++){
    if (studentID== arr2[i])
    {
      std::cout<<"Displaying record of student "<<i+1<<std::endl
             <<"Student's name: "<<arr1[i]<<std::endl
             <<"Student's ID: "<<arr2[i]<<std::endl
             <<"Student's Class: "<<arr3[i]<<std::endl;
    }
    else if(studentName==arr1[i]){
      std::cout<<"Displaying record of student "<<i+1<<std::endl
             <<"Student's name: "<<arr1[i]<<std::endl
             <<"Student's ID: "<<arr2[i]<<std::endl
             <<"Student's Class: "<<arr3[i]<<std::endl;
    }
    
   }

}
void update(){
   
}
void deleterecord(){
   
}
 main(){
   int userValue;
   while(true){
   std::cout<<"Please press 1 to enter data"<<std::endl;
    std::cout<<"Please press 2 to show data"<<std::endl;
    std::cout<<"Please press 3 to search data"<<std::endl;
    std::cout<<"Please press 4 to update data"<<std::endl;
    std::cout<<"Please press 5 to delete data"<<std::endl;
    std::cout<<"Please press 6 to exit"<<std::endl;
    std::cin>>userValue;

    switch (userValue)
    {
    case 1:
      enter();
      break;
      case 2:
      show();
      break;
      case 3:
      search();
      break;
      case 4:
      update();
      break;
      case 5:
      deleterecord();
      break;
      case 6:
      exit(0);
      break;
    
    default:
      std::cout<<"Invalied Input"<<std::endl;
      break;
    }
   }
}