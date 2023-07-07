#include<iostream>
std::string arr1[20], arr2[20],arr3[20],arr4[20],arr5[20];
int total = 0;
void enter(){
   int choice;
   std::cout<<"How Many students do you want to enter: ";
   std::cin>>choice;
   total=total+choice; 
   for (int i = 0; i < choice; i++)
   {
     std:: cout<<"Enter data of student " <<i+1<<std::endl <<std::endl;
     std::cout<<"Enter Name: ";
     std::cin>>arr1[i];
     std::cout<<"Enter Rollno.: ";
     std::cin>>arr2[i];
     std::cout<<"Enter Course: ";
     std::cin>>arr3[i];
     std::cout<<"Enter Class: ";
     std::cin>>arr4[i];
     std::cout<<"Enter Contact: ";
     std::cin>>arr5[i];
   }
   
}
void show(){
   for (int i = 0; i < total; i++)
   {
      std::cout<<"Data of Student: "<<i+1<<std::endl<<std::endl;
      std::cout<<"Name: "<<arr1[i];
      std::cout<<"Rollno: "<<arr2[i];
      std::cout<<"Couse: "<<arr3[i];
      std::cout<<"Class: "<<arr4[i];
      std::cout<<"Contact: "<<arr5[i];
   }
   
}
void search(){
   
}
void update(){
   
}
void deleterecord(){
   
}
int main(){
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
    break;
   }
   return 0;
}