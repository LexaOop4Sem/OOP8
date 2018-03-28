#include "states.h"
#include <iostream>

States::States(QObject* parent)
    : QObject(parent)
{
    actualData = nullptr;
}

States::~States()
{
    // delete: actualData
if(actualData){
delete actualData;
    actualData = nullptr;
  }

// delete and cleare: arra
 qDeleteAll(array);
 array.clear();
}
bool States::hasStates(){
    if (actualData==nullptr){
        return 0;
    }
    return 1;
}

void States::undo(){
   bool empty=array.isEmpty();
   if (empty){
       actualData=nullptr;
   }
   else{

     Estate* last= array.takeLast();
     actualData=last;
   }
}

Estate* States::getActualData(){

    bool check=hasStates();
    if (check==0) return nullptr;
    else
    {
        return actualData;

    }
}
void States::add(Estate* value){

    array.append(value);
    std::cout<<"added";
}
