#include "preparefordictionary.h"

PrepareForDictionary::PrepareForDictionary(QWidget *parent)
	: QMainWindow(parent)
{
	//ui.setupUi(this);
	oeBtn = new QPushButton(this);
	
}

PrepareForDictionary::~PrepareForDictionary()
{
	if (oeBtn != NULL)
	{
		delete(oeBtn);
		oeBtn = NULL;
	}
}
void PrepareForDictionary::init()
{
	QMenuBar* mb = menuBar();
	setMenuBar(mb);

	QMenu* fileMenu = mb->addMenu("file");
	QMenu* editMenu = mb->addMenu("edit");

	fileMenu->addAction("create new file");
	fileMenu->addSeparator();
	fileMenu->addAction("save");
	fileMenu->addAction("save all file");
		
	editMenu->addAction("edit");
	editMenu->addAction("charSet");
}

void PrepareForDictionary::start()
{
	this->resize(900,500);
	oeBtn->move(400, 400);
	oeBtn->setText("open/close");
	Onewindow* ow = new Onewindow(this);
	ow->setParent(this);
	ow->resize(300, 300);
	ow->setWindowTitle("one window");
	ow->show();
	connect(oeBtn,&QPushButton::clicked,ow,&Onewindow::showWindow);
	oeBtn->show();
}
