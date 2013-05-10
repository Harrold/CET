//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : E-Healthcare-Canada
//  @ File Name : Shipment.h
//  @ Date : 11/9/2010
//  @ Author : 
//
//


#if !defined(_SHIPMENT_H)
#define _SHIPMENT_H
#include <QString>
#include "City.h"
#include <QDate>

class Shipment
{
public:

    enum SHIPMENT_STATUS
    {
            PREPARED,
            SENT,
            RECEIVED
    };

    Shipment();

    Shipment(int shipmentID, int type, SHIPMENT_STATUS Status, int shipmentQuantity,
             float senderLon,float senderLat,
             float destinationLon,float destinationLat,
               QDate CreatedDate= QDate::currentDate(),
               QDate sentDate=QDate(),
               QDate expectedDate =QDate(),
               QDate receivedDate=QDate());
        ~Shipment();

        int getID();
        int getType();
        int getQuantity();
        City* getSender();
        City* getDestination();
        SHIPMENT_STATUS getCurrentStatus();
        void setType(int newType);
        void setQuantity(int newQuantity);

        void setCurrentStatus(SHIPMENT_STATUS newStatus);
        void receive();
        void send();
        QString print();
        QString toXML();
        QDate getExpectedDate();
        void setExpectedDate(QDate eDate);
        QDate getSentDate();
        void setSentDate(QDate sDate);
        QDate getCreatedDate();
        void setCreatedDate(QDate cDate);
        QDate getReceivedDate();
        void setReceivedDate(QDate rDate);

        float getSenderLon();
        void  setSenderLon(float newLon);
        float getSenderLat();
        void  setSenderLat(float newLat);
        float getRecieverLon();
        void  setRecieverLon(float newLon);
        float getRecieverLat();
        void  setRecieverLat(float newLat);


private:
	int ID;
        int type;
        SHIPMENT_STATUS currentStatus;
        int quantity;
        float senderLongitude;
        float senderLatitude;
        float destinationLatitude;
        float destinationLongitude;
        QDate createdDate;
        QDate sentDate;
        QDate expectedDate;
        QDate receivedDate;
};

#endif  //_SHIPMENT_H