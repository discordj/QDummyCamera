#include "qdummycamera.h"

QDummyCamera::QDummyCamera()
{

}

QDummyCamera::~QDummyCamera()
{

}


int QDummyCamera::QCConnect(){
	return 0;
}

int QDummyCamera::QCDisconnect(){
	return 0;
}


void QDummyCamera::capture(int seconds){}
void QDummyCamera::setbulbmode(bool bulb){}

QImage QDummyCamera::getImage(){ return QImage(); }
QString QDummyCamera::identifier(){ return QString("Dummy Camera");}
QString QDummyCamera::model(){ return QString("No Model");}
void QDummyCamera::setSelected(){}


QCameraProperties *QDummyCamera::getCameraProperties(){ return 0;}
QCameraProperty *QDummyCamera::getCameraProperty(QCameraProperties::QCameraPropertyTypes prop){ 
return 0;
}
void QDummyCamera::setCameraProperty(QCameraProperties::QCameraPropertyTypes prop, QVariant value){}
	
	

void QDummyCamera::setImageDirectory(QString dir){}
void QDummyCamera::setImageFilePrefix(QString imagenameprefix){}

void QDummyCamera::toggleLiveView(bool onoff){}
	
int QDummyCamera::batteryLevel(){ return 0;}

bool QDummyCamera::hasBulbMode(){ return false;}
bool QDummyCamera::canSetBulbMode(){ return false;}
bool QDummyCamera::hasLiveView(){ return false; }
bool QDummyCamera::canStreamLiveView(){ return false;}

void QDummyCamera::initializeLiveView(){}
QPixmap *QDummyCamera::getLiveViewImage(){return 0;}
void QDummyCamera::endLiveView(){}

void QDummyCamera::lockUI(){}
void QDummyCamera::unlockUI(){}