/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp org.kde.baloo.main.xml -a mainadaptor
 *
 * qdbusxml2cpp is Copyright (C) 2015 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef MAINADAPTOR_H
#define MAINADAPTOR_H

#include <QDBusAbstractAdaptor>

#include "mainhub.h"

/*
 * This is mainly for API compatibility and will
 * be removed as soon as plasma moves to using newer
 * D-Bus API
 */
class MainAdaptor : public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.kde.baloo")
    Q_CLASSINFO("D-Bus Introspection",
                ""
                "  <interface name=\"org.kde.baloo\">\n"
                "    <method name=\"quit\"/>\n"
                "    <method name=\"updateConfig\"/>\n"
                "  </interface>\n"
                "")
public:
    explicit MainAdaptor(Baloo::MainHub* parent);
    virtual ~MainAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void quit();
    void updateConfig();
Q_SIGNALS: // SIGNALS
private:
    Baloo::MainHub* mainHub;
};

#endif
