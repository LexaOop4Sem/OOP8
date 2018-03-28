#include <QObject>
#include <estate.h>

class States : public QObject {
    Q_OBJECT public : explicit States(QObject* parent = nullptr);
    ~States();

    void undo();
    bool hasStates();
    Estate* getActualData();
    void add(Estate* value);
private:
    QList<Estate*> array;
    Estate* actualData;
};

// Листинг файла states.cpp #include "states.h"

States::States(QObject* parent)
    : QObject(parent)
{
    actualData = nullptr;
}

States::~States()
{ // delete: actualData
if(actualData){
delete actualData;         actualData = nullptr;
  }
 // delete and cleare: arra
 qDeleteAll(array);     arra
