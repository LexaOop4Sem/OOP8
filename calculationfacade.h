#ifndef CALCULATIONFACADE_H
#define CALCULATIONFACADE_H



#include <QObject>
#include <estate.h>

class Estate;

class CalculationFacade : public QObject
{
    Q_OBJECT
public:
    explicit CalculationFacade(QObject *parent = nullptr);

    static int getc(Estate *value);
};

#endif // CALCULATIONFACADE_H
