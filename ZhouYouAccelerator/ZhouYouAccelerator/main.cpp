#include "ZhouYouAccelerator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ZhouYouAccelerator w;
	w.show();
	return a.exec();
}
