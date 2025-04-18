#include "htabwidgetplugin.h"
#include "htabwidget.h"

#include <QtPlugin>

HTabWidgetPlugin::HTabWidgetPlugin(QObject *parent)
    : QObject(parent)
{}

void HTabWidgetPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool HTabWidgetPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *HTabWidgetPlugin::createWidget(QWidget *parent)
{
    return new HTabWidget(parent);
}

QString HTabWidgetPlugin::name() const
{
    return QLatin1String("HTabWidget");
}

QString HTabWidgetPlugin::group() const
{
    return QLatin1String("HF Widgets");
}

QIcon HTabWidgetPlugin::icon() const
{
    return QIcon(QLatin1String(":/image.png"));
}

QString HTabWidgetPlugin::toolTip() const
{
    return QLatin1String("");
}

QString HTabWidgetPlugin::whatsThis() const
{
    return QLatin1String("左侧横向显示tab页文字\n");
}

bool HTabWidgetPlugin::isContainer() const
{
    return false;
}

QString HTabWidgetPlugin::domXml() const
{
    return QLatin1String(R"(<widget class="HTabWidget" name="hTabWidget">
</widget>)");
}

QString HTabWidgetPlugin::includeFile() const
{
    return QLatin1String("htabwidget.h");
}
