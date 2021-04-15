#ifndef PREPAREFORDICTIONARY_H
#define PREPAREFORDICTIONARY_H

#include <QtWidgets/QMainWindow>
#include <QPushButton>
#include "ui_preparefordictionary.h"
#include"onewindow.h"
#include<qmenubar.h>


class PrepareForDictionary : public QMainWindow
{
	Q_OBJECT

public:
	PrepareForDictionary(QWidget *parent = 0);
	~PrepareForDictionary();
	void start();
	void init();

private:
	Ui::PrepareForDictionaryClass ui;
	QPushButton* oeBtn;
};

#endif // PREPAREFORDICTIONARY_H
