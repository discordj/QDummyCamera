#include "qdummyinterface.h"

QDummyInterface::QDummyInterface()
	
{

}

QDummyInterface::~QDummyInterface()
{

}
	void QDummyInterface::initialize(){}
	void QDummyInterface::unload(){}
	QList<QCamera *> QDummyInterface::getcameras(){
		QList<QCamera *> cams;

		cams.append(new QDummyCamera());

		return cams;
	}

	QCamera * QDummyInterface::selectedCamera(){ return new QDummyCamera(); }
	QCamera *QDummyInterface::getCamera(int index) { return new QDummyCamera(); }
