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
    //this->undo();
 bool empty=array.isEmpty();
    if (empty){
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
   actualData = array.takeLast();

   }
}

Estate* States::getActualData(){
 this->undo();
        return actualData;


}
void States::add(Estate* value){
QTextStream cout (stdout);

if (preactualData!=nullptr){

array.append(preactualData);

cout<<"value"<<preactualData->getresidents()<<endl;


}
   preactualData=value;

   // array.append(value);
   // array.size();
   //  bool empty=array.isEmpty();
    // cout<<"arrayisempty"<<endl<<empty;

    // this->undo();
}
