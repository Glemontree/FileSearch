#include "filesearch.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FileSearch w;
	w.show();
	return a.exec();
}
