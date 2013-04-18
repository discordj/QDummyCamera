#ifndef QDUMMYINTERFACE_H
#define QDUMMYINTERFACE_H
#include <QtPlugin>

#include <qcamerainterface.h>
#include "qdummycamera.h"

class QDummyInterface : public QCameraInterface
{
	Q_OBJECT
	Q_PLUGIN_METADATA(IID "com.ctphoto.QCameraInterface/0.1");
	Q_INTERFACES(QCameraInterface)

public:
	QDummyInterface();
	~QDummyInterface();
	void initialize();
	void unload();
	QList<QCamera *> getcameras();
	QString name() { return "Dummy Camera Interface"; }
	QCamera * selectedCamera();
	QCamera *getCamera(int index);
	void removeCamera(int index);
private:
	
};

#endif // QDUMMYINTERFACE_H
