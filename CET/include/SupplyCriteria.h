//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : E-Healthcare-Canada
//  @ File Name : SupplyCriteria.h
//  @ Date : 11/9/2010
//  @ Author : 
//
//


//////////////////////////////////////FUNCTION///////////////////////////////////////////////////////////////////
//this item is used to store all of the search criteria the the program needs to find items inside of the list container
//add any criteria you want into the instance and pass it to the search function of the list container
//if any of the fields fields are not set or empty then the search will assume the searcher doesnt care about that
//field
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#if !defined(_SUPPLYCRITERIA_H)
#define _SUPPLYCRITERIA_H


#include <QDate>
#include <QString>
#include <QList>
#include <QDebug>

#include "../Common/include/City.h"

class SupplyCriteria
{
public:
    SupplyCriteria();
    bool addCriteriaCities(QList<City*> cityList);
    bool addCriteriaCity(City *city);
    bool addCity(QString cityName);
    QList<QString> getCriteriaSupplyTypeNames();
    QList<QString> getCityNames();
    bool addCriteriaSupplyType(int newSupplyCriteria);
    bool addCriteriaSupplyType(QList<int> newSupplyCriteriaList);
    bool addCriteriaSupplyType(QString supplyTypeName);
    QList<City*> getCriteriaLocations();
    QList<int> getCriteriaSupplyTypes();

    int  getMin();
    bool setMin(int newMin);

    int  getMax();
    bool setMax(int newMax);

private:
    QList<int> supplyTypes;
    QList<City*> locations;
    QList<QString> cityNames;
    QList<QString> supplyTypeNames;
    int minSupplyQuantity;
    int maxSupplyQuantity;


};

#endif  //_SUPPLYCRITERIA_H
