#ifndef HTABWIDGET_H
#define HTABWIDGET_H

#include <QTabWidget>
class HTabWidgetPrivate;
class HTabWidget : public QTabWidget
{
    Q_OBJECT
    Q_PROPERTY(bool isNeedShow READ isNeedShow WRITE setNeedShow)
public:
    explicit HTabWidget(QWidget *parent = nullptr);
    virtual ~HTabWidget();

    bool isNeedShow() const;
    void setNeedShow(bool);
private:
    HTabWidgetPrivate* d_ptr;
};

#endif // HTABWIDGET_H
