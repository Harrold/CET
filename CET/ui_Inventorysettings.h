/********************************************************************************
** Form generated from reading UI file 'Inventorysettings.ui'
**
** Created: Thu May 9 20:31:43 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTORYSETTINGS_H
#define UI_INVENTORYSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Inventorysettings
{
public:
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *supplyLocation;
    QLabel *supplyQuantity;
    QDialogButtonBox *buttonBox;
    QLineEdit *quantityLine;
    QLineEdit *locationLine;
    QLabel *supplyName;
    QLineEdit *supplyLine;

    void setupUi(QDialog *Inventorysettings)
    {
        if (Inventorysettings->objectName().isEmpty())
            Inventorysettings->setObjectName(QString::fromUtf8("Inventorysettings"));
        Inventorysettings->resize(242, 148);
        formGroupBox = new QGroupBox(Inventorysettings);
        formGroupBox->setObjectName(QString::fromUtf8("formGroupBox"));
        formGroupBox->setGeometry(QRect(0, 0, 241, 141));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        supplyLocation = new QLabel(formGroupBox);
        supplyLocation->setObjectName(QString::fromUtf8("supplyLocation"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(supplyLocation->sizePolicy().hasHeightForWidth());
        supplyLocation->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::LabelRole, supplyLocation);

        supplyQuantity = new QLabel(formGroupBox);
        supplyQuantity->setObjectName(QString::fromUtf8("supplyQuantity"));
        sizePolicy.setHeightForWidth(supplyQuantity->sizePolicy().hasHeightForWidth());
        supplyQuantity->setSizePolicy(sizePolicy);
        supplyQuantity->setLayoutDirection(Qt::LeftToRight);

        formLayout->setWidget(4, QFormLayout::LabelRole, supplyQuantity);

        buttonBox = new QDialogButtonBox(formGroupBox);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(5, QFormLayout::SpanningRole, buttonBox);

        quantityLine = new QLineEdit(formGroupBox);
        quantityLine->setObjectName(QString::fromUtf8("quantityLine"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(quantityLine->sizePolicy().hasHeightForWidth());
        quantityLine->setSizePolicy(sizePolicy1);

        formLayout->setWidget(4, QFormLayout::FieldRole, quantityLine);

        locationLine = new QLineEdit(formGroupBox);
        locationLine->setObjectName(QString::fromUtf8("locationLine"));
        locationLine->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, locationLine);

        supplyName = new QLabel(formGroupBox);
        supplyName->setObjectName(QString::fromUtf8("supplyName"));

        formLayout->setWidget(0, QFormLayout::LabelRole, supplyName);

        supplyLine = new QLineEdit(formGroupBox);
        supplyLine->setObjectName(QString::fromUtf8("supplyLine"));
        supplyLine->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, supplyLine);


        retranslateUi(Inventorysettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), Inventorysettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Inventorysettings, SLOT(reject()));
        QObject::connect(quantityLine, SIGNAL(textEdited(QString)), Inventorysettings, SLOT(updateInventory(QString)));

        QMetaObject::connectSlotsByName(Inventorysettings);
    } // setupUi

    void retranslateUi(QDialog *Inventorysettings)
    {
        Inventorysettings->setWindowTitle(QApplication::translate("Inventorysettings", "Dialog", 0, QApplication::UnicodeUTF8));
        supplyLocation->setText(QApplication::translate("Inventorysettings", "Location", 0, QApplication::UnicodeUTF8));
        supplyQuantity->setText(QApplication::translate("Inventorysettings", "Quantity", 0, QApplication::UnicodeUTF8));
        supplyName->setText(QApplication::translate("Inventorysettings", "Supply Name", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Inventorysettings: public Ui_Inventorysettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORYSETTINGS_H
