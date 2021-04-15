#ifndef ONEWINDOW_H
#define ONEWINDOW_H

#include <QWidget>

class Onewindow : public QWidget
{
	Q_OBJECT

public:
	Onewindow(QWidget *parent);
	~Onewindow();

private:
	bool flag;

public slots :
	void showWindow();
};

#endif // ONEWINDOW_H
