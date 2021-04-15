#include "onewindow.h"

Onewindow::Onewindow(QWidget *parent)
	: QWidget(parent)
{
	flag = true;
}

Onewindow::~Onewindow()
{
	
}

void Onewindow::showWindow()
{
	if (flag == true)
		this->show();
	else
	{
		this->hide();
		flag = false;
	}
}