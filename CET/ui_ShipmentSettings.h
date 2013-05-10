/********************************************************************************
** Form generated from reading UI file 'ShipmentSettings.ui'
**
** Created: Thu May 9 20:31:43 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHIPMENTSETTINGS_H
#define UI_SHIPMENTSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ShipmentSettings
{
public:
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *supplyTypeLabel;
    QLabel *toRegionLabel;
    QLabel *fromRegionLabel;
    QLabel *dateShippedLabel;
    QLabel *dateReceivedLabel;
    QLabel *shippedAmountLabel;
    QLabel *shipmentStatusLabel;
    QLineEdit *supplyTypeEdit;
    QLineEdit *shippedAmountEdit;
    QLineEdit *toRegionEdit;
    QLineEdit *fromRegionEdit;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLabel *shipmentID;
    QLineEdit *shipmentIDEdit;
    QComboBox *statusComboBox;
    QLabel *label;
    QLabel *label_2;
    QDateEdit *dateExpected;
    QDateEdit *dateReceived;
    QDateEdit *datePrepared;
    QDateEdit *dateShipped;

    void setupUi(QDialog *ShipmentSettings)
    {
        if (ShipmentSettings->objectName().isEmpty())
            ShipmentSettings->setObjectName(QString::fromUtf8("ShipmentSettings"));
        ShipmentSettings->resize(304, 368);
        formGroupBox = new QGroupBox(ShipmentSettings);
        formGroupBox->setObjectName(QString::fromUtf8("formGroupBox"));
        formGroupBox->setGeometry(QRect(0, 0, 301, 361));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        supplyTypeLabel = new QLabel(formGroupBox);
        supplyTypeLabel->setObjectName(QString::fromUtf8("supplyTypeLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, supplyTypeLabel);

        toRegionLabel = new QLabel(formGroupBox);
        toRegionLabel->setObjectName(QString::fromUtf8("toRegionLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, toRegionLabel);

        fromRegionLabel = new QLabel(formGroupBox);
        fromRegionLabel->setObjectName(QString::fromUtf8("fromRegionLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, fromRegionLabel);

        dateShippedLabel = new QLabel(formGroupBox);
        dateShippedLabel->setObjectName(QString::fromUtf8("dateShippedLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, dateShippedLabel);

        dateReceivedLabel = new QLabel(formGroupBox);
        dateReceivedLabel->setObjectName(QString::fromUtf8("dateReceivedLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, dateReceivedLabel);

        shippedAmountLabel = new QLabel(formGroupBox);
        shippedAmountLabel->setObjectName(QString::fromUtf8("shippedAmountLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, shippedAmountLabel);

        shipmentStatusLabel = new QLabel(formGroupBox);
        shipmentStatusLabel->setObjectName(QString::fromUtf8("shipmentStatusLabel"));

        formLayout->setWidget(11, QFormLayout::LabelRole, shipmentStatusLabel);

        supplyTypeEdit = new QLineEdit(formGroupBox);
        supplyTypeEdit->setObjectName(QString::fromUtf8("supplyTypeEdit"));
        supplyTypeEdit->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, supplyTypeEdit);

        shippedAmountEdit = new QLineEdit(formGroupBox);
        shippedAmountEdit->setObjectName(QString::fromUtf8("shippedAmountEdit"));
        shippedAmountEdit->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, shippedAmountEdit);

        toRegionEdit = new QLineEdit(formGroupBox);
        toRegionEdit->setObjectName(QString::fromUtf8("toRegionEdit"));
        toRegionEdit->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, toRegionEdit);

        fromRegionEdit = new QLineEdit(formGroupBox);
        fromRegionEdit->setObjectName(QString::fromUtf8("fromRegionEdit"));
        fromRegionEdit->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, fromRegionEdit);

        okButton = new QPushButton(formGroupBox);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        formLayout->setWidget(12, QFormLayout::LabelRole, okButton);

        cancelButton = new QPushButton(formGroupBox);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        formLayout->setWidget(12, QFormLayout::FieldRole, cancelButton);

        shipmentID = new QLabel(formGroupBox);
        shipmentID->setObjectName(QString::fromUtf8("shipmentID"));

        formLayout->setWidget(0, QFormLayout::LabelRole, shipmentID);

        shipmentIDEdit = new QLineEdit(formGroupBox);
        shipmentIDEdit->setObjectName(QString::fromUtf8("shipmentIDEdit"));
        shipmentIDEdit->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, shipmentIDEdit);

        statusComboBox = new QComboBox(formGroupBox);
        statusComboBox->setObjectName(QString::fromUtf8("statusComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(statusComboBox->sizePolicy().hasHeightForWidth());
        statusComboBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(11, QFormLayout::FieldRole, statusComboBox);

        label = new QLabel(formGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_2);

        dateExpected = new QDateEdit(formGroupBox);
        dateExpected->setObjectName(QString::fromUtf8("dateExpected"));
        dateExpected->setReadOnly(true);

        formLayout->setWidget(9, QFormLayout::FieldRole, dateExpected);

        dateReceived = new QDateEdit(formGroupBox);
        dateReceived->setObjectName(QString::fromUtf8("dateReceived"));
        dateReceived->setReadOnly(true);

        formLayout->setWidget(10, QFormLayout::FieldRole, dateReceived);

        datePrepared = new QDateEdit(formGroupBox);
        datePrepared->setObjectName(QString::fromUtf8("datePrepared"));
        datePrepared->setReadOnly(true);

        formLayout->setWidget(6, QFormLayout::FieldRole, datePrepared);

        dateShipped = new QDateEdit(formGroupBox);
        dateShipped->setObjectName(QString::fromUtf8("dateShipped"));
        dateShipped->setReadOnly(true);
        dateShipped->setTimeSpec(Qt::LocalTime);

        formLayout->setWidget(7, QFormLayout::FieldRole, dateShipped);


        retranslateUi(ShipmentSettings);
        QObject::connect(okButton, SIGNAL(pressed()), ShipmentSettings, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(pressed()), ShipmentSettings, SLOT(reject()));
        QObject::connect(statusComboBox, SIGNAL(currentIndexChanged(QString)), ShipmentSettings, SLOT(updateShipment(QString)));

        QMetaObject::connectSlotsByName(ShipmentSettings);
    } // setupUi

    void retranslateUi(QDialog *ShipmentSettings)
    {
        ShipmentSettings->setWindowTitle(QApplication::translate("ShipmentSettings", "Dialog", 0, QApplication::UnicodeUTF8));
        supplyTypeLabel->setText(QApplication::translate("ShipmentSettings", "Supply Type", 0, QApplication::UnicodeUTF8));
        toRegionLabel->setText(QApplication::translate("ShipmentSettings", "To Region", 0, QApplication::UnicodeUTF8));
        fromRegionLabel->setText(QApplication::translate("ShipmentSettings", "From Region", 0, QApplication::UnicodeUTF8));
        dateShippedLabel->setText(QApplication::translate("ShipmentSettings", "Date Prepared", 0, QApplication::UnicodeUTF8));
        dateReceivedLabel->setText(QApplication::translate("ShipmentSettings", "Date Shipped", 0, QApplication::UnicodeUTF8));
        shippedAmountLabel->setText(QApplication::translate("ShipmentSettings", "Shipped amount", 0, QApplication::UnicodeUTF8));
        shipmentStatusLabel->setText(QApplication::translate("ShipmentSettings", "Shipment Status", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("ShipmentSettings", "Ok", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("ShipmentSettings", "Cancel", 0, QApplication::UnicodeUTF8));
        shipmentID->setText(QApplication::translate("ShipmentSettings", "Shipment ID", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ShipmentSettings", "Date Expected", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ShipmentSettings", "Date Received", 0, QApplication::UnicodeUTF8));
        dateExpected->setDisplayFormat(QApplication::translate("ShipmentSettings", "MM/dd/yy", 0, QApplication::UnicodeUTF8));
        dateReceived->setDisplayFormat(QApplication::translate("ShipmentSettings", "MM/dd/yy", 0, QApplication::UnicodeUTF8));
        datePrepared->setDisplayFormat(QApplication::translate("ShipmentSettings", "MM/dd/yy", 0, QApplication::UnicodeUTF8));
        dateShipped->setDisplayFormat(QApplication::translate("ShipmentSettings", "MM/dd/yy", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ShipmentSettings: public Ui_ShipmentSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHIPMENTSETTINGS_H
