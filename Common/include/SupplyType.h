//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : E-Healthcare-Canada
//  @ File Name : SupplyType.h
//  @ Date : 11/9/2010
//  @ Author : 
//
//

#include <QString>

#if !defined(_SUPPLYTYPE_H)
#define _SUPPLYTYPE_H


class SupplyType
{
public:
        SupplyType(int typeID, QString name);
        int getTypeID();
        bool overwriteWith(SupplyType *newData);
        QString getName();
        void    setName(QString newName);
        QString toXML();

private:
    int typeId;
    QString name;
};

#endif  //_SUPPLYTYPE_H