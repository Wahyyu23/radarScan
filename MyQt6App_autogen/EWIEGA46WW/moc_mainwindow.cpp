/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "init_port",
        "",
        "portname",
        "readData",
        "handleError",
        "QSerialPort::SerialPortError",
        "error",
        "closeSerialPort",
        "showPortInfo",
        "idx",
        "processPayload",
        "processFayloadSocket",
        "writeData",
        "data",
        "on_btnLoad_clicked",
        "on_btnOpenSerialPort_clicked",
        "on_btnGetProductID_clicked",
        "on_btnGetProductModel_clicked",
        "on_btnGetFirmwareVersion_clicked",
        "realtimeDataSlot",
        "value",
        "realtimeDataVelocity",
        "on_btnHWModel_clicked",
        "on_btnCmdInitCompleteCek_clicked",
        "on_btnGetAngleInst_clicked",
        "on_btnGetHeightInst_clicked",
        "on_cbPresence_toggled",
        "checked",
        "on_cbFallDetection_toggled",
        "on_btnGetFallDuration_clicked",
        "on_cbStandStill_toggled",
        "on_cbTraceTracking_toggled",
        "on_btnSetHeight_clicked",
        "on_btnSetFallDuration_clicked",
        "on_btnSetAngle_clicked",
        "on_btnTestFall_clicked",
        "on_cbSocket_toggled"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'init_port'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'init_port'
        QtMocHelpers::SlotData<void(QString)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'readData'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'handleError'
        QtMocHelpers::SlotData<void(QSerialPort::SerialPortError)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'closeSerialPort'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showPortInfo'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Slot 'processPayload'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'processFayloadSocket'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'writeData'
        QtMocHelpers::SlotData<void(const QByteArray &)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QByteArray, 14 },
        }}),
        // Slot 'on_btnLoad_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnOpenSerialPort_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnGetProductID_clicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnGetProductModel_clicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnGetFirmwareVersion_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'realtimeDataSlot'
        QtMocHelpers::SlotData<void(QString)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 21 },
        }}),
        // Slot 'realtimeDataVelocity'
        QtMocHelpers::SlotData<void(QString)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 21 },
        }}),
        // Slot 'on_btnHWModel_clicked'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnCmdInitCompleteCek_clicked'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnGetAngleInst_clicked'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnGetHeightInst_clicked'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cbPresence_toggled'
        QtMocHelpers::SlotData<void(bool)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 28 },
        }}),
        // Slot 'on_cbFallDetection_toggled'
        QtMocHelpers::SlotData<void(bool)>(29, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 28 },
        }}),
        // Slot 'on_btnGetFallDuration_clicked'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cbStandStill_toggled'
        QtMocHelpers::SlotData<void(bool)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 28 },
        }}),
        // Slot 'on_cbTraceTracking_toggled'
        QtMocHelpers::SlotData<void(bool)>(32, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 28 },
        }}),
        // Slot 'on_btnSetHeight_clicked'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnSetFallDuration_clicked'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnSetAngle_clicked'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnTestFall_clicked'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cbSocket_toggled'
        QtMocHelpers::SlotData<void(bool)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 28 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->init_port(); break;
        case 1: _t->init_port((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->readData(); break;
        case 3: _t->handleError((*reinterpret_cast<std::add_pointer_t<QSerialPort::SerialPortError>>(_a[1]))); break;
        case 4: _t->closeSerialPort(); break;
        case 5: _t->showPortInfo((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->processPayload(); break;
        case 7: _t->processFayloadSocket(); break;
        case 8: _t->writeData((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 9: _t->on_btnLoad_clicked(); break;
        case 10: _t->on_btnOpenSerialPort_clicked(); break;
        case 11: _t->on_btnGetProductID_clicked(); break;
        case 12: _t->on_btnGetProductModel_clicked(); break;
        case 13: _t->on_btnGetFirmwareVersion_clicked(); break;
        case 14: _t->realtimeDataSlot((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->realtimeDataVelocity((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->on_btnHWModel_clicked(); break;
        case 17: _t->on_btnCmdInitCompleteCek_clicked(); break;
        case 18: _t->on_btnGetAngleInst_clicked(); break;
        case 19: _t->on_btnGetHeightInst_clicked(); break;
        case 20: _t->on_cbPresence_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->on_cbFallDetection_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->on_btnGetFallDuration_clicked(); break;
        case 23: _t->on_cbStandStill_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->on_cbTraceTracking_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->on_btnSetHeight_clicked(); break;
        case 26: _t->on_btnSetFallDuration_clicked(); break;
        case 27: _t->on_btnSetAngle_clicked(); break;
        case 28: _t->on_btnTestFall_clicked(); break;
        case 29: _t->on_cbSocket_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 30;
    }
    return _id;
}
QT_WARNING_POP
