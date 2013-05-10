//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : E-Healthcare-Canada
//  @ File Name : Model.h
//  @ Date : 11/9/2010
//  @ Author : 
//
//


#if !defined(_MODEL_H)
#define _MODEL_H

#include "include/ClientParser.h"
#include "include/ListContainer.h"
#include "include/ConnectionManagement.h"
#include <QQueue>

class Model
{

private:
    bool managerMade;
    ListContainer *container;
    //ClientParser *p;
    //QQueue<char*> msgQueue;
    ConnectionManagement* connection;

public:
    Model();
    ~Model();
    ListContainer *getContainer();
    void connectToServer();
    void disconnectFromServer();

};

#endif  //_MODEL_H