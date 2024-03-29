//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : E-Healthcare-Canada
//  @ File Name : User.h
//  @ Date : 11/9/2010
//  @ Author : 
//
//


#if !defined(_USER_H)
#define _USER_H

#include <QString>


class User
{


public:
	enum UserType
	{
		Clerk,
		MedAdmin,
		SysAdmin
	};

        User(QString firstName, QString lastName, QString userID, QString password, UserType type);
        ~User();

        QString getFirstName();
        QString getLastName();
        //UserType getUserType();

private:
        QString FirstName;
        QString LastName;
        QString UserID;
        QString Password;
        UserType Type;
};

#endif  //_USER_H
