//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : E-Healthcare-Canada
//  @ File Name : UIDrawHelper.cpp
//  @ Date : 11/9/2010
//  @ Author : 
//
//


#include "include/UIDrawHelper.h"
#include <QDebug>


UIDrawHelper::UIDrawHelper(MarbleWidget *marbleWidget) : widget(marbleWidget), index(0) {

}

UIDrawHelper::UIDrawHelper(MarbleWidget *marbleWidget, GeoDataCoordinates coord) : widget(marbleWidget), index(0), coordinates(coord) {

}

QStringList UIDrawHelper::renderPosition() const {
    // define layers for drawing on
    QStringList layers = QStringList() << "SURFACE" << "ABOVE_SURFACE";
    layers << "ORBIT" << "USER_TOOLS";

    int index = index & layers.size();
    return layers;
}

// render the drawing onto the map
bool UIDrawHelper::render(GeoPainter *painter, ViewportParams *viewPort, const QString &renderPos, GeoSceneLayer *layer) {
    widget->setWindowTitle(renderPosition().first());
   // GeoDataCoordinates home( -75, 45, 0.0, GeoDataCoordinates::Degree );
    painter->setRenderHint(QPainter::Antialiasing, true);

    // set the pen for drawing
    //painter->setPen( QPen( QBrush( QColor::fromRgb(0,0,255,200)), 3.0, Qt::SolidLine, Qt::RoundCap));
    painter->setPen( QPen( QBrush( color ) , 3.0, Qt::SolidLine, Qt::RoundCap ) );

    //GeoDataCoordinates setCoord( coordinates.longitude(), coordinates.latitude(), 0.0, GeoDataCoordinates::Degree);
    //setCoordinates(home);
    QStringList tempList;
    QString sec1;

    float x,y;
   // QList<GeoDataCoordinates*> coo;

    for( int i = 0; i < selectionList.count(); i++ ) {
        //tempList += selectionList.at(i);
        sec1 = selectionList[i];

        tempList = sec1.split(',');
        QString xx = tempList.at(0);
        QString yy = tempList.at(1);
        x = xx.toFloat();
        y = yy.toFloat();
    }

    // draw the object on the map!

        foreach( GeoDataCoordinates g, supplies ) {
            painter->drawEllipse(g, 0.8, 0.8, 0.8);
        }

        foreach( GeoDataCoordinates g, cases ) {
            //painter->drawEllipse(g, 0.8, 0.8, 0.8);
            painter->drawAnnotation(g, "sometext",QSize(100,30));
        }

    //supplies.clear();
    //cases.clear();
    return true;
}

void UIDrawHelper::setCoordinatesSupplies( GeoDataCoordinates geo ) {
    ///this->coordinates = geo;
    supplies.insert(supplies.size(), geo);
}

void UIDrawHelper::setCoordinatesSupplies( GeoDataCoordinates geo, QColor color ) {
    ///this->coordinates = geo;
    this->color = color;
    qDebug() <<"SUPCOUNT" << supplies.count();
    supplies.insert(supplies.size(), geo);
}

void UIDrawHelper::setCoordinatesCases( GeoDataCoordinates geo ) {
    ///this->coordinates = geo;
    cases.insert(cases.size(), geo);
}

void UIDrawHelper::setCoordinatesCases( GeoDataCoordinates geo, QColor color ) {
    ///this->coordinates = geo;
    this->color = color;
    qDebug() << "CASCOUNT" << cases.count();
    cases.insert(cases.size(), geo);
}

void UIDrawHelper::setCoordinates(float lat, float lon) {
    this->coordinates.setLatitude(lat);
    this->coordinates.setLongitude(lon);

}

void UIDrawHelper::setCoordinates(Model *tModel, const QString geo) {
    float lon = tModel->getContainer()->getLatitude(geo);
    float lat = tModel->getContainer()->getLonitude(geo);
  //  qDebug() << "LON:" << lon << " LAT:" << lat;
    GeoDataCoordinates newCoordinate(lon, lat, 0.0, GeoDataCoordinates::Degree);
    supplies.insert(supplies.size(), newCoordinate);
}

const GeoDataCoordinates UIDrawHelper::getCoordinates() {
    return coordinates;
}

/// TODO: FUNCTION IS BROKEN! FIX IT!
void UIDrawHelper::addToSelection( Model *tModel, QString selection ) {
   // qDebug() << "SELECTION:" << selection;

    float lon = tModel->getContainer()->getLatitude(selection);
    float lat = tModel->getContainer()->getLonitude(selection);
  //  qDebug() << "UIDrawHelper::lon:" << lon;
  //  qDebug() << "UIDrawHelper::lat:" << lat;
    // at lon+lat to selectionlist with , as separator
    QString insert;//(lon);
    QString insert2;
    insert.setNum(lon);
    insert2.setNum(lat);
    QString insert3 = insert+','+insert2;

    qDebug() << "INSERT3" << insert3;

    // insert item into the QStringList with the format float,float
    //selectionList += insert3;
    if( !selectionList.contains(insert3)) {
        selectionList.append(insert3);
    }
    //qDebug() << "SIZE:" << selectionList.size();
 //   qDebug() << "IN THE SELECTIONLIST IS: " << selectionList;
}

void UIDrawHelper::remFromSelection(Model *tModel, QString selection) {
    selectionList.removeOne(selection);
                /*
            if( selectionList.contains(selection)) {
                selectionList -= selection;
            }
            */
    qDebug() << "SELLIST NOW IS: " << selectionList;
}

void UIDrawHelper::clearSupplySelectionList() {
    //if( supplies.empty() == false ) {
       this->supplies.clear();
   // }
}

void UIDrawHelper::clearCasesSelectionList() {
  //  if( cases.empty() == false ) {
       this->cases.clear();
  //  }
}
// set up an eventfilter for the layers
// on + press, the layers switches to the next
bool UIDrawHelper::eventFilter(QObject *object, QEvent *event) {
    // adjust the current layer when + is pressed
    if( event->type() == QEvent::KeyPress ) {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        if( keyEvent->key() == Qt::Key_4 ) {
            ++index;
            return true;
        }
    }
    return false;
}

GeoDataCoordinates UIDrawHelper::approximate(const GeoDataCoordinates &base, qreal angle, qreal dist) const {
    GeoDataCoordinates::Unit deg = GeoDataCoordinates::Degree;
    return GeoDataCoordinates ( base.longitude(deg) + 1.5 * dist * sin(angle),
                                base.latitude(deg) + dist * cos(angle), 0.0, deg);
}
