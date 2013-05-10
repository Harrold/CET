/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created: Thu May 9 20:31:43 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <marble/MarbleNavigator.h>
#include <marble/MarbleWidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFile;
    QAction *actionExit;
    QAction *actionConnect;
    QAction *actionDisconnect;
    QWidget *centralwidget;
    Marble::MarbleWidget *MarbleWidget;
    QTabWidget *tabWidget;
    QWidget *case_tab;
    QGroupBox *formGroupBox;
    QGridLayout *gridLayout;
    QLabel *DiseaseLabel;
    QComboBox *DiseaseComboBox;
    QPushButton *pushButton;
    QLabel *QuantityLabel;
    QLineEdit *NumberOfCasesEdit;
    QComboBox *provinceBox;
    QLabel *label_2;
    QLabel *DateOfOccurenceLabel;
    QDateEdit *dateEdit;
    QComboBox *cityBox;
    QLabel *provinceLabel;
    QGroupBox *gridGroupBox_2;
    QGridLayout *gridLayout_5;
    QLabel *SelectDiseaseLabel;
    QDateEdit *fromDateEdit;
    QLabel *SelectLocationLabel;
    QLabel *fromDateLabel;
    QComboBox *provinceBox_2;
    QLineEdit *MinCaseEdit;
    QLabel *KnownCasesLabel;
    QLabel *selectMinimumDiseaseLabel;
    QLineEdit *MaxCaseEdit;
    QLabel *selectMinimumDiseaseLabel_2;
    QDateEdit *ToDateEdit;
    QLabel *ToDateLabel;
    QTableWidget *caseTableWidget;
    QListWidget *locationListWidget;
    QListWidget *diseaseListWidget;
    QWidget *Supplies_Tab;
    QGroupBox *horizontalGroupBox;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *SelectSupplyLabel;
    QListWidget *selectSupplyField;
    QLabel *SelectLocationLabel_3;
    QListWidget *selectLocationField;
    QVBoxLayout *verticalLayout_4;
    QLabel *DiseaseLabel_2;
    QLabel *QuantityLabel_2;
    QLabel *LocationLabel_2;
    QPushButton *SubmitSupplyButton;
    QVBoxLayout *verticalLayout;
    QLabel *MinSupplyLabel;
    QLineEdit *minSupplyField;
    QLabel *MaxSupplyLabel;
    QLineEdit *maxSupplyField;
    QComboBox *provinceComboBox_3;
    QVBoxLayout *verticalLayout_3;
    QComboBox *SupplyComboBox;
    QLineEdit *NumberOfCasesEdit_2;
    QLineEdit *LocationEdit_2;
    QGroupBox *verticalGroupBox_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *KnownSupplyLabel;
    QTableWidget *knownSuppliesTable;
    QWidget *ShipmentTab;
    QGroupBox *verticalGroupBox;
    QVBoxLayout *verticalLayout_6;
    QLabel *shipmentSupplyLabel;
    QListWidget *shipmentExistingShipments;
    QHBoxLayout *horizontalLayout_4;
    QLabel *shipmentToRegionLabel;
    QComboBox *shipmentComboBoxRegion;
    QLabel *label_4;
    QComboBox *shipmentComboBoxCity;
    QLabel *label_5;
    QComboBox *shipmentStatusComboBox;
    QGroupBox *verticalGroupBox1;
    QVBoxLayout *verticalLayout_7;
    QLabel *shipmentSupplyTypeLabel;
    QListWidget *shipmentSupplyTypeWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *shipmentToRegionLabel_2;
    QComboBox *shipmentComboBoxRegion_2;
    QLabel *shipmentFromRegionLabel_2;
    QComboBox *shipmentComboBoxCity_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *shipmentShipLabel;
    QLineEdit *lineEdit;
    QDateEdit *dateEdit_2;
    QPushButton *submitShipmentButton;
    QWidget *MapSettingsTab;
    QGroupBox *gridGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *KnownCasesLabel_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *provinceComboBox_2;
    QLabel *KnownSupplyLabel_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *regionComboBox;
    QListWidget *supplyListWidget;
    QListWidget *caseListWidget_2;
    Marble::MarbleNavigator *MarbleNavigator;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuNetwork;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 611);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1280, 611));
        actionFile = new QAction(MainWindow);
        actionFile->setObjectName(QString::fromUtf8("actionFile"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QString::fromUtf8("actionDisconnect"));
        actionDisconnect->setEnabled(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MarbleWidget = new Marble::MarbleWidget(centralwidget);
        MarbleWidget->setObjectName(QString::fromUtf8("MarbleWidget"));
        MarbleWidget->setGeometry(QRect(0, 0, 520, 571));
        sizePolicy.setHeightForWidth(MarbleWidget->sizePolicy().hasHeightForWidth());
        MarbleWidget->setSizePolicy(sizePolicy);
        MarbleWidget->setShowOverviewMap(true);
        MarbleWidget->setShowClouds(false);
        MarbleWidget->setShowAtmosphere(false);
        MarbleWidget->setShowCrosshairs(true);
        MarbleWidget->setShowPlaces(false);
        MarbleWidget->setShowCities(false);
        MarbleWidget->setShowTerrain(false);
        MarbleWidget->setShowOtherPlaces(false);
        MarbleWidget->setShowRelief(false);
        MarbleWidget->setShowIceLayer(false);
        MarbleWidget->setShowBorders(false);
        MarbleWidget->setShowRivers(false);
        MarbleWidget->setShowLakes(false);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(520, 0, 760, 571));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        case_tab = new QWidget();
        case_tab->setObjectName(QString::fromUtf8("case_tab"));
        formGroupBox = new QGroupBox(case_tab);
        formGroupBox->setObjectName(QString::fromUtf8("formGroupBox"));
        formGroupBox->setGeometry(QRect(0, 0, 571, 141));
        gridLayout = new QGridLayout(formGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        DiseaseLabel = new QLabel(formGroupBox);
        DiseaseLabel->setObjectName(QString::fromUtf8("DiseaseLabel"));
        DiseaseLabel->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(DiseaseLabel, 0, 0, 1, 1);

        DiseaseComboBox = new QComboBox(formGroupBox);
        DiseaseComboBox->setObjectName(QString::fromUtf8("DiseaseComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(DiseaseComboBox->sizePolicy().hasHeightForWidth());
        DiseaseComboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(DiseaseComboBox, 0, 1, 1, 1);

        pushButton = new QPushButton(formGroupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 4, 0, 1, 1);

        QuantityLabel = new QLabel(formGroupBox);
        QuantityLabel->setObjectName(QString::fromUtf8("QuantityLabel"));

        gridLayout->addWidget(QuantityLabel, 0, 2, 1, 1);

        NumberOfCasesEdit = new QLineEdit(formGroupBox);
        NumberOfCasesEdit->setObjectName(QString::fromUtf8("NumberOfCasesEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(NumberOfCasesEdit->sizePolicy().hasHeightForWidth());
        NumberOfCasesEdit->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(NumberOfCasesEdit, 0, 3, 1, 1);

        provinceBox = new QComboBox(formGroupBox);
        provinceBox->setObjectName(QString::fromUtf8("provinceBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(provinceBox->sizePolicy().hasHeightForWidth());
        provinceBox->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(provinceBox, 1, 1, 1, 1);

        label_2 = new QLabel(formGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAutoFillBackground(false);

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        DateOfOccurenceLabel = new QLabel(formGroupBox);
        DateOfOccurenceLabel->setObjectName(QString::fromUtf8("DateOfOccurenceLabel"));

        gridLayout->addWidget(DateOfOccurenceLabel, 2, 0, 1, 1);

        dateEdit = new QDateEdit(formGroupBox);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setCalendarPopup(true);

        gridLayout->addWidget(dateEdit, 2, 1, 1, 1);

        cityBox = new QComboBox(formGroupBox);
        cityBox->setObjectName(QString::fromUtf8("cityBox"));

        gridLayout->addWidget(cityBox, 1, 3, 1, 1);

        provinceLabel = new QLabel(formGroupBox);
        provinceLabel->setObjectName(QString::fromUtf8("provinceLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(provinceLabel->sizePolicy().hasHeightForWidth());
        provinceLabel->setSizePolicy(sizePolicy4);
        provinceLabel->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(provinceLabel, 1, 0, 1, 1);

        gridGroupBox_2 = new QGroupBox(case_tab);
        gridGroupBox_2->setObjectName(QString::fromUtf8("gridGroupBox_2"));
        gridGroupBox_2->setGeometry(QRect(0, 140, 571, 401));
        gridLayout_5 = new QGridLayout(gridGroupBox_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        SelectDiseaseLabel = new QLabel(gridGroupBox_2);
        SelectDiseaseLabel->setObjectName(QString::fromUtf8("SelectDiseaseLabel"));

        gridLayout_5->addWidget(SelectDiseaseLabel, 4, 0, 1, 1);

        fromDateEdit = new QDateEdit(gridGroupBox_2);
        fromDateEdit->setObjectName(QString::fromUtf8("fromDateEdit"));
        fromDateEdit->setCalendarPopup(true);
        fromDateEdit->setTimeSpec(Qt::UTC);
        fromDateEdit->setDate(QDate(2000, 2, 1));

        gridLayout_5->addWidget(fromDateEdit, 5, 2, 1, 1);

        SelectLocationLabel = new QLabel(gridGroupBox_2);
        SelectLocationLabel->setObjectName(QString::fromUtf8("SelectLocationLabel"));

        gridLayout_5->addWidget(SelectLocationLabel, 7, 0, 1, 1);

        fromDateLabel = new QLabel(gridGroupBox_2);
        fromDateLabel->setObjectName(QString::fromUtf8("fromDateLabel"));

        gridLayout_5->addWidget(fromDateLabel, 4, 2, 1, 1);

        provinceBox_2 = new QComboBox(gridGroupBox_2);
        provinceBox_2->setObjectName(QString::fromUtf8("provinceBox_2"));
        sizePolicy3.setHeightForWidth(provinceBox_2->sizePolicy().hasHeightForWidth());
        provinceBox_2->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(provinceBox_2, 9, 1, 1, 1);

        MinCaseEdit = new QLineEdit(gridGroupBox_2);
        MinCaseEdit->setObjectName(QString::fromUtf8("MinCaseEdit"));

        gridLayout_5->addWidget(MinCaseEdit, 5, 1, 1, 1);

        KnownCasesLabel = new QLabel(gridGroupBox_2);
        KnownCasesLabel->setObjectName(QString::fromUtf8("KnownCasesLabel"));

        gridLayout_5->addWidget(KnownCasesLabel, 0, 0, 1, 1);

        selectMinimumDiseaseLabel = new QLabel(gridGroupBox_2);
        selectMinimumDiseaseLabel->setObjectName(QString::fromUtf8("selectMinimumDiseaseLabel"));

        gridLayout_5->addWidget(selectMinimumDiseaseLabel, 4, 1, 1, 1);

        MaxCaseEdit = new QLineEdit(gridGroupBox_2);
        MaxCaseEdit->setObjectName(QString::fromUtf8("MaxCaseEdit"));

        gridLayout_5->addWidget(MaxCaseEdit, 8, 1, 1, 1);

        selectMinimumDiseaseLabel_2 = new QLabel(gridGroupBox_2);
        selectMinimumDiseaseLabel_2->setObjectName(QString::fromUtf8("selectMinimumDiseaseLabel_2"));

        gridLayout_5->addWidget(selectMinimumDiseaseLabel_2, 7, 1, 1, 1);

        ToDateEdit = new QDateEdit(gridGroupBox_2);
        ToDateEdit->setObjectName(QString::fromUtf8("ToDateEdit"));
        ToDateEdit->setCalendarPopup(true);

        gridLayout_5->addWidget(ToDateEdit, 8, 2, 1, 1);

        ToDateLabel = new QLabel(gridGroupBox_2);
        ToDateLabel->setObjectName(QString::fromUtf8("ToDateLabel"));

        gridLayout_5->addWidget(ToDateLabel, 7, 2, 1, 1);

        caseTableWidget = new QTableWidget(gridGroupBox_2);
        caseTableWidget->setObjectName(QString::fromUtf8("caseTableWidget"));
        caseTableWidget->setFrameShape(QFrame::Box);

        gridLayout_5->addWidget(caseTableWidget, 1, 0, 1, 3);

        locationListWidget = new QListWidget(gridGroupBox_2);
        locationListWidget->setObjectName(QString::fromUtf8("locationListWidget"));
        locationListWidget->setFrameShape(QFrame::Box);
        locationListWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        locationListWidget->setResizeMode(QListView::Adjust);

        gridLayout_5->addWidget(locationListWidget, 8, 0, 2, 1);

        diseaseListWidget = new QListWidget(gridGroupBox_2);
        diseaseListWidget->setObjectName(QString::fromUtf8("diseaseListWidget"));
        diseaseListWidget->setFrameShape(QFrame::Box);
        diseaseListWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        diseaseListWidget->setResizeMode(QListView::Adjust);
        diseaseListWidget->setLayoutMode(QListView::SinglePass);

        gridLayout_5->addWidget(diseaseListWidget, 5, 0, 2, 1);

        tabWidget->addTab(case_tab, QString());
        Supplies_Tab = new QWidget();
        Supplies_Tab->setObjectName(QString::fromUtf8("Supplies_Tab"));
        horizontalGroupBox = new QGroupBox(Supplies_Tab);
        horizontalGroupBox->setObjectName(QString::fromUtf8("horizontalGroupBox"));
        horizontalGroupBox->setGeometry(QRect(0, 230, 571, 311));
        horizontalLayout_3 = new QHBoxLayout(horizontalGroupBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 5);
        SelectSupplyLabel = new QLabel(horizontalGroupBox);
        SelectSupplyLabel->setObjectName(QString::fromUtf8("SelectSupplyLabel"));

        verticalLayout_2->addWidget(SelectSupplyLabel);

        selectSupplyField = new QListWidget(horizontalGroupBox);
        selectSupplyField->setObjectName(QString::fromUtf8("selectSupplyField"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(selectSupplyField->sizePolicy().hasHeightForWidth());
        selectSupplyField->setSizePolicy(sizePolicy5);
        selectSupplyField->setFrameShape(QFrame::Box);
        selectSupplyField->setSelectionMode(QAbstractItemView::MultiSelection);

        verticalLayout_2->addWidget(selectSupplyField);

        SelectLocationLabel_3 = new QLabel(horizontalGroupBox);
        SelectLocationLabel_3->setObjectName(QString::fromUtf8("SelectLocationLabel_3"));

        verticalLayout_2->addWidget(SelectLocationLabel_3);

        selectLocationField = new QListWidget(horizontalGroupBox);
        selectLocationField->setObjectName(QString::fromUtf8("selectLocationField"));
        sizePolicy5.setHeightForWidth(selectLocationField->sizePolicy().hasHeightForWidth());
        selectLocationField->setSizePolicy(sizePolicy5);
        selectLocationField->setFrameShape(QFrame::Box);
        selectLocationField->setSelectionMode(QAbstractItemView::MultiSelection);

        verticalLayout_2->addWidget(selectLocationField);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(17);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetNoConstraint);
        DiseaseLabel_2 = new QLabel(horizontalGroupBox);
        DiseaseLabel_2->setObjectName(QString::fromUtf8("DiseaseLabel_2"));
        sizePolicy4.setHeightForWidth(DiseaseLabel_2->sizePolicy().hasHeightForWidth());
        DiseaseLabel_2->setSizePolicy(sizePolicy4);

        verticalLayout_4->addWidget(DiseaseLabel_2);

        QuantityLabel_2 = new QLabel(horizontalGroupBox);
        QuantityLabel_2->setObjectName(QString::fromUtf8("QuantityLabel_2"));

        verticalLayout_4->addWidget(QuantityLabel_2);

        LocationLabel_2 = new QLabel(horizontalGroupBox);
        LocationLabel_2->setObjectName(QString::fromUtf8("LocationLabel_2"));

        verticalLayout_4->addWidget(LocationLabel_2);


        verticalLayout_2->addLayout(verticalLayout_4);

        SubmitSupplyButton = new QPushButton(horizontalGroupBox);
        SubmitSupplyButton->setObjectName(QString::fromUtf8("SubmitSupplyButton"));
        SubmitSupplyButton->setFlat(false);

        verticalLayout_2->addWidget(SubmitSupplyButton);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        MinSupplyLabel = new QLabel(horizontalGroupBox);
        MinSupplyLabel->setObjectName(QString::fromUtf8("MinSupplyLabel"));

        verticalLayout->addWidget(MinSupplyLabel);

        minSupplyField = new QLineEdit(horizontalGroupBox);
        minSupplyField->setObjectName(QString::fromUtf8("minSupplyField"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(minSupplyField->sizePolicy().hasHeightForWidth());
        minSupplyField->setSizePolicy(sizePolicy6);

        verticalLayout->addWidget(minSupplyField);

        MaxSupplyLabel = new QLabel(horizontalGroupBox);
        MaxSupplyLabel->setObjectName(QString::fromUtf8("MaxSupplyLabel"));

        verticalLayout->addWidget(MaxSupplyLabel);

        maxSupplyField = new QLineEdit(horizontalGroupBox);
        maxSupplyField->setObjectName(QString::fromUtf8("maxSupplyField"));
        sizePolicy6.setHeightForWidth(maxSupplyField->sizePolicy().hasHeightForWidth());
        maxSupplyField->setSizePolicy(sizePolicy6);

        verticalLayout->addWidget(maxSupplyField);

        provinceComboBox_3 = new QComboBox(horizontalGroupBox);
        provinceComboBox_3->setObjectName(QString::fromUtf8("provinceComboBox_3"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(provinceComboBox_3->sizePolicy().hasHeightForWidth());
        provinceComboBox_3->setSizePolicy(sizePolicy7);

        verticalLayout->addWidget(provinceComboBox_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, 0);
        SupplyComboBox = new QComboBox(horizontalGroupBox);
        SupplyComboBox->setObjectName(QString::fromUtf8("SupplyComboBox"));
        sizePolicy7.setHeightForWidth(SupplyComboBox->sizePolicy().hasHeightForWidth());
        SupplyComboBox->setSizePolicy(sizePolicy7);
        SupplyComboBox->setSizeIncrement(QSize(0, 0));
        SupplyComboBox->setBaseSize(QSize(80, 0));

        verticalLayout_3->addWidget(SupplyComboBox);

        NumberOfCasesEdit_2 = new QLineEdit(horizontalGroupBox);
        NumberOfCasesEdit_2->setObjectName(QString::fromUtf8("NumberOfCasesEdit_2"));
        sizePolicy3.setHeightForWidth(NumberOfCasesEdit_2->sizePolicy().hasHeightForWidth());
        NumberOfCasesEdit_2->setSizePolicy(sizePolicy3);

        verticalLayout_3->addWidget(NumberOfCasesEdit_2);

        LocationEdit_2 = new QLineEdit(horizontalGroupBox);
        LocationEdit_2->setObjectName(QString::fromUtf8("LocationEdit_2"));
        LocationEdit_2->setEnabled(true);
        sizePolicy3.setHeightForWidth(LocationEdit_2->sizePolicy().hasHeightForWidth());
        LocationEdit_2->setSizePolicy(sizePolicy3);

        verticalLayout_3->addWidget(LocationEdit_2);


        verticalLayout->addLayout(verticalLayout_3);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalGroupBox_5 = new QGroupBox(Supplies_Tab);
        verticalGroupBox_5->setObjectName(QString::fromUtf8("verticalGroupBox_5"));
        verticalGroupBox_5->setGeometry(QRect(0, 0, 571, 231));
        verticalLayout_5 = new QVBoxLayout(verticalGroupBox_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        KnownSupplyLabel = new QLabel(verticalGroupBox_5);
        KnownSupplyLabel->setObjectName(QString::fromUtf8("KnownSupplyLabel"));

        verticalLayout_5->addWidget(KnownSupplyLabel);

        knownSuppliesTable = new QTableWidget(verticalGroupBox_5);
        knownSuppliesTable->setObjectName(QString::fromUtf8("knownSuppliesTable"));
        knownSuppliesTable->setFrameShape(QFrame::Box);
        knownSuppliesTable->setFrameShadow(QFrame::Sunken);
        knownSuppliesTable->setEditTriggers(QAbstractItemView::DoubleClicked);
        knownSuppliesTable->setSelectionMode(QAbstractItemView::SingleSelection);

        verticalLayout_5->addWidget(knownSuppliesTable);

        tabWidget->addTab(Supplies_Tab, QString());
        ShipmentTab = new QWidget();
        ShipmentTab->setObjectName(QString::fromUtf8("ShipmentTab"));
        ShipmentTab->setEnabled(true);
        verticalGroupBox = new QGroupBox(ShipmentTab);
        verticalGroupBox->setObjectName(QString::fromUtf8("verticalGroupBox"));
        verticalGroupBox->setGeometry(QRect(0, 0, 571, 241));
        verticalLayout_6 = new QVBoxLayout(verticalGroupBox);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        shipmentSupplyLabel = new QLabel(verticalGroupBox);
        shipmentSupplyLabel->setObjectName(QString::fromUtf8("shipmentSupplyLabel"));

        verticalLayout_6->addWidget(shipmentSupplyLabel);

        shipmentExistingShipments = new QListWidget(verticalGroupBox);
        shipmentExistingShipments->setObjectName(QString::fromUtf8("shipmentExistingShipments"));

        verticalLayout_6->addWidget(shipmentExistingShipments);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        shipmentToRegionLabel = new QLabel(verticalGroupBox);
        shipmentToRegionLabel->setObjectName(QString::fromUtf8("shipmentToRegionLabel"));

        horizontalLayout_4->addWidget(shipmentToRegionLabel);

        shipmentComboBoxRegion = new QComboBox(verticalGroupBox);
        shipmentComboBoxRegion->setObjectName(QString::fromUtf8("shipmentComboBoxRegion"));

        horizontalLayout_4->addWidget(shipmentComboBoxRegion);

        label_4 = new QLabel(verticalGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        shipmentComboBoxCity = new QComboBox(verticalGroupBox);
        shipmentComboBoxCity->setObjectName(QString::fromUtf8("shipmentComboBoxCity"));

        horizontalLayout_4->addWidget(shipmentComboBoxCity);

        label_5 = new QLabel(verticalGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        shipmentStatusComboBox = new QComboBox(verticalGroupBox);
        shipmentStatusComboBox->setObjectName(QString::fromUtf8("shipmentStatusComboBox"));

        horizontalLayout_4->addWidget(shipmentStatusComboBox);


        verticalLayout_6->addLayout(horizontalLayout_4);

        verticalGroupBox1 = new QGroupBox(ShipmentTab);
        verticalGroupBox1->setObjectName(QString::fromUtf8("verticalGroupBox1"));
        verticalGroupBox1->setGeometry(QRect(0, 240, 571, 301));
        verticalLayout_7 = new QVBoxLayout(verticalGroupBox1);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        shipmentSupplyTypeLabel = new QLabel(verticalGroupBox1);
        shipmentSupplyTypeLabel->setObjectName(QString::fromUtf8("shipmentSupplyTypeLabel"));

        verticalLayout_7->addWidget(shipmentSupplyTypeLabel);

        shipmentSupplyTypeWidget = new QListWidget(verticalGroupBox1);
        shipmentSupplyTypeWidget->setObjectName(QString::fromUtf8("shipmentSupplyTypeWidget"));

        verticalLayout_7->addWidget(shipmentSupplyTypeWidget);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        shipmentToRegionLabel_2 = new QLabel(verticalGroupBox1);
        shipmentToRegionLabel_2->setObjectName(QString::fromUtf8("shipmentToRegionLabel_2"));

        horizontalLayout_5->addWidget(shipmentToRegionLabel_2);

        shipmentComboBoxRegion_2 = new QComboBox(verticalGroupBox1);
        shipmentComboBoxRegion_2->setObjectName(QString::fromUtf8("shipmentComboBoxRegion_2"));

        horizontalLayout_5->addWidget(shipmentComboBoxRegion_2);

        shipmentFromRegionLabel_2 = new QLabel(verticalGroupBox1);
        shipmentFromRegionLabel_2->setObjectName(QString::fromUtf8("shipmentFromRegionLabel_2"));

        horizontalLayout_5->addWidget(shipmentFromRegionLabel_2);

        shipmentComboBoxCity_2 = new QComboBox(verticalGroupBox1);
        shipmentComboBoxCity_2->setObjectName(QString::fromUtf8("shipmentComboBoxCity_2"));

        horizontalLayout_5->addWidget(shipmentComboBoxCity_2);


        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        shipmentShipLabel = new QLabel(verticalGroupBox1);
        shipmentShipLabel->setObjectName(QString::fromUtf8("shipmentShipLabel"));
        shipmentShipLabel->setContextMenuPolicy(Qt::DefaultContextMenu);
        shipmentShipLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        shipmentShipLabel->setOpenExternalLinks(false);

        horizontalLayout_6->addWidget(shipmentShipLabel);

        lineEdit = new QLineEdit(verticalGroupBox1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(lineEdit);

        dateEdit_2 = new QDateEdit(verticalGroupBox1);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setCalendarPopup(true);

        horizontalLayout_6->addWidget(dateEdit_2);

        submitShipmentButton = new QPushButton(verticalGroupBox1);
        submitShipmentButton->setObjectName(QString::fromUtf8("submitShipmentButton"));

        horizontalLayout_6->addWidget(submitShipmentButton);


        verticalLayout_7->addLayout(horizontalLayout_6);

        tabWidget->addTab(ShipmentTab, QString());
        MapSettingsTab = new QWidget();
        MapSettingsTab->setObjectName(QString::fromUtf8("MapSettingsTab"));
        gridGroupBox = new QGroupBox(MapSettingsTab);
        gridGroupBox->setObjectName(QString::fromUtf8("gridGroupBox"));
        gridGroupBox->setGeometry(QRect(0, 0, 760, 341));
        gridLayout_2 = new QGridLayout(gridGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        KnownCasesLabel_2 = new QLabel(gridGroupBox);
        KnownCasesLabel_2->setObjectName(QString::fromUtf8("KnownCasesLabel_2"));

        gridLayout_2->addWidget(KnownCasesLabel_2, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(gridGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        provinceComboBox_2 = new QComboBox(gridGroupBox);
        provinceComboBox_2->setObjectName(QString::fromUtf8("provinceComboBox_2"));

        horizontalLayout_2->addWidget(provinceComboBox_2);


        gridLayout_2->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        KnownSupplyLabel_2 = new QLabel(gridGroupBox);
        KnownSupplyLabel_2->setObjectName(QString::fromUtf8("KnownSupplyLabel_2"));

        gridLayout_2->addWidget(KnownSupplyLabel_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(gridGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        regionComboBox = new QComboBox(gridGroupBox);
        regionComboBox->setObjectName(QString::fromUtf8("regionComboBox"));

        horizontalLayout->addWidget(regionComboBox);


        gridLayout_2->addLayout(horizontalLayout, 4, 1, 1, 1);

        supplyListWidget = new QListWidget(gridGroupBox);
        supplyListWidget->setObjectName(QString::fromUtf8("supplyListWidget"));
        supplyListWidget->setFrameShape(QFrame::Box);
        supplyListWidget->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout_2->addWidget(supplyListWidget, 1, 0, 1, 2);

        caseListWidget_2 = new QListWidget(gridGroupBox);
        caseListWidget_2->setObjectName(QString::fromUtf8("caseListWidget_2"));
        caseListWidget_2->setFrameShape(QFrame::Box);
        caseListWidget_2->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout_2->addWidget(caseListWidget_2, 3, 0, 1, 2);

        tabWidget->addTab(MapSettingsTab, QString());
        MarbleNavigator = new Marble::MarbleNavigator(centralwidget);
        MarbleNavigator->setObjectName(QString::fromUtf8("MarbleNavigator"));
        MarbleNavigator->setGeometry(QRect(-40, 0, 181, 231));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuNetwork = new QMenu(menubar);
        menuNetwork->setObjectName(QString::fromUtf8("menuNetwork"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuNetwork->menuAction());
        menuFile->addAction(actionFile);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuNetwork->addAction(actionConnect);
        menuNetwork->addAction(actionDisconnect);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(activated()), MainWindow, SLOT(close()));
        QObject::connect(MarbleNavigator, SIGNAL(zoomIn()), MarbleWidget, SLOT(zoomIn()));
        QObject::connect(MarbleNavigator, SIGNAL(zoomOut()), MarbleWidget, SLOT(zoomOut()));
        QObject::connect(MarbleNavigator, SIGNAL(zoomIn()), MarbleWidget, SLOT(update()));
        QObject::connect(MarbleNavigator, SIGNAL(zoomOut()), MarbleWidget, SLOT(update()));
        QObject::connect(MarbleNavigator, SIGNAL(moveLeft()), MarbleWidget, SLOT(moveLeft()));
        QObject::connect(MarbleNavigator, SIGNAL(moveRight()), MarbleWidget, SLOT(moveRight()));
        QObject::connect(MarbleNavigator, SIGNAL(moveDown()), MarbleWidget, SLOT(moveDown()));
        QObject::connect(MarbleNavigator, SIGNAL(moveUp()), MarbleWidget, SLOT(moveUp()));
        QObject::connect(MarbleNavigator, SIGNAL(moveDown()), MarbleWidget, SLOT(update()));
        QObject::connect(MarbleNavigator, SIGNAL(moveLeft()), MarbleWidget, SLOT(update()));
        QObject::connect(MarbleNavigator, SIGNAL(moveRight()), MarbleWidget, SLOT(update()));
        QObject::connect(MarbleNavigator, SIGNAL(moveUp()), MarbleWidget, SLOT(update()));
        QObject::connect(MarbleNavigator, SIGNAL(goHome()), MarbleWidget, SLOT(goHome()));
        QObject::connect(MarbleNavigator, SIGNAL(goHome()), MarbleWidget, SLOT(update()));
        QObject::connect(MarbleNavigator, SIGNAL(zoomChanged(int)), MarbleWidget, SLOT(zoomView(int)));
        QObject::connect(MarbleNavigator, SIGNAL(zoomChanged(int)), MarbleWidget, SLOT(update()));
        QObject::connect(MarbleWidget, SIGNAL(zoomChanged(int)), MarbleNavigator, SLOT(changeZoom(int)));
        QObject::connect(provinceBox_2, SIGNAL(currentIndexChanged(QString)), MainWindow, SLOT(getCitiesFromProvinceListView(QString)));
        QObject::connect(provinceBox, SIGNAL(currentIndexChanged(QString)), MainWindow, SLOT(getCitiesFromProvince(QString)));
        QObject::connect(provinceComboBox_3, SIGNAL(currentIndexChanged(QString)), MainWindow, SLOT(getCitiesFromSupplyTab(QString)));
        QObject::connect(MainWindow, SIGNAL(iconSizeChanged(QSize)), tabWidget, SLOT(update()));
        QObject::connect(diseaseListWidget, SIGNAL(itemSelectionChanged()), MainWindow, SLOT(CreateAndUpdateTable()));
        QObject::connect(locationListWidget, SIGNAL(itemSelectionChanged()), MainWindow, SLOT(CreateAndUpdateTable()));
        QObject::connect(pushButton, SIGNAL(pressed()), MainWindow, SLOT(sendNewDisease()));
        QObject::connect(submitShipmentButton, SIGNAL(pressed()), MainWindow, SLOT(sendNewShipment()));
        QObject::connect(selectSupplyField, SIGNAL(itemSelectionChanged()), MainWindow, SLOT(CreateAndUpdateSupplyTable()));
        QObject::connect(selectLocationField, SIGNAL(itemSelectionChanged()), MainWindow, SLOT(CreateAndUpdateSupplyTable()));
        QObject::connect(regionComboBox, SIGNAL(currentIndexChanged(QString)), MainWindow, SLOT(goToPosition(QString)));
        QObject::connect(provinceComboBox_2, SIGNAL(currentIndexChanged(QString)), MainWindow, SLOT(getCitiesFromProvinceMapView(QString)));
        QObject::connect(actionFile, SIGNAL(triggered()), MarbleWidget, SLOT(updateChangedMap()));
        QObject::connect(actionFile, SIGNAL(triggered()), MainWindow, SLOT(setMoon()));
        QObject::connect(caseListWidget_2, SIGNAL(itemSelectionChanged()), MainWindow, SLOT(updateLayerInterfaceCases()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionFile->setText(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionConnect->setText(QApplication::translate("MainWindow", "Login", 0, QApplication::UnicodeUTF8));
        actionDisconnect->setText(QApplication::translate("MainWindow", "Logout", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDisconnect->setToolTip(QApplication::translate("MainWindow", "Disconnect from the server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        MarbleWidget->setToolTip(QApplication::translate("MainWindow", "The Earth", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        MarbleWidget->setWhatsThis(QApplication::translate("MainWindow", "The Marble widget displays a virtual globe.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        MarbleWidget->setMapThemeId(QApplication::translate("MainWindow", "earth/openstreetmap/openstreetmap.dgml", 0, QApplication::UnicodeUTF8));
        DiseaseLabel->setText(QApplication::translate("MainWindow", "Select Disease", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Submit", 0, QApplication::UnicodeUTF8));
        QuantityLabel->setText(QApplication::translate("MainWindow", "Number of Cases", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "City", 0, QApplication::UnicodeUTF8));
        DateOfOccurenceLabel->setText(QApplication::translate("MainWindow", "Date of Occurence", 0, QApplication::UnicodeUTF8));
        provinceLabel->setText(QApplication::translate("MainWindow", "Province", 0, QApplication::UnicodeUTF8));
        SelectDiseaseLabel->setText(QApplication::translate("MainWindow", "Select Disease(s)", 0, QApplication::UnicodeUTF8));
        SelectLocationLabel->setText(QApplication::translate("MainWindow", "Select Location(s)", 0, QApplication::UnicodeUTF8));
        fromDateLabel->setText(QApplication::translate("MainWindow", "From Date", 0, QApplication::UnicodeUTF8));
        KnownCasesLabel->setText(QApplication::translate("MainWindow", "Known Cases", 0, QApplication::UnicodeUTF8));
        selectMinimumDiseaseLabel->setText(QApplication::translate("MainWindow", "Min. Cases", 0, QApplication::UnicodeUTF8));
        selectMinimumDiseaseLabel_2->setText(QApplication::translate("MainWindow", "Max. Cases", 0, QApplication::UnicodeUTF8));
        ToDateLabel->setText(QApplication::translate("MainWindow", "To Date", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        caseTableWidget->setToolTip(QApplication::translate("MainWindow", "Double Click To Edit Selection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(case_tab), QApplication::translate("MainWindow", "Case Management", 0, QApplication::UnicodeUTF8));
        SelectSupplyLabel->setText(QApplication::translate("MainWindow", "Select Supply", 0, QApplication::UnicodeUTF8));
        SelectLocationLabel_3->setText(QApplication::translate("MainWindow", "Select Location", 0, QApplication::UnicodeUTF8));
        DiseaseLabel_2->setText(QApplication::translate("MainWindow", "Select Supplytype", 0, QApplication::UnicodeUTF8));
        QuantityLabel_2->setText(QApplication::translate("MainWindow", "Number of Supplies", 0, QApplication::UnicodeUTF8));
        LocationLabel_2->setText(QApplication::translate("MainWindow", "Location", 0, QApplication::UnicodeUTF8));
        SubmitSupplyButton->setText(QApplication::translate("MainWindow", "Submit", 0, QApplication::UnicodeUTF8));
        MinSupplyLabel->setText(QApplication::translate("MainWindow", "Min. Supplies", 0, QApplication::UnicodeUTF8));
        MaxSupplyLabel->setText(QApplication::translate("MainWindow", "Max. Supplies", 0, QApplication::UnicodeUTF8));
        KnownSupplyLabel->setText(QApplication::translate("MainWindow", "Known Supplies", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        knownSuppliesTable->setToolTip(QApplication::translate("MainWindow", "Double Click To Edit Selection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(Supplies_Tab), QApplication::translate("MainWindow", "Supply Management", 0, QApplication::UnicodeUTF8));
        shipmentSupplyLabel->setText(QApplication::translate("MainWindow", "Existing Shipments", 0, QApplication::UnicodeUTF8));
        shipmentToRegionLabel->setText(QApplication::translate("MainWindow", "To Region:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "From Region:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Status:", 0, QApplication::UnicodeUTF8));
        shipmentSupplyTypeLabel->setText(QApplication::translate("MainWindow", "SupplyType", 0, QApplication::UnicodeUTF8));
        shipmentToRegionLabel_2->setText(QApplication::translate("MainWindow", "To Region:", 0, QApplication::UnicodeUTF8));
        shipmentFromRegionLabel_2->setText(QApplication::translate("MainWindow", "From Region:", 0, QApplication::UnicodeUTF8));
        shipmentShipLabel->setText(QApplication::translate("MainWindow", "Amount to ship", 0, QApplication::UnicodeUTF8));
        submitShipmentButton->setText(QApplication::translate("MainWindow", "Submit", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(ShipmentTab), QApplication::translate("MainWindow", "Shipment Management", 0, QApplication::UnicodeUTF8));
        KnownCasesLabel_2->setText(QApplication::translate("MainWindow", "Known Cases", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Select Province", 0, QApplication::UnicodeUTF8));
        KnownSupplyLabel_2->setText(QApplication::translate("MainWindow", "Known Supplies", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Select Region", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        caseListWidget_2->setToolTip(QApplication::translate("MainWindow", "Double Click To Edit Selection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(MapSettingsTab), QApplication::translate("MainWindow", "Map Settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        MarbleNavigator->setToolTip(QApplication::translate("MainWindow", "Navigation Control", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        MarbleNavigator->setWhatsThis(QApplication::translate("MainWindow", "Use this control to navigate.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuNetwork->setTitle(QApplication::translate("MainWindow", "Network", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
