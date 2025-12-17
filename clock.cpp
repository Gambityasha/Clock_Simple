#include "clock.h"
#include "ui_clock.h"




Clock::Clock(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Clock)
{
    ui->setupUi(this);
    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(Timer_SLOT()));
    timer->start(timer_delay);
    this->setContextMenuPolicy(Qt::CustomContextMenu);

    ui->label->setStyleSheet("font-size: "+font_size+"px;");
    ui->frame->setFrameStyle(QFrame::Sunken);//Plain - плоская, Raised - поднятая, Sunken - утопленная

    //ui->frame->setFrameShape(QFrame::WinPanel); //QFrame::Shape Box, Panel, StyledPanel, HLine, VLine, WinPanel
    ui->frame->setFrameShape(QFrame::Box); //QFrame::Shape Box, Panel, StyledPanel, HLine, VLine, WinPanel
    ui->frame->setLineWidth(5);

}

Clock::~Clock()
{
    delete ui;
}

void Clock::Timer_SLOT()
{
    ui->label->setText(QTime::currentTime().toString("HH:mm:ss"));
}

void Clock::on_Clock_customContextMenuRequested(const QPoint &pos)
{

}

