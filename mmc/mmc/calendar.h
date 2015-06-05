#ifndef CALENDAR_H
#define CALENDAR_H

#include <QMainWindow>

namespace Ui {
class calendar;
}

class calendar : public QMainWindow
{
    Q_OBJECT

public:
    explicit calendar(QWidget *parent = 0);
    ~calendar();

private:
    Ui::calendar *ui;
};

#endif // CALENDAR_H
