/****************************************************************************
** Meta object code from reading C++ file 'frmmain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../frmmain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_frmMain_t {
    QByteArrayData data[117];
    char stringdata0[2691];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_frmMain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_frmMain_t qt_meta_stringdata_frmMain = {
    {
QT_MOC_LITERAL(0, 0, 7), // "frmMain"
QT_MOC_LITERAL(1, 8, 34), // "updateHeightMapInterpolationD..."
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 5), // "reset"
QT_MOC_LITERAL(4, 50, 22), // "placeVisualizerButtons"
QT_MOC_LITERAL(5, 73, 13), // "onProcessData"
QT_MOC_LITERAL(6, 87, 12), // "onSendSerial"
QT_MOC_LITERAL(7, 100, 26), // "onTimerUpdateSpindleParser"
QT_MOC_LITERAL(8, 127, 18), // "onTimerStatusQuery"
QT_MOC_LITERAL(9, 146, 29), // "onVisualizatorRotationChanged"
QT_MOC_LITERAL(10, 176, 17), // "onScroolBarAction"
QT_MOC_LITERAL(11, 194, 6), // "action"
QT_MOC_LITERAL(12, 201, 10), // "onJogTimer"
QT_MOC_LITERAL(13, 212, 17), // "onTableInsertLine"
QT_MOC_LITERAL(14, 230, 18), // "onTableDeleteLines"
QT_MOC_LITERAL(15, 249, 24), // "onActRecentFileTriggered"
QT_MOC_LITERAL(16, 274, 25), // "onCboCommandReturnPressed"
QT_MOC_LITERAL(17, 300, 21), // "onTableCurrentChanged"
QT_MOC_LITERAL(18, 322, 11), // "QModelIndex"
QT_MOC_LITERAL(19, 334, 4), // "idx1"
QT_MOC_LITERAL(20, 339, 4), // "idx2"
QT_MOC_LITERAL(21, 344, 16), // "onConsoleResized"
QT_MOC_LITERAL(22, 361, 4), // "size"
QT_MOC_LITERAL(23, 366, 19), // "onPanelsSizeChanged"
QT_MOC_LITERAL(24, 386, 16), // "onCmdUserClicked"
QT_MOC_LITERAL(25, 403, 7), // "checked"
QT_MOC_LITERAL(26, 411, 19), // "onOverridingToggled"
QT_MOC_LITERAL(27, 431, 26), // "onActSendFromLineTriggered"
QT_MOC_LITERAL(28, 458, 24), // "on_actFileExit_triggered"
QT_MOC_LITERAL(29, 483, 22), // "on_cmdFileOpen_clicked"
QT_MOC_LITERAL(30, 506, 17), // "on_cmdFit_clicked"
QT_MOC_LITERAL(31, 524, 22), // "on_cmdFileSend_clicked"
QT_MOC_LITERAL(32, 547, 18), // "onTableCellChanged"
QT_MOC_LITERAL(33, 566, 2), // "i1"
QT_MOC_LITERAL(34, 569, 2), // "i2"
QT_MOC_LITERAL(35, 572, 31), // "on_actServiceSettings_triggered"
QT_MOC_LITERAL(36, 604, 24), // "on_actFileOpen_triggered"
QT_MOC_LITERAL(37, 629, 25), // "on_cmdCommandSend_clicked"
QT_MOC_LITERAL(38, 655, 18), // "on_cmdHome_clicked"
QT_MOC_LITERAL(39, 674, 19), // "on_cmdTouch_clicked"
QT_MOC_LITERAL(40, 694, 19), // "on_cmdZeroX_clicked"
QT_MOC_LITERAL(41, 714, 19), // "on_cmdZeroY_clicked"
QT_MOC_LITERAL(42, 734, 19), // "on_cmdZeroZ_clicked"
QT_MOC_LITERAL(43, 754, 27), // "on_cmdRestoreOrigin_clicked"
QT_MOC_LITERAL(44, 782, 19), // "on_cmdReset_clicked"
QT_MOC_LITERAL(45, 802, 20), // "on_cmdUnlock_clicked"
QT_MOC_LITERAL(46, 823, 26), // "on_cmdSafePosition_clicked"
QT_MOC_LITERAL(47, 850, 21), // "on_cmdSpindle_toggled"
QT_MOC_LITERAL(48, 872, 22), // "on_chkTestMode_clicked"
QT_MOC_LITERAL(49, 895, 23), // "on_cmdFilePause_clicked"
QT_MOC_LITERAL(50, 919, 23), // "on_cmdFileReset_clicked"
QT_MOC_LITERAL(51, 943, 23), // "on_actFileNew_triggered"
QT_MOC_LITERAL(52, 967, 26), // "on_cmdClearConsole_clicked"
QT_MOC_LITERAL(53, 994, 26), // "on_actFileSaveAs_triggered"
QT_MOC_LITERAL(54, 1021, 24), // "on_actFileSave_triggered"
QT_MOC_LITERAL(55, 1046, 37), // "on_actFileSaveTransformedAs_t..."
QT_MOC_LITERAL(56, 1084, 17), // "on_cmdTop_clicked"
QT_MOC_LITERAL(57, 1102, 19), // "on_cmdFront_clicked"
QT_MOC_LITERAL(58, 1122, 18), // "on_cmdLeft_clicked"
QT_MOC_LITERAL(59, 1141, 23), // "on_cmdIsometric_clicked"
QT_MOC_LITERAL(60, 1165, 21), // "on_actAbout_triggered"
QT_MOC_LITERAL(61, 1187, 24), // "on_grpOverriding_toggled"
QT_MOC_LITERAL(62, 1212, 21), // "on_grpSpindle_toggled"
QT_MOC_LITERAL(63, 1234, 17), // "on_grpJog_toggled"
QT_MOC_LITERAL(64, 1252, 26), // "on_grpUserCommands_toggled"
QT_MOC_LITERAL(65, 1279, 29), // "on_chkKeyboardControl_toggled"
QT_MOC_LITERAL(66, 1309, 40), // "on_tblProgram_customContextMe..."
QT_MOC_LITERAL(67, 1350, 3), // "pos"
QT_MOC_LITERAL(68, 1354, 25), // "on_splitter_splitterMoved"
QT_MOC_LITERAL(69, 1380, 5), // "index"
QT_MOC_LITERAL(70, 1386, 27), // "on_actRecentClear_triggered"
QT_MOC_LITERAL(71, 1414, 23), // "on_grpHeightMap_toggled"
QT_MOC_LITERAL(72, 1438, 4), // "arg1"
QT_MOC_LITERAL(73, 1443, 33), // "on_chkHeightMapBorderShow_tog..."
QT_MOC_LITERAL(74, 1477, 35), // "on_txtHeightMapBorderX_valueC..."
QT_MOC_LITERAL(75, 1513, 39), // "on_txtHeightMapBorderWidth_va..."
QT_MOC_LITERAL(76, 1553, 35), // "on_txtHeightMapBorderY_valueC..."
QT_MOC_LITERAL(77, 1589, 40), // "on_txtHeightMapBorderHeight_v..."
QT_MOC_LITERAL(78, 1630, 31), // "on_chkHeightMapGridShow_toggled"
QT_MOC_LITERAL(79, 1662, 33), // "on_txtHeightMapGridX_valueCha..."
QT_MOC_LITERAL(80, 1696, 33), // "on_txtHeightMapGridY_valueCha..."
QT_MOC_LITERAL(81, 1730, 39), // "on_txtHeightMapGridZBottom_va..."
QT_MOC_LITERAL(82, 1770, 36), // "on_txtHeightMapGridZTop_value..."
QT_MOC_LITERAL(83, 1807, 27), // "on_cmdHeightMapMode_toggled"
QT_MOC_LITERAL(84, 1835, 40), // "on_chkHeightMapInterpolationS..."
QT_MOC_LITERAL(85, 1876, 27), // "on_cmdHeightMapLoad_clicked"
QT_MOC_LITERAL(86, 1904, 46), // "on_txtHeightMapInterpolationS..."
QT_MOC_LITERAL(87, 1951, 46), // "on_txtHeightMapInterpolationS..."
QT_MOC_LITERAL(88, 1998, 26), // "on_chkHeightMapUse_clicked"
QT_MOC_LITERAL(89, 2025, 29), // "on_cmdHeightMapCreate_clicked"
QT_MOC_LITERAL(90, 2055, 33), // "on_cmdHeightMapBorderAuto_cli..."
QT_MOC_LITERAL(91, 2089, 23), // "on_cmdFileAbort_clicked"
QT_MOC_LITERAL(92, 2113, 21), // "on_cmdSpindle_clicked"
QT_MOC_LITERAL(93, 2135, 19), // "on_cmdYPlus_pressed"
QT_MOC_LITERAL(94, 2155, 20), // "on_cmdYPlus_released"
QT_MOC_LITERAL(95, 2176, 20), // "on_cmdYMinus_pressed"
QT_MOC_LITERAL(96, 2197, 21), // "on_cmdYMinus_released"
QT_MOC_LITERAL(97, 2219, 19), // "on_cmdXPlus_pressed"
QT_MOC_LITERAL(98, 2239, 20), // "on_cmdXPlus_released"
QT_MOC_LITERAL(99, 2260, 20), // "on_cmdXMinus_pressed"
QT_MOC_LITERAL(100, 2281, 21), // "on_cmdXMinus_released"
QT_MOC_LITERAL(101, 2303, 19), // "on_cmdZPlus_pressed"
QT_MOC_LITERAL(102, 2323, 20), // "on_cmdZPlus_released"
QT_MOC_LITERAL(103, 2344, 20), // "on_cmdZMinus_pressed"
QT_MOC_LITERAL(104, 2365, 21), // "on_cmdZMinus_released"
QT_MOC_LITERAL(105, 2387, 18), // "on_cmdStop_clicked"
QT_MOC_LITERAL(106, 2406, 23), // "on_cmdSpindle_triggered"
QT_MOC_LITERAL(107, 2430, 8), // "QAction*"
QT_MOC_LITERAL(108, 2439, 20), // "on_btnReload_clicked"
QT_MOC_LITERAL(109, 2460, 21), // "on_btnConnect_clicked"
QT_MOC_LITERAL(110, 2482, 36), // "on_comboInterface_currentText..."
QT_MOC_LITERAL(111, 2519, 29), // "on_actionHard_Reset_triggered"
QT_MOC_LITERAL(112, 2549, 35), // "on_actionSet_TLS_Position_tri..."
QT_MOC_LITERAL(113, 2585, 34), // "on_actionDisable_Stepper_trig..."
QT_MOC_LITERAL(114, 2620, 23), // "on_btnHandwheel_clicked"
QT_MOC_LITERAL(115, 2644, 22), // "on_btnSetCoord_clicked"
QT_MOC_LITERAL(116, 2667, 23) // "on_btnSaveCoord_clicked"

    },
    "frmMain\0updateHeightMapInterpolationDrawer\0"
    "\0reset\0placeVisualizerButtons\0"
    "onProcessData\0onSendSerial\0"
    "onTimerUpdateSpindleParser\0"
    "onTimerStatusQuery\0onVisualizatorRotationChanged\0"
    "onScroolBarAction\0action\0onJogTimer\0"
    "onTableInsertLine\0onTableDeleteLines\0"
    "onActRecentFileTriggered\0"
    "onCboCommandReturnPressed\0"
    "onTableCurrentChanged\0QModelIndex\0"
    "idx1\0idx2\0onConsoleResized\0size\0"
    "onPanelsSizeChanged\0onCmdUserClicked\0"
    "checked\0onOverridingToggled\0"
    "onActSendFromLineTriggered\0"
    "on_actFileExit_triggered\0"
    "on_cmdFileOpen_clicked\0on_cmdFit_clicked\0"
    "on_cmdFileSend_clicked\0onTableCellChanged\0"
    "i1\0i2\0on_actServiceSettings_triggered\0"
    "on_actFileOpen_triggered\0"
    "on_cmdCommandSend_clicked\0on_cmdHome_clicked\0"
    "on_cmdTouch_clicked\0on_cmdZeroX_clicked\0"
    "on_cmdZeroY_clicked\0on_cmdZeroZ_clicked\0"
    "on_cmdRestoreOrigin_clicked\0"
    "on_cmdReset_clicked\0on_cmdUnlock_clicked\0"
    "on_cmdSafePosition_clicked\0"
    "on_cmdSpindle_toggled\0on_chkTestMode_clicked\0"
    "on_cmdFilePause_clicked\0on_cmdFileReset_clicked\0"
    "on_actFileNew_triggered\0"
    "on_cmdClearConsole_clicked\0"
    "on_actFileSaveAs_triggered\0"
    "on_actFileSave_triggered\0"
    "on_actFileSaveTransformedAs_triggered\0"
    "on_cmdTop_clicked\0on_cmdFront_clicked\0"
    "on_cmdLeft_clicked\0on_cmdIsometric_clicked\0"
    "on_actAbout_triggered\0on_grpOverriding_toggled\0"
    "on_grpSpindle_toggled\0on_grpJog_toggled\0"
    "on_grpUserCommands_toggled\0"
    "on_chkKeyboardControl_toggled\0"
    "on_tblProgram_customContextMenuRequested\0"
    "pos\0on_splitter_splitterMoved\0index\0"
    "on_actRecentClear_triggered\0"
    "on_grpHeightMap_toggled\0arg1\0"
    "on_chkHeightMapBorderShow_toggled\0"
    "on_txtHeightMapBorderX_valueChanged\0"
    "on_txtHeightMapBorderWidth_valueChanged\0"
    "on_txtHeightMapBorderY_valueChanged\0"
    "on_txtHeightMapBorderHeight_valueChanged\0"
    "on_chkHeightMapGridShow_toggled\0"
    "on_txtHeightMapGridX_valueChanged\0"
    "on_txtHeightMapGridY_valueChanged\0"
    "on_txtHeightMapGridZBottom_valueChanged\0"
    "on_txtHeightMapGridZTop_valueChanged\0"
    "on_cmdHeightMapMode_toggled\0"
    "on_chkHeightMapInterpolationShow_toggled\0"
    "on_cmdHeightMapLoad_clicked\0"
    "on_txtHeightMapInterpolationStepX_valueChanged\0"
    "on_txtHeightMapInterpolationStepY_valueChanged\0"
    "on_chkHeightMapUse_clicked\0"
    "on_cmdHeightMapCreate_clicked\0"
    "on_cmdHeightMapBorderAuto_clicked\0"
    "on_cmdFileAbort_clicked\0on_cmdSpindle_clicked\0"
    "on_cmdYPlus_pressed\0on_cmdYPlus_released\0"
    "on_cmdYMinus_pressed\0on_cmdYMinus_released\0"
    "on_cmdXPlus_pressed\0on_cmdXPlus_released\0"
    "on_cmdXMinus_pressed\0on_cmdXMinus_released\0"
    "on_cmdZPlus_pressed\0on_cmdZPlus_released\0"
    "on_cmdZMinus_pressed\0on_cmdZMinus_released\0"
    "on_cmdStop_clicked\0on_cmdSpindle_triggered\0"
    "QAction*\0on_btnReload_clicked\0"
    "on_btnConnect_clicked\0"
    "on_comboInterface_currentTextChanged\0"
    "on_actionHard_Reset_triggered\0"
    "on_actionSet_TLS_Position_triggered\0"
    "on_actionDisable_Stepper_triggered\0"
    "on_btnHandwheel_clicked\0on_btnSetCoord_clicked\0"
    "on_btnSaveCoord_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_frmMain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     103,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  529,    2, 0x08 /* Private */,
       1,    0,  532,    2, 0x28 /* Private | MethodCloned */,
       4,    0,  533,    2, 0x08 /* Private */,
       5,    0,  534,    2, 0x08 /* Private */,
       6,    0,  535,    2, 0x08 /* Private */,
       7,    0,  536,    2, 0x08 /* Private */,
       8,    0,  537,    2, 0x08 /* Private */,
       9,    0,  538,    2, 0x08 /* Private */,
      10,    1,  539,    2, 0x08 /* Private */,
      12,    0,  542,    2, 0x08 /* Private */,
      13,    0,  543,    2, 0x08 /* Private */,
      14,    0,  544,    2, 0x08 /* Private */,
      15,    0,  545,    2, 0x08 /* Private */,
      16,    0,  546,    2, 0x08 /* Private */,
      17,    2,  547,    2, 0x08 /* Private */,
      21,    1,  552,    2, 0x08 /* Private */,
      23,    1,  555,    2, 0x08 /* Private */,
      24,    1,  558,    2, 0x08 /* Private */,
      26,    1,  561,    2, 0x08 /* Private */,
      27,    0,  564,    2, 0x08 /* Private */,
      28,    0,  565,    2, 0x08 /* Private */,
      29,    0,  566,    2, 0x08 /* Private */,
      30,    0,  567,    2, 0x08 /* Private */,
      31,    0,  568,    2, 0x08 /* Private */,
      32,    2,  569,    2, 0x08 /* Private */,
      35,    0,  574,    2, 0x08 /* Private */,
      36,    0,  575,    2, 0x08 /* Private */,
      37,    0,  576,    2, 0x08 /* Private */,
      38,    0,  577,    2, 0x08 /* Private */,
      39,    0,  578,    2, 0x08 /* Private */,
      40,    0,  579,    2, 0x08 /* Private */,
      41,    0,  580,    2, 0x08 /* Private */,
      42,    0,  581,    2, 0x08 /* Private */,
      43,    0,  582,    2, 0x08 /* Private */,
      44,    0,  583,    2, 0x08 /* Private */,
      45,    0,  584,    2, 0x08 /* Private */,
      46,    0,  585,    2, 0x08 /* Private */,
      47,    1,  586,    2, 0x08 /* Private */,
      48,    1,  589,    2, 0x08 /* Private */,
      49,    1,  592,    2, 0x08 /* Private */,
      50,    0,  595,    2, 0x08 /* Private */,
      51,    0,  596,    2, 0x08 /* Private */,
      52,    0,  597,    2, 0x08 /* Private */,
      53,    0,  598,    2, 0x08 /* Private */,
      54,    0,  599,    2, 0x08 /* Private */,
      55,    0,  600,    2, 0x08 /* Private */,
      56,    0,  601,    2, 0x08 /* Private */,
      57,    0,  602,    2, 0x08 /* Private */,
      58,    0,  603,    2, 0x08 /* Private */,
      59,    0,  604,    2, 0x08 /* Private */,
      60,    0,  605,    2, 0x08 /* Private */,
      61,    1,  606,    2, 0x08 /* Private */,
      62,    1,  609,    2, 0x08 /* Private */,
      63,    1,  612,    2, 0x08 /* Private */,
      64,    1,  615,    2, 0x08 /* Private */,
      65,    1,  618,    2, 0x08 /* Private */,
      66,    1,  621,    2, 0x08 /* Private */,
      68,    2,  624,    2, 0x08 /* Private */,
      70,    0,  629,    2, 0x08 /* Private */,
      71,    1,  630,    2, 0x08 /* Private */,
      73,    1,  633,    2, 0x08 /* Private */,
      74,    1,  636,    2, 0x08 /* Private */,
      75,    1,  639,    2, 0x08 /* Private */,
      76,    1,  642,    2, 0x08 /* Private */,
      77,    1,  645,    2, 0x08 /* Private */,
      78,    1,  648,    2, 0x08 /* Private */,
      79,    1,  651,    2, 0x08 /* Private */,
      80,    1,  654,    2, 0x08 /* Private */,
      81,    1,  657,    2, 0x08 /* Private */,
      82,    1,  660,    2, 0x08 /* Private */,
      83,    1,  663,    2, 0x08 /* Private */,
      84,    1,  666,    2, 0x08 /* Private */,
      85,    0,  669,    2, 0x08 /* Private */,
      86,    1,  670,    2, 0x08 /* Private */,
      87,    1,  673,    2, 0x08 /* Private */,
      88,    1,  676,    2, 0x08 /* Private */,
      89,    0,  679,    2, 0x08 /* Private */,
      90,    0,  680,    2, 0x08 /* Private */,
      91,    0,  681,    2, 0x08 /* Private */,
      92,    1,  682,    2, 0x08 /* Private */,
      93,    0,  685,    2, 0x08 /* Private */,
      94,    0,  686,    2, 0x08 /* Private */,
      95,    0,  687,    2, 0x08 /* Private */,
      96,    0,  688,    2, 0x08 /* Private */,
      97,    0,  689,    2, 0x08 /* Private */,
      98,    0,  690,    2, 0x08 /* Private */,
      99,    0,  691,    2, 0x08 /* Private */,
     100,    0,  692,    2, 0x08 /* Private */,
     101,    0,  693,    2, 0x08 /* Private */,
     102,    0,  694,    2, 0x08 /* Private */,
     103,    0,  695,    2, 0x08 /* Private */,
     104,    0,  696,    2, 0x08 /* Private */,
     105,    0,  697,    2, 0x08 /* Private */,
     106,    1,  698,    2, 0x08 /* Private */,
     108,    0,  701,    2, 0x08 /* Private */,
     109,    0,  702,    2, 0x08 /* Private */,
     110,    1,  703,    2, 0x08 /* Private */,
     111,    0,  706,    2, 0x08 /* Private */,
     112,    0,  707,    2, 0x08 /* Private */,
     113,    0,  708,    2, 0x08 /* Private */,
     114,    0,  709,    2, 0x08 /* Private */,
     115,    0,  710,    2, 0x08 /* Private */,
     116,    0,  711,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18,   19,   20,
    QMetaType::Void, QMetaType::QSize,   22,
    QMetaType::Void, QMetaType::QSize,   22,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18,   33,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::QPoint,   67,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   67,   69,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Double,   72,
    QMetaType::Void, QMetaType::Double,   72,
    QMetaType::Void, QMetaType::Double,   72,
    QMetaType::Void, QMetaType::Double,   72,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Double,   72,
    QMetaType::Void, QMetaType::Double,   72,
    QMetaType::Void, QMetaType::Double,   72,
    QMetaType::Void, QMetaType::Double,   72,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   72,
    QMetaType::Void, QMetaType::Double,   72,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 107,   72,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   72,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void frmMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<frmMain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateHeightMapInterpolationDrawer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateHeightMapInterpolationDrawer(); break;
        case 2: _t->placeVisualizerButtons(); break;
        case 3: _t->onProcessData(); break;
        case 4: _t->onSendSerial(); break;
        case 5: _t->onTimerUpdateSpindleParser(); break;
        case 6: _t->onTimerStatusQuery(); break;
        case 7: _t->onVisualizatorRotationChanged(); break;
        case 8: _t->onScroolBarAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onJogTimer(); break;
        case 10: _t->onTableInsertLine(); break;
        case 11: _t->onTableDeleteLines(); break;
        case 12: _t->onActRecentFileTriggered(); break;
        case 13: _t->onCboCommandReturnPressed(); break;
        case 14: _t->onTableCurrentChanged((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 15: _t->onConsoleResized((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 16: _t->onPanelsSizeChanged((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 17: _t->onCmdUserClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->onOverridingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->onActSendFromLineTriggered(); break;
        case 20: _t->on_actFileExit_triggered(); break;
        case 21: _t->on_cmdFileOpen_clicked(); break;
        case 22: _t->on_cmdFit_clicked(); break;
        case 23: _t->on_cmdFileSend_clicked(); break;
        case 24: _t->onTableCellChanged((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 25: _t->on_actServiceSettings_triggered(); break;
        case 26: _t->on_actFileOpen_triggered(); break;
        case 27: _t->on_cmdCommandSend_clicked(); break;
        case 28: _t->on_cmdHome_clicked(); break;
        case 29: _t->on_cmdTouch_clicked(); break;
        case 30: _t->on_cmdZeroX_clicked(); break;
        case 31: _t->on_cmdZeroY_clicked(); break;
        case 32: _t->on_cmdZeroZ_clicked(); break;
        case 33: _t->on_cmdRestoreOrigin_clicked(); break;
        case 34: _t->on_cmdReset_clicked(); break;
        case 35: _t->on_cmdUnlock_clicked(); break;
        case 36: _t->on_cmdSafePosition_clicked(); break;
        case 37: _t->on_cmdSpindle_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->on_chkTestMode_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->on_cmdFilePause_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->on_cmdFileReset_clicked(); break;
        case 41: _t->on_actFileNew_triggered(); break;
        case 42: _t->on_cmdClearConsole_clicked(); break;
        case 43: _t->on_actFileSaveAs_triggered(); break;
        case 44: _t->on_actFileSave_triggered(); break;
        case 45: _t->on_actFileSaveTransformedAs_triggered(); break;
        case 46: _t->on_cmdTop_clicked(); break;
        case 47: _t->on_cmdFront_clicked(); break;
        case 48: _t->on_cmdLeft_clicked(); break;
        case 49: _t->on_cmdIsometric_clicked(); break;
        case 50: _t->on_actAbout_triggered(); break;
        case 51: _t->on_grpOverriding_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->on_grpSpindle_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->on_grpJog_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->on_grpUserCommands_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->on_chkKeyboardControl_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: _t->on_tblProgram_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 57: _t->on_splitter_splitterMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 58: _t->on_actRecentClear_triggered(); break;
        case 59: _t->on_grpHeightMap_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 60: _t->on_chkHeightMapBorderShow_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 61: _t->on_txtHeightMapBorderX_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 62: _t->on_txtHeightMapBorderWidth_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 63: _t->on_txtHeightMapBorderY_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 64: _t->on_txtHeightMapBorderHeight_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 65: _t->on_chkHeightMapGridShow_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 66: _t->on_txtHeightMapGridX_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 67: _t->on_txtHeightMapGridY_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 68: _t->on_txtHeightMapGridZBottom_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 69: _t->on_txtHeightMapGridZTop_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 70: _t->on_cmdHeightMapMode_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 71: _t->on_chkHeightMapInterpolationShow_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 72: _t->on_cmdHeightMapLoad_clicked(); break;
        case 73: _t->on_txtHeightMapInterpolationStepX_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 74: _t->on_txtHeightMapInterpolationStepY_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 75: _t->on_chkHeightMapUse_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 76: _t->on_cmdHeightMapCreate_clicked(); break;
        case 77: _t->on_cmdHeightMapBorderAuto_clicked(); break;
        case 78: _t->on_cmdFileAbort_clicked(); break;
        case 79: _t->on_cmdSpindle_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 80: _t->on_cmdYPlus_pressed(); break;
        case 81: _t->on_cmdYPlus_released(); break;
        case 82: _t->on_cmdYMinus_pressed(); break;
        case 83: _t->on_cmdYMinus_released(); break;
        case 84: _t->on_cmdXPlus_pressed(); break;
        case 85: _t->on_cmdXPlus_released(); break;
        case 86: _t->on_cmdXMinus_pressed(); break;
        case 87: _t->on_cmdXMinus_released(); break;
        case 88: _t->on_cmdZPlus_pressed(); break;
        case 89: _t->on_cmdZPlus_released(); break;
        case 90: _t->on_cmdZMinus_pressed(); break;
        case 91: _t->on_cmdZMinus_released(); break;
        case 92: _t->on_cmdStop_clicked(); break;
        case 93: _t->on_cmdSpindle_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 94: _t->on_btnReload_clicked(); break;
        case 95: _t->on_btnConnect_clicked(); break;
        case 96: _t->on_comboInterface_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 97: _t->on_actionHard_Reset_triggered(); break;
        case 98: _t->on_actionSet_TLS_Position_triggered(); break;
        case 99: _t->on_actionDisable_Stepper_triggered(); break;
        case 100: _t->on_btnHandwheel_clicked(); break;
        case 101: _t->on_btnSetCoord_clicked(); break;
        case 102: _t->on_btnSaveCoord_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 93:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject frmMain::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_frmMain.data,
    qt_meta_data_frmMain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *frmMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *frmMain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_frmMain.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int frmMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 103)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 103;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 103)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 103;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
