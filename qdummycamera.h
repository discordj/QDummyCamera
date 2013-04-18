#ifndef QDUMMYCAMERA_H
#define QDUMMYCAMERA_H

#include "qdummycamera_global.h"

#include <qcamera.h>

class QDUMMYCAMERA_EXPORT QDummyCamera : public QCamera
{
	Q_OBJECT
public:
	QDummyCamera();
	~QDummyCamera();



//overrides
	int QCConnect();
	int QCDisconnect();

	void capture(int seconds=0);
	void setbulbmode(bool bulb);

	QImage getImage();
	QString identifier();
	QString model();
	void setSelected();


	QCameraProperties *getCameraProperties();
	QCameraProperty *getCameraProperty(QCameraProperties::QCameraPropertyTypes prop);
	void setCameraProperty(QCameraProperties::QCameraPropertyTypes prop, QVariant value);
	void setImageDirectory(QString dir);
	void setImageFilePrefix(QString imagenameprefix);

	void toggleLiveView(bool onoff);
	
	int batteryLevel();

	bool hasBulbMode();
	bool canSetBulbMode();
	bool hasLiveView();
	bool canStreamLiveView();

	void initializeLiveView();
	QPixmap *getLiveViewImage();
	void endLiveView();

	void lockUI();
	void unlockUI();
protected:
	void notifypropertychanged(QCameraProperties::QCameraPropertyTypes prop, QVariant value){}

private:

};

#endif // QDUMMYCAMERA_H
