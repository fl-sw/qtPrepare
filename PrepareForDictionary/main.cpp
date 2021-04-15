#include "preparefordictionary.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	PrepareForDictionary w;
	w.show();
	w.start();
	w.init();
	return a.exec();
}
