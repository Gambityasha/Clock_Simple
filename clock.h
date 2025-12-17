#ifndef CLOCK_H
#define CLOCK_H

#include <QWidget>
#include <QTimer>
#include <QTime>

namespace Ui {
class Clock;
}

class Clock : public QWidget
{
    Q_OBJECT

public:
    explicit Clock(QWidget *parent = nullptr);
    ~Clock();

    int timer_delay=200;
    QString font_size="50";
    QTimer *timer;

public slots:
    void Timer_SLOT();

private slots:
    void on_Clock_customContextMenuRequested(const QPoint &pos);

private:
    Ui::Clock *ui;
};

#endif // CLOCK_H
