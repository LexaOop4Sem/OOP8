#include "states.h"
#include <iostream>

#include <QTextStream>
States::States(QObject* parent)
    : QObject(parent)
{
   // actualData = nullptr;
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
        Estate* Data=actualData;
         this->undo();
        return Data;

    }
}
void States::add(Estate* value){
QTextStream cout (stdout);
    array.append(value);
     bool empty=array.isEmpty();
     cout<<"arrayisempty"<<endl<<empty;

     this->undo();
}
