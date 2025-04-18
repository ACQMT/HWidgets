#include "htabwidget.h"
class HTabWidgetPrivate
{
public:
    HTabWidgetPrivate(HTabWidget* q)
        : q_ptr(q)
        , isNeedShow(false)
    {

    };

    bool isNeedShow;
private:
    HTabWidget* q_ptr;
};



HTabWidget::HTabWidget(QWidget *parent)
    : QTabWidget(parent)
    , d_ptr(new HTabWidgetPrivate(this))
{
}

HTabWidget::~HTabWidget()
{
    delete d_ptr;
}

bool HTabWidget::isNeedShow()const
{
    return d_ptr->isNeedShow;
}

void HTabWidget::setNeedShow(bool status)
{
    d_ptr->isNeedShow = status;
};
